#include "Math/Geometry/Cuboid.hpp"
#include <glm/glm.hpp>
#include "Math/MathConst.hpp"


namespace EGMath 
{ 
namespace Geometry
{

double CuboidSurfaceArea( const double height, const double width, const double depth )
{
	return 2.0 * depth * width + 2.0 * depth * height+ 2.0 * width * height;
}

double CuboidVolume( const double height, const double width, const double depth )
{
	return depth * width * height;
}

glm::mat3 CuboidInertia( const double mass, const double height, const double width, const double depth )
{
	glm::mat3 matrix = glm::mat3(0.0);
	
	matrix[0][0] = static_cast<decltype(matrix[0].x)>(1.0/12.0 * mass * ( width * width + depth * depth ));
	matrix[1][1] = static_cast<decltype(matrix[0].x)>(1.0/12.0 * mass * ( height * height + depth * depth ));
	matrix[2][2]= static_cast<decltype(matrix[0].x)>(1.0/12.0 * mass * ( height * height + width * width ));
	
	return matrix;
}

	
}
}
