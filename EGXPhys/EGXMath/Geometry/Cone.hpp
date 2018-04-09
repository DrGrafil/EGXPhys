// Common Right angle Cone Characteristics

//=================================
// header guards
#ifndef __MATH_GEOMETRY_CONE_HPP__ 
#define __MATH_GEOMETRY_CONE_HPP__

//=================================
// included dependencies
#include <glm/fwd.hpp>
//=================================
//

namespace EGMath 
{ 
namespace Geometry
{

double ConeSurfaceArea( const double radius, const double height );
double ConeVolume( const double radius, const double height );
glm::mat3 ConeInertia( const double mass, const double radius, const double height );
	
}
}

#endif
