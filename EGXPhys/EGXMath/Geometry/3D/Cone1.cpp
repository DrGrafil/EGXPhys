#include "Math/Geometry/Cone.hpp"
#include <glm/glm.hpp>
#include "Math/MathConst.hpp"


namespace EGMath 
{ 
namespace Geometry
{

double ConeSurfaceArea( const double radius, const double height )
{
	return pi * radius * ( radius + height );
}

double ConeVolume( const double radius, const double height )
{
	return 1.0/3.0 * pi * radius * radius * height;
}

//About the apex
glm::mat3 ConeInertia( const double mass, const double radius, const double height )
{
	glm::mat3 matrix = glm::mat3(0.0);
	
	matrix[0][0] = static_cast<decltype(matrix[0].x)>(mass/20.0 * ( 2.0 * height * height + 3.0 * radius * radius ));
	matrix[1][1] = static_cast<decltype(matrix[0].x)>(mass/20.0 * ( 2.0 * height * height + 3.0 * radius * radius ));
	matrix[2][2] = static_cast<decltype(matrix[0].x)>(3.0/20.0 * mass * radius * radius);
	
	return matrix;
}

	
}
}
