/// @file EGXPhys/Astrophysics/SynodicDay.hpp
///
/// @brief Calculates synodic day of a celestial object.
///
/// @author Elliot Grafil (Metex)
/// @date 7/1/18

/// @defgroup EGXPhys-Astrophysic-SynodicDay Synodic Day
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
	/// @addtogroup EGXPhys-Astrophysic-SynodicDay
	/// @{


     /**
     *  @brief Calculates the synodic day, \f$T_{Synodic}\f$, of a celestial object in seconds from the length of the celestial object's orbital period, \f$T_{Orbit}\f$, and sidereal day, \f$T_{Sidereal}\f$. A synodic day is the time it takes for the celestial object to rotate so the body it is orbiting appears in the same position in the sky overhead. 
     *			\f[ T_{Synodic}=\dfrac{T_{Orbit} * T_{Sidereal}}{T_{Orbit} - T_{Sidereal}}\f]
     *
     *  See http://www.celestialnorth.org/FAQtoids/dazed_about_days_(solar_and_sidereal).htm and http://astronomy.swin.edu.au/cosmos/S/Sidereal+Day
     *    
     *  @param  orbitalPeriodIns \f$ T_{Orbit}\ (s)\f$ Orbital period of the celestial object in seconds.
     *  @param  siderealDayIns \f$ T_{Sidereal}\ (s)\f$ Sidereal day of the celestial object in seconds.
     *  @return \f$ T_{Synodic}\ (s)\f$ Synodic day of the celestial object in seconds.
     *  @see SolarDay() for alias.
     *  @see SiderealDay() for period it takes for a celestial body to rotate once in relation to the distant stars. It is a 360 degree rotation.
     *  @see OrbitalPeriod() for period it takes for a celestial body to complete one orbit around another object.
     */
    template<typename T>
    T SynodicDay(const T orbitalPeriodIns, const T siderealDayIns);

    /// @}
} //namespace EGXPhys

#include "SynodicDay.inl"
