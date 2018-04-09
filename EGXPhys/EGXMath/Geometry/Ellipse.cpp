#include "Math/Geometry/Ellipse.hpp"
#include <math.h>
#include <glm/glm.hpp>
#include "Math/MathConst.hpp"


namespace EGMath 
{ 
namespace Geometry
{

double EllipseArea( const double semimajor, const double semiminor )
{
	return pi * semimajor * semiminor;
}

double EllipseCircumference( const double semimajor, const double semiminor )
{
	double a, b;
	if( semimajor == semiminor )
	{
		return pi * semimajor * semimajor;
	}
	else if(semimajor > semiminor )
	{
		a = semimajor;
		b = semiminor;
	}
	else
	{
		b = semimajor;
		a = semiminor;	
	}
	
	//Approximation
	double h = pow( a - b , 2.0 ) /  pow( a + b , 2.0 );
	return  pi * (a + b) * ( 1.0 + 3.0 * h / ( 10.0 + sqrt(4.0 - 3.0 * h )) );
}

glm::mat3 EllipseInertia( const double mass, const double semimajor, const double semiminor)
{
	glm::mat3 matrix = glm::mat3(0.0);

	matrix[0][0] = static_cast<decltype(matrix[0].x)>(1.0f/4.0f * mass * semimajor * semimajor);
	matrix[1][1] = static_cast<decltype(matrix[0].x)>(1.0f/4.0f * mass * semiminor * semiminor);
	matrix[2][2] = static_cast<decltype(matrix[0].x)>(1.0f/4.0f * mass * semimajor * semimajor + 1.0/4.0 * mass * semiminor * semiminor );
	
	return matrix;
}

}
}
