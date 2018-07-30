#include "Math/Geometry/Cube.hpp"
#include <glm/glm.hpp>
#include "Math/MathConst.hpp"


namespace EGMath 
{ 
namespace Geometry
{

double CubeSurfaceArea( const double length )
{
	return 6.0 * length * length;
}

double CubeVolume( const double length )
{
	return length * length * length;
}

glm::mat3 CubeInertia( const double mass, const double length)
{
	glm::mat3 matrix = glm::mat3(0.0);

	matrix[0][0] = static_cast<decltype(matrix[0].x)>(1.0 / 6.0 * mass * length * length);
	matrix[1][1] = static_cast<decltype(matrix[0].x)>(1.0/6.0 * mass * length * length);
	matrix[2][2] = static_cast<decltype(matrix[0].x)>(1.0/6.0 * mass * length * length);
	
	return matrix;
}

	
}
}
