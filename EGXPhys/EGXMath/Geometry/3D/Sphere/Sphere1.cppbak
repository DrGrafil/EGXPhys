#include "Math/Geometry/Sphere.hpp"
#include "Math/MathConst.hpp"
#include <glm/glm.hpp>

namespace EGMath 
{ 
namespace Geometry
{

double SphereSurfaceArea( const double radius )
{
	return 4.0 * pi * radius * radius;
}

double SphereVolume( const double radius )
{
	return 4.0/3.0 * pi * radius * radius * radius;
}

glm::mat3 SphereInertia( const double mass, const double radius)
{
	glm::mat3 matrix = glm::mat3(0.0f);
	
	matrix[0][0] = static_cast<decltype(matrix[0].x)>(2.0f/5.0f * mass * radius * radius);
	matrix[1][1] = static_cast<decltype(matrix[0].x)>(2.0f/5.0f * mass * radius * radius);
	matrix[2][2] = static_cast<decltype(matrix[0].x)>(2.0f/5.0f * mass * radius * radius);
	
	return matrix;
}

	
}
}

