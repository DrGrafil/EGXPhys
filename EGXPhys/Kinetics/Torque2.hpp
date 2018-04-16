// Torque Functions

//=================================
// header guards
#ifndef __TORQUE_HPP__ 
#define __TORQUE_HPP__

//=================================
// included dependencies
//=================================
// forward declared dependencies
#include <glm/fwd.hpp>
//=================================

//Calculates Torque in N m
// rFromCenterOfMass is the vector from the center of mass of the object to where the force is applied.
// force is the force applied at that point to the object.
glm::vec3 Torque( glm::vec3 & rFromCenterOfMass, glm::vec3& force );


glm::vec3 AngularAcceleration( glm::vec3& torque, glm::mat3& inertiaTensor ); // rad/s^2

glm::vec3 TangentialVelocity( glm::vec3 angularVelocity, float radialDistance ); // m/s
float AngularPeriod( glm::vec3 angularVelocity); //
float AngularFrequency( glm::vec3 angularVelocity); //Revolutions per s (Hz)
glm::vec3 CentripetalAcceleration( glm::vec3 angularVelocity, float radialDistance); // m/s^2
glm::vec3 CentripetalForce( float mass, glm::vec3 tangentialVelocity, float radialDistance ); // F


#endif

