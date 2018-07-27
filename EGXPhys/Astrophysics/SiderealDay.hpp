/// @file EGXPhys/Astrophysics/SiderealDay.hpp
///
/// @brief Calculates sidereal day (a rotation of 360 degrees) of a celestial object.
///
/// @author Elliot Grafil (Metex)
/// @date 7/1/18

/// @defgroup EGXPhys-Astrophysic-SiderealDay Sidereal Day
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
	/// @addtogroup EGXPhys-Astrophysic-SiderealDay
	/// @{


     /**
     *  @brief Calculates the sidereal day, \f$T_{Sidereal}\f$, of a celestial object in seconds from the length of the celestial object's orbital period, \f$T_{Orbit}\f$, and synodic day (solar day), \f$T_{Solar}\f$. A sidereal day is the time it takes for a full 360 degree rotation resulting in a distant star appears in the same position in the sky overhead.
     *			\f[ T_{Sidereal}=\dfrac{T_{Orbit} * T_{Synodic}}{T_{Orbit} + T_{Synodic}}\f]
     *
     *  See http://www.celestialnorth.org/FAQtoids/dazed_about_days_(solar_and_sidereal).htm and http://astronomy.swin.edu.au/cosmos/S/Sidereal+Day
     *    
     *  @param  orbitalPeriodIns \f$ T_{Orbit}\ (s)\f$ Orbital period of the celestial object in seconds.
     *  @param  synodicDayIns \f$ T_{Synodic}\ (s)\f$ Synodic day (solar day) of the celestial object in seconds. 
     *  @return \f$ T_{Sidereal}\ (s)\f$ Sidereal day of the celestial object in seconds. Negative number indicates the planet has retrograde rotation.
     *  @see OrbitalPeriod() for period it takes for a celestial body to complete one orbit around another object.
     *  @see SolarDay() for period it takes for a celestial body to rotate once in relation to the body it is orbiting.
     *  @see SynodicDay() for period it takes for a celestial body to rotate once in relation to the body it is orbiting.
     */
    template<typename T>
    T SiderealDay(const T orbitalPeriodIns, const T synodicDayIns);

    /// @}
} //namespace EGXPhys

#include "SiderealDay.inl"
