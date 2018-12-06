/// @file EGXPhys/Astrophysics/EscapeVelocity.hpp
///
/// @brief Calculates escape velocity of stars and related information derived from it.
///
/// @author Elliot Grafil 
/// @date 3/19/18

/// @defgroup EGXPhys-Astrophysics-EscapeVelocity Escape Velocity
/// @ingroup EGXPhys-Astrophysics

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <cmath>  

#include "AstrophysicsConstants.hpp"

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{
	/// @addtogroup EGXPhys-Astrophysics-EscapeVelocity
	/// @{
	
	/**
	*   @brief Calculates the escape velocity, \f$v_{e}\f$, the minimum speed needed for an object to escape from the gravitational influence of a massive body.
	*   		\f[v_{e}=\sqrt{\frac{2 G M}{r}}\f]
	*
	*   See https://en.wikipedia.org/wiki/Escape_velocity
	*
	*   @param distanceFromCenterOfMassInm \f$r\ (m)\f$ Distance from center of mass of the massive body in meters.
	*   @param massOfBodyInkg \f$M\ (kg)\f$ Mass of massive body in kilograms.
	*   @return \f$v_{e}\ (\frac{m}{s})\f$ Escape velocity in meters per second.
	*/
	template<typename T>
	T EscapeVelocity(const T distanceFromCenterOfMassInm, const T massOfBodyInkg);

    /// @}
} //namespace EGXPhys

#include "EscapeVelocity.inl"
