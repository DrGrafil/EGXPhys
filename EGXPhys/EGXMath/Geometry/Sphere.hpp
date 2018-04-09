// Common Sphere Characteristics

//=================================
// header guards
#ifndef __MATH_GEOMETRY_SPHERE_HPP__ 
#define __MATH_GEOMETRY_SPHERE_HPP__

//=================================
// included dependencies
#include <glm/fwd.hpp>
//=================================
//

namespace EGMath 
{ 
namespace Geometry
{

double SphereSurfaceArea( const double radius );
double SphereVolume( const double radius );
glm::mat3 SphereInertia( const double mass, const double radius);

}
}

#endif
