// Common Cuboid Characteristics

//=================================
// header guards
#ifndef __MATH_GEOMETRY_CUBOID_HPP__ 
#define __MATH_GEOMETRY_CUBOID_HPP__

//=================================
// included dependencies
#include <glm/fwd.hpp>
//=================================
//

namespace EGMath 
{ 
namespace Geometry
{

double CuboidSurfaceArea( const double height, const double width, const double depth );
double CuboidVolume( const double height, const double width, const double depth );
glm::mat3 CuboidInertia( const double mass, const double height, const double width, const double depth );

}
}

#endif
