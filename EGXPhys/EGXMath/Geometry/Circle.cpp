#include "Math/Geometry/Circle.hpp"
#include <glm/glm.hpp>
#include "Math/MathConst.hpp"


namespace EGMath 
{ 
namespace Geometry
{

double CircleArea( const double radius )
{
	return pi * radius * radius;
}

double CircleCircumference( const double radius )
{
	return 2.0 * pi * radius;
}

glm::mat3 CircleInertia( const double mass, const double radius)
{
	glm::mat3 matrix = glm::mat3(0.0f);
	
	matrix[0][0] = static_cast<decltype(matrix[0].x)>(1.0f/2.0f * mass * radius * radius);
	matrix[1][1] = static_cast<decltype(matrix[0].x)>(1.0f/2.0f * mass * radius * radius);
	matrix[2][2] = static_cast<decltype(matrix[0].x)>(mass * radius * radius);
	
	return matrix;
}

glm::mat3 DiskInertia( const double mass, const double radius)
{
	glm::mat3 matrix = glm::mat3(0.0f);
	
	matrix[0][0] = static_cast<decltype(matrix[0].x)>(1.0f/4.0f * mass * radius * radius);
	matrix[1][1] = static_cast<decltype(matrix[0].x)>(1.0f/4.0f * mass * radius * radius);
	matrix[2][2] = static_cast<decltype(matrix[0].x)>(1.0f/2.0f * mass * radius * radius);
	
	return matrix;
}
	
}
}

