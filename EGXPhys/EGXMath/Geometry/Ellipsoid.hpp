// Common Ellipsoid Characteristics

//=================================
// header guards
#ifndef __MATH_GEOMETRY_ELLIPSOID_HPP__ 
#define __MATH_GEOMETRY_ELLIPSOID_HPP__

//=================================
// included dependencies
#include <glm/fwd.hpp>
//=================================
//

namespace EGMath 
{ 
namespace Geometry
{

double EllipsoidSurfaceArea( double aSemiAxis, double bSemiAxis, double cSemiAxis );
double EllipsoidVolume( const double aSemiAxis, const double bSemiAxis, const double cSemiAxis );
double EllipsoidFlattening( double aSemiAxis, double cSemiAxis);
glm::mat3 EllipsoidInertia( const double mass, const double aSemiAxis, const double bSemiAxis, const double cSemiAxis);
	
}
}

#endif
