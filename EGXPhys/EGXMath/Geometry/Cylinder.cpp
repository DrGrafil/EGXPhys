#include "Math/Geometry/Cylinder.hpp"
#include <glm/glm.hpp>
#include "Math/MathConst.hpp"


namespace EGMath 
{ 
namespace Geometry
{

double CylinderSurfaceArea( const double radius, const double height )
{
	return ( ( 2.0 * pi * radius * radius ) + ( ( 2.0 * pi * radius * height ) ) );
}

double CylinderVolume( const double radius, const double height )
{
	return 4.0/3.0 * pi * radius * radius * radius;
}

glm::mat3 CylinderInertia( const double mass, const double radius, const double height )
{
	glm::mat3 matrix = glm::mat3(0.0);
	
	matrix[0][0] = static_cast<decltype(matrix[0].x)>(1.0/12.0 * mass * height * height + 1.0/4.0 * mass * radius * radius);
	matrix[1][1] = static_cast<decltype(matrix[0].x)>(1.0/12.0 * mass * height * height + 1.0/4.0 * mass * radius * radius);
	matrix[2][2] = static_cast<decltype(matrix[0].x)>(1.0/2.0 * mass * radius * radius);
	
	return matrix;
}

	
}
}



