/// @file EGXPhys/Astrophysics/SiderealDay.hpp
///
/// @brief Calculates sidereal day (a rotation of 360 degrees) of a planet.
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
     *  @brief Calculates the sidereal day, \f$T_{Sidereal}\f$, of a celestial object in seconds from the length of the celestial object's orbital period, \f$T_{Orbit}\f$, and solar day, \f$T_{Solar}\f$.
     *			\f[ T_{Sidereal}=\dfrac{T_{Orbit} * T_{Solar}}{T_{Orbit} + T_{Solar}}\f]
     *
     *  See http://www.celestialnorth.org/FAQtoids/dazed_about_days_(solar_and_sidereal).htm and http://astronomy.swin.edu.au/cosmos/S/Sidereal+Day
     *    
     *  @param  orbitalPeriodIns \f$ T_{Orbit}\ (s)\f$ Orbital period of the celestial object in seconds.
     *  @param  solarDayIns \f$ T_{Solar}\ (s)\f$ Solar day of the celestial object in seconds.
     *  @return \f$ T_{Sidereal}\ (s)\f$ Sidereal day of the celestial object in seconds.
     *  @see SiderealDay() for period it takes for a celestial body to rotate once in relation to the distant stars. It is a 360 degree rotation.
     *  @see OrbitalPeriod() for period it takes for a celestial body to complete one orbit around another object.
     *  @see SolarDay() for period it takes for a celestial body to rotate once in relation to the body it is orbiting. It is a 360 + angle degree rotation to account for movement in orbit. 
     *  @see SynodicDay() for period it takes for a celestial body to rotate once in relation to the body it is orbiting. It is a 360 + angle degree rotation to account for movement in orbit.
     */
    template<typename T>
    T SiderealDay(const T orbitalPeriodIns, const T solarDayIns);

    /// @}
} //namespace EGXPhys

#include "SiderealDay.inl"
