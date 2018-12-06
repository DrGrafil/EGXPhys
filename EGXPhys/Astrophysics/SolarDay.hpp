/// @file EGXPhys/Astrophysics/SolarDay.hpp
///
/// @brief Calculates solar day of a celestial object.
///
/// @author Elliot Grafil 
/// @date 7/1/18

/// @defgroup EGXPhys-Astrophysic-SolarDay Solar Day
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
	/// @addtogroup EGXPhys-Astrophysic-SolarDay
	/// @{


    /**
    *  @brief Calculates the solar day, \f$T_{Solar}\f$, of a celestial object in seconds from the length of the celestial object's orbital period, \f$T_{Orbit}\f$, and sidereal day, \f$T_{Sidereal}\f$. A solar day is the time it takes for the celestial object to rotate so the body (sun) it is orbiting appears in the same position in the sky overhead.
    *			\f[ T_{Solar}=\dfrac{T_{Orbit} * T_{Sidereal}}{T_{Orbit} - T_{Sidereal}}\f]
    *
    *  See http://www.celestialnorth.org/FAQtoids/dazed_about_days_(solar_and_sidereal).htm and http://astronomy.swin.edu.au/cosmos/S/Sidereal+Day
    *
    *  @param  orbitalPeriodIns \f$ T_{Orbit}\ (s)\f$ Orbital period of the celestial object in seconds.
    *  @param  siderealDayIns \f$ T_{Sidereal}\ (s)\f$ Sidereal day of the celestial object in seconds. Negative number indicates the planet has retrograde rotation.
    *  @return \f$ T_{Solar}\ (s)\f$ Solar day of the celestial object in seconds.
    *  @see SynodicDay() for alias.
    *  @see SiderealDay() for period it takes for a celestial body to rotate once in relation to the distant stars. It is a 360 degree rotation.
    *  @see OrbitalPeriod() for period it takes for a celestial body to complete one orbit around another object.
    */
    template<typename T>
    T SolarDay(const T orbitalPeriodIns, const T siderealDayIns);

    /// @}
} //namespace EGXPhys

#include "SolarDay.inl"
