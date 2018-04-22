// Common Cylinder Characteristics

//=================================
// header guards
#ifndef __MATH_GEOMETRY_CYLINDER_HPP__ 
#define __MATH_GEOMETRY_CYLINDER_HPP__

//=================================
// included dependencies
#include <glm/fwd.hpp>
//=================================
//

namespace EGMath 
{ 
namespace Geometry
{

double CylinderSurfaceArea( const double radius, const double height );
double CylinderVolume( const double radius, const double height );

//Cylinder base is on the xy axis. its height is in the z axis.
glm::mat3 CylinderInertia( const double mass, const double radius, const double height );
	
}
}

#endif

