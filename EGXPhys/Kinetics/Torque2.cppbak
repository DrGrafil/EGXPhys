#include "Physics/Kinetics/Torque.hpp"
#include <glm/glm.hpp>

#include "Math/MathConst.hpp"

glm::vec3 Torque( glm::vec3& rFromCenterOfMass, glm::vec3& force )
{
	return glm::cross( rFromCenterOfMass, force );
}

glm::vec3 AngularAcceleration( glm::vec3& torque, glm::mat3& inertiaTensor )
{
	return torque * glm::inverse( inertiaTensor );
}

glm::vec3 TangentialVelocity( glm::vec3 angularVelocity, float radialDistance )
{
	return angularVelocity*radialDistance;
}

float AngularPeriod( glm::vec3 angularVelocity)
{
	return glm::length( 2.0f* (float)EGMath::pi * glm::vec3( 1.0/angularVelocity.x, 1.0/angularVelocity.y, 1.0/angularVelocity.z ) ) ;
}

float AngularFrequency( glm::vec3 angularVelocity )
{
	return 1.0f / AngularPeriod( angularVelocity );
}

glm::vec3 CentripetalAcceleration( glm::vec3 angularVelocity, float radialDistance)
{
	return radialDistance * glm::vec3( angularVelocity.x * angularVelocity.x  , angularVelocity.y* angularVelocity.y, angularVelocity.z * angularVelocity.z );
}

glm::vec3 CentripetalForce( float mass, glm::vec3 tangentialVelocity, float radialDistance )
{
	return ( mass / radialDistance) * glm::vec3( tangentialVelocity.x * tangentialVelocity.x  , tangentialVelocity.y* tangentialVelocity.y, tangentialVelocity.z * tangentialVelocity.z );
}

