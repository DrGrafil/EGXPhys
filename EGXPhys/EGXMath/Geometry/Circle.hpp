// Common Circle Characteristics

//=================================
// header guards
#ifndef __MATH_GEOMETRY_CIRCLE_HPP__ 
#define __MATH_GEOMETRY_CIRCLE_HPP__

//=================================
// included dependencies
#include <glm/fwd.hpp>
//=================================
//

namespace EGMath 
{ 
namespace Geometry
{

double CircleArea( const double radius );
double CircleCircumference( const double radius );
glm::mat3 CircleInertia( const double mass, const double radius);
glm::mat3 DiskInertia( const double mass, const double radius);
	
}
}

#endif
