// Common Ellipse Characteristics

//=================================
// header guards
#ifndef __MATH_GEOMETRY_ELLIPSE_HPP__ 
#define __MATH_GEOMETRY_ELLIPSE_HPP__

//=================================
// included dependencies
#include <glm/fwd.hpp>
//=================================
//

namespace EGMath 
{ 
namespace Geometry
{

double EllipseArea( const double semimajor, const double semiminor );
double EllipseCircumference( const double semimajor, const double semiminor );
glm::mat3 EllipseInertia( const double mass, const double semimajor, const double semiminor);

}
}

#endif
