/// @file EGXPhys/Astrophysics/RotationalAngularVelocity.hpp
/// 
/// @brief Defines functions relating to rotational angular velocity of a planet.
///
/// @author Elliot Grafil (Metex)
/// @date 7/29/18

/// @defgroup EGXPhys-Astrophysics-RotationalAngularVelocity Rotational Angular Velocity
/// @ingroup EGXPhys-Astrophysics


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
	/// @addtogroup EGXPhys-Astrophysics-RotationalAngularVelocity
	/// @{

	/**
	*   @brief Finds the rotational angular velocity, \f$\omega\f$, in radians per second of a celestial object from its sidereal rotation period \f$T_{Sidereal}\f$:
	*		\f[ \omega = \dfrac{2\pi}{T} \f]
	*
	*
	*	See http://www.physlink.com/education/askexperts/ae256.cfm and http://hyperphysics.phy-astr.gsu.edu/hbase/rotq.html
    *   @param siderealDayIns \f$ T_{Sidereal}\ (s)\f$ Sidereal day of the celestial object in seconds. A sidereal day is the time it takes for a full 360 degree rotation resulting in a distant star appears in the same position in the sky overhead.
	*   @return \f$ \omega\ (\dfrac{rad}{s})\f$ Rotational angular velocity of the celestial object in radians per second.
	*	@see SiderealDay() for sidreal day calculations.
	*/
	template <typename T>
	T RotationalAngularVelocity(const T siderealDayIns);

    /// @}
} //namespace EGXPhys

#include "RotationalAngularVelocity.inl"
