/// @file EGXPhys/Kinetics/AngularAcceleration.hpp
///
/// @brief Calculates the angular acceleration of an object.
///
/// @author Elliot Grafil (Metex)
/// @date 4/19/18

/// @defgroup EGXPhys-Kinetics-AngularAcceleration Angular Acceleration
/// @ingroup EGXPhys-Kinetics

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{
	/// @addtogroup EGXPhys-Kinetics-AngularAcceleration
	/// @{
	
	/**<!--
	*   @brief Calculates the angular acceleration, \f$\alpha\f$, in radians per second squared. Angular acceleration of an object is calculated from the torque, \f$\tau\f$, applied to an object and the object's inertia tensor, \f$I\f$:
	*   		\f[\alpha=I^{-1} \tau \f]
	*
	*   See https://en.wikipedia.org/wiki/Angular_acceleration
	*
	*   @param torqueInNm \f$\tau\ (N\ m)\f$ Torque apply to object in Newton meters.
	*	@param inertiaTensorInkgmsquared \f$I\ (kg\ m^2)\f$ Inertia tensor matrix of object in kilogram meter squared.
	*	@param angularAccelerationInradPersSquared \f$\alpha\ (\frac{rad}{s^2})\f$ Angular acceleration of an object in radians per second squared. -->
	*/
	//template<typename T>
	//void AngularAcceleration(const T(&torqueInNm)[3], const T(&inertiaTensorInkgmsquared)[9], T(&angularAccelerationInradPersSquared)[3]);

	
#ifdef EGXPHYS_GLM
	/**
	*   @brief Calculates the angular acceleration, \f$\alpha\f$, in radians per second squared. Angular acceleration of an object is calculated from the torque, \f$\tau\f$, applied to an object and the object's inertia tensor, \f$I\f$:
	*   		\f[\alpha=I^{-1} \tau \f]
	*
	*   See https://en.wikipedia.org/wiki/Angular_acceleration
	*
	*   @param torqueInNm \f$\tau\ (N\ m)\f$ Torque apply to object in Newton meters.
	*	@param inertiaTensorInkgmsquared \f$I\ (kg\ m^2)\f$ Inertia tensor matrix of object in kilogram meter squared.
	*	@param angularAccelerationInradPersSquared \f$\alpha\ (\frac{rad}{s^2})\f$ Angular acceleration of an object in radians per second squared.
	*/
	void AngularAcceleration(const glm::vec3& torqueInNm, const glm::mat3& inertiaTensorInkgmsquared, glm::vec3& angularAccelerationInradPersSquared);
#endif // EGXPHYS_GLM

    /// @}
} //namespace EGXPhys

#include "AngularAcceleration.inl"
