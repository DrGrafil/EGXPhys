// Common Cube Characteristics

//=================================
// header guards
#ifndef __MATH_GEOMETRY_CUBE_HPP__ 
#define __MATH_GEOMETRY_CUBE_HPP__

//=================================
// included dependencies
#include <glm/fwd.hpp>
//=================================
//

namespace EGMath 
{ 
namespace Geometry
{

double CubeSurfaceArea( const double length );
double CubeVolume( const double length );
glm::mat3 CubeInertia( const double mass, const double length);

}
}

#endif
