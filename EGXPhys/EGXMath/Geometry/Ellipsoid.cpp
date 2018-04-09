#include "Math/Geometry/Ellipsoid.hpp"
#include <math.h>
#include <glm/glm.hpp>
#include <algorithm> 
#include "Math/MathConst.hpp"



namespace EGMath 
{ 
namespace Geometry
{

//https://en.wikipedia.org/wiki/Spheroid
//http://www.numericana.com/answer/ellipsoid.htm
//https://en.wikipedia.org/wiki/Ellipsoid
//http://www.web-formulas.com/Math_Formulas/Geometry_Surface_of_Ellipsoid.aspx
double EllipsoidSurfaceArea( double aSemiAxis, double bSemiAxis, double cSemiAxis )
{
	// orders from largest to smalles a, b, c
	if( aSemiAxis < bSemiAxis ) std::swap( aSemiAxis, bSemiAxis );
	if( aSemiAxis < cSemiAxis ) std::swap( aSemiAxis, cSemiAxis );
	if( bSemiAxis < cSemiAxis ) std::swap( bSemiAxis, cSemiAxis );
	
	if( ( aSemiAxis == bSemiAxis ) && ( bSemiAxis == cSemiAxis ) ) //Sphere
	{
		return 4.0 * pi * aSemiAxis * aSemiAxis;
	}
	else if( aSemiAxis == bSemiAxis ) // Oblate sphereoid both a and b are greater then c
	{
		// http://mathworld.wolfram.com/OblateSpheroid.html
		double ellipticity = sqrt( 1.0 - ( cSemiAxis * cSemiAxis )/( aSemiAxis * aSemiAxis ) );
		return 2.0 * pi * aSemiAxis * aSemiAxis + pi * ( cSemiAxis * cSemiAxis )/ ellipticity * log( ( 1.0 + ellipticity)/ ( 1.0 - ellipticity) );		
	}
	else if( bSemiAxis == cSemiAxis ) // Prolate sphereoid
	{
		double ellipticity = sqrt( 1.0 - ( cSemiAxis * cSemiAxis )/( aSemiAxis * aSemiAxis ) );
		return 2.0 * pi * cSemiAxis * cSemiAxis + 2.0 * pi * ( aSemiAxis * cSemiAxis )/ ellipticity * asin(ellipticity);
			
	}
	else // Need to approximate
	{
		double powConst = 1.6075;
		return 4.0 * pi * pow( 
								( pow( aSemiAxis * bSemiAxis ,powConst)+ pow( aSemiAxis * cSemiAxis ,powConst) + pow( bSemiAxis * cSemiAxis ,powConst) )
								/ 
								3.0 
						, 1.0/powConst );
	}
}

double EllipsoidVolume( const double aSemiAxis, const double bSemiAxis, const double cSemiAxis )
{
	return 4.0/3.0 * pi * aSemiAxis * bSemiAxis * cSemiAxis;
}

// Flattening.
// Oblate sphereoid both a = b which are greater then c
double EllipsoidFlattening( double aSemiAxis, double cSemiAxis)
{
	if( aSemiAxis < cSemiAxis ) std::swap( aSemiAxis, cSemiAxis );
	
	return ( aSemiAxis - cSemiAxis ) / cSemiAxis;
}

glm::mat3 EllipsoidInertia( const double mass, const double aSemiAxis, const double bSemiAxis, const double cSemiAxis)
{
	glm::mat3 matrix = glm::mat3(0.0);

	matrix[0][0] = static_cast<decltype(matrix[0].x)>(1.0/5.0 * mass * ( bSemiAxis*bSemiAxis + cSemiAxis*cSemiAxis));
	matrix[1][1] = static_cast<decltype(matrix[0].x)>(1.0/5.0 * mass * ( aSemiAxis*aSemiAxis + cSemiAxis*cSemiAxis));
	matrix[2][2] = static_cast<decltype(matrix[0].x)>(1.0/5.0 * mass * ( aSemiAxis*aSemiAxis + bSemiAxis*bSemiAxis));
	
	return matrix;
}

	
}
}
