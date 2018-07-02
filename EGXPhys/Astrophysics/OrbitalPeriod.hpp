/// @file EGXPhys/Astrophysics/OrbitalPeriod.hpp
///
/// @brief Calculates orbital period of a celestial object.
///
/// @author Elliot Grafil (Metex)
/// @date 7/1/18

/// @defgroup EGXPhys-Astrophysic-OrbitalPeriod Orbital Period
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
	/// @addtogroup EGXPhys-Astrophysic-OrbitalPeriod
	/// @{


     /**
     *  @brief Calculates the orbital period, \f$T_{Orbit}\f$, of a celestial object in seconds from the length of the celestial object's sidereal day, \f$T_{Sidereal}\f$, and synodic day, \f$T_{Synodic}\f$. The orbital period is the time needed for a celestial object to complete one orbit around another object. 
     *			\f[ T_{Orbit}=\dfrac{T_{Synodic} * T_{Sidereal}}{T_{Synodic} + T_{Sidereal}}\f]
     *
     *  See http://www.celestialnorth.org/FAQtoids/dazed_about_days_(solar_and_sidereal).htm and https://en.wikipedia.org/wiki/Orbital_period
     *    
     *  @param  siderealDayIns \f$ T_{Sidereal}\ (s)\f$ Sidereal day of the celestial object in seconds.
     *  @param  synodicDayIns \f$ T_{Synodic}\ (s)\f$ Synodic day (solar day) of the celestial object in seconds.
     *  @return \f$ T_{Orbit}\ (s)\f$ Orbital period of the celestial object in seconds.
     *  @see SiderealDay() for period it takes for a celestial body to rotate once in relation to the distant stars. It is a 360 degree rotation.
     *  @see SolarDay() for period it takes for a celestial body to rotate once in relation to the body it is orbiting. It is a 360 + angle degree rotation to account for movement in orbit. 
     *  @see SynodicDay() for period it takes for a celestial body to rotate once in relation to the body it is orbiting. It is a 360 + angle degree rotation to account for movement in orbit.
     */
    template<typename T>
    T OrbitalPeriod(const T siderealDayIns, const T synodicDayIns);


    /**
    *  @brief Calculates the orbital period, \f$T_{Orbit}\f$, of a celestial object in seconds from the semi-major axis of its orbit, \f$a\f$, and the central object's mass that the celestial object is orbiting around, \f$M\f$. It is assumed that the central object's mass is much larger then the celestial objects mass. The orbital period is the time needed for a celestial object to complete one orbit around the central object.
    *			\f[ T_{Orbit}=2\pi\dfrac{a^3}{GM}\f]
    *
    *  See https://en.wikipedia.org/wiki/Orbital_period
    *
    *  @param  semiMajorAxisInm \f$ T_{Sidereal}\ (m)\f$ Semi-major axis of the celestial object's rotation in meters.
    *  @param  centralBodyMassInKg \f$ M\ (kg)\f$ Mass of the central object that the celestial object is orbiting around in kilograms.
    *  @return \f$ T_{Orbit}\ (s)\f$ Orbital period of the celestial object in seconds.
    *  @see OrbitalPeriodSmallBodyFromMass() for alias.
    *  @see OrbitalPeriodSmallBodyFromSGP() for calculation using standard gravitational parameter.
    *  @see SiderealDay() for period it takes for a celestial body to rotate once in relation to the distant stars. It is a 360 degree rotation.
    *  @see SolarDay() for period it takes for a celestial body to rotate once in relation to the body it is orbiting. It is a 360 + angle degree rotation to account for movement in orbit.
    *  @see SynodicDay() for period it takes for a celestial body to rotate once in relation to the body it is orbiting. It is a 360 + angle degree rotation to account for movement in orbit.
    */
    template<typename T>
    T OrbitalPeriodSmallBody(const T semiMajorAxisInm, const T centralBodyMassInKg);

    /**
    *  @brief Calculates the orbital period, \f$T_{Orbit}\f$, of a celestial object in seconds from the semi-major axis of its orbit, \f$a\f$, and the central object's mass that the celestial object is orbiting around, \f$M\f$. It is assumed that the central object's mass is much larger then the celestial objects mass. The orbital period is the time needed for a celestial object to complete one orbit around the central object.
    *			\f[ T_{Orbit}=2\pi\dfrac{a^3}{GM}\f]
    *
    *  See https://en.wikipedia.org/wiki/Orbital_period
    *
    *  @param  semiMajorAxisInm \f$ T_{Sidereal}\ (m)\f$ Semi-major axis of the celestial object's rotation in meters.
    *  @param  centralBodyMassInKg \f$ M\ (kg)\f$ Mass of the central object that the celestial object is orbiting around in kilograms.
    *  @return \f$ T_{Orbit}\ (s)\f$ Orbital period of the celestial object in seconds.
    *  @see OrbitalPeriodSmallBody() for alias.
    *  @see OrbitalPeriodSmallBodyFromSGP() for calculation using standard gravitational parameter.
    *  @see SiderealDay() for period it takes for a celestial body to rotate once in relation to the distant stars. It is a 360 degree rotation.
    *  @see SolarDay() for period it takes for a celestial body to rotate once in relation to the body it is orbiting. It is a 360 + angle degree rotation to account for movement in orbit.
    *  @see SynodicDay() for period it takes for a celestial body to rotate once in relation to the body it is orbiting. It is a 360 + angle degree rotation to account for movement in orbit.
    */
    template<typename T>
    T OrbitalPeriodSmallBodyFromMass(const T semiMajorAxisInm, const T centralBodyMassInKg);

    /**
    *  @brief Calculates the orbital period, \f$T_{Orbit}\f$, of a celestial object in seconds from the semi-major axis of its orbit, \f$a\f$, and the central object's standard gravitational parameter, \f$\mu\f$. It is assumed that the central object's mass is much larger then the celestial objects mass. The orbital period is the time needed for a celestial object to complete one orbit around the central object.
    *			\f[ T_{Orbit}=2\pi\dfrac{a^3}{\mu}\f]
    *
    *  See https://en.wikipedia.org/wiki/Orbital_period
    *
    *  @param  semiMajorAxisInm \f$ T_{Sidereal}\ (m)\f$ Semi-major axis of the celestial object's rotation in meters.
    *  @param  centralBodyStandardGravitationalParameter \f$ \mu\ (\frac{m^3}{s^2})\f$ Standard gravitational parameter of the central object that the celestial object is orbiting around in meter cubed per seconds squared.
    *  @return \f$ T_{Orbit}\ (s)\f$ Orbital period of the celestial object in seconds.
    *  @see OrbitalPeriodSmallBody() for calculation using mass.
    *  @see SiderealDay() for period it takes for a celestial body to rotate once in relation to the distant stars. It is a 360 degree rotation.
    *  @see SolarDay() for period it takes for a celestial body to rotate once in relation to the body it is orbiting. It is a 360 + angle degree rotation to account for movement in orbit.
    *  @see SynodicDay() for period it takes for a celestial body to rotate once in relation to the body it is orbiting. It is a 360 + angle degree rotation to account for movement in orbit.
    */
    template<typename T>
    T OrbitalPeriodSmallBodyFromSGP(const T semiMajorAxisInm, const T centralBodyStandardGravitationalParameter);


    /**
    *  @brief Calculates the orbital period, \f$T_{Orbit}\f$, of a celestial object in seconds from the semi-major axis of its orbit, \f$a\f$, its mass, \f$M_1\f$, and the mass of the second celestial object, \f$M_2\f$. The orbital period is the time needed for a celestial object to complete one orbit around the second celestial object.
    *			\f[ T_{Orbit}=2\pi\dfrac{a^3}{G(M_1 + M_2)}\f]
    *
    *  See https://en.wikipedia.org/wiki/Orbital_period
    *
    *  @param  semiMajorAxisInm \f$ T_{Sidereal}\ (m)\f$ Semi-major axis of the celestial object's rotation in meters.
    *  @param  firstBodyMassInKg \f$ M\ (kg)\f$ Mass of the celestial object in kilograms.
    *  @param  secondBodyMassInKg \f$ M\ (kg)\f$ Mass of the second celestial object in kilograms.
    *  @return \f$ T_{Orbit}\ (s)\f$ Orbital period of the celestial object in seconds.
    *  @see OrbitalPeriodTwoBodyFromMass() for alias.
    *  @see OrbitalPeriodTwoBodyFromSGP() for calculation using standard gravitational parameter.
    *  @see SiderealDay() for period it takes for a celestial body to rotate once in relation to the distant stars. It is a 360 degree rotation.
    *  @see SolarDay() for period it takes for a celestial body to rotate once in relation to the body it is orbiting. It is a 360 + angle degree rotation to account for movement in orbit.
    *  @see SynodicDay() for period it takes for a celestial body to rotate once in relation to the body it is orbiting. It is a 360 + angle degree rotation to account for movement in orbit.
    */
    template<typename T>
    T OrbitalPeriodTwoBody(const T semiMajorAxisInm, const T firstBodyMassInKg, const T secondBodyMassInKg);

    /**
    *  @brief Calculates the orbital period, \f$T_{Orbit}\f$, of a celestial object in seconds from the semi-major axis of its orbit, \f$a\f$, its mass, \f$M_1\f$, and the mass of the second celestial object, \f$M_2\f$. The orbital period is the time needed for a celestial object to complete one orbit around the second celestial object.
    *			\f[ T_{Orbit}=2\pi\dfrac{a^3}{G(M_1 + M_2)}\f]
    *
    *  See https://en.wikipedia.org/wiki/Orbital_period
    *
    *  @param  semiMajorAxisInm \f$ T_{Sidereal}\ (m)\f$ Semi-major axis of the celestial object's rotation in meters.
    *  @param  firstBodyMassInKg \f$ M\ (kg)\f$ Mass of the celestial object in kilograms.
    *  @param  secondBodyMassInKg \f$ M\ (kg)\f$ Mass of the second celestial object in kilograms.
    *  @return \f$ T_{Orbit}\ (s)\f$ Orbital period of the celestial object in seconds.
    *  @see OrbitalPeriodTwoBody() for alias.
    *  @see OrbitalPeriodTwoBodyFromSGP() for calculation using standard gravitational parameter.
    *  @see SiderealDay() for period it takes for a celestial body to rotate once in relation to the distant stars. It is a 360 degree rotation.
    *  @see SolarDay() for period it takes for a celestial body to rotate once in relation to the body it is orbiting. It is a 360 + angle degree rotation to account for movement in orbit.
    *  @see SynodicDay() for period it takes for a celestial body to rotate once in relation to the body it is orbiting. It is a 360 + angle degree rotation to account for movement in orbit.
    */
    template<typename T>
    T OrbitalPeriodTwoBodyFromMass(const T semiMajorAxisInm, const T firstBodyMassInKg, const T secondBodyMassInKg);

    /**
    *  @brief Calculates the orbital period, \f$T_{Orbit}\f$, of a celestial object in seconds from the semi-major axis of its orbit, \f$a\f$, its standard gravitational parameter, \f$\mu_1\f$, and the standard gravitational parameter of the second celestial object, \f$\mu_2\f$. The orbital period is the time needed for a celestial object to complete one orbit around the second celestial object.
    *			\f[ T_{Orbit}=2\pi\dfrac{a^3}{\mu_1 + \mu_2}\f]
    *
    *  See https://en.wikipedia.org/wiki/Orbital_period
    *
    *  @param  semiMajorAxisInm \f$ T_{Sidereal}\ (m)\f$ Semi-major axis of the celestial object's rotation in meters.
    *  @param  firstBodyStandardGravitationalParameter \f$ \mu_1\ (\frac{m^3}{s^2})\f$ Standard gravitational parameter of the celestial object in meter cubed per seconds squared.
    *  @param  secondBodyStandardGravitationalParameter \f$ \mu_1\ (\frac{m^3}{s^2})\f$ Standard gravitational parameter of the second celestial object in meter cubed per seconds squared.
    *  @return \f$ T_{Orbit}\ (s)\f$ Orbital period of the celestial object in seconds.
    *  @see OrbitalPeriodTwoBody() for calculation using mass.
    *  @see SiderealDay() for period it takes for a celestial body to rotate once in relation to the distant stars. It is a 360 degree rotation.
    *  @see SolarDay() for period it takes for a celestial body to rotate once in relation to the body it is orbiting. It is a 360 + angle degree rotation to account for movement in orbit.
    *  @see SynodicDay() for period it takes for a celestial body to rotate once in relation to the body it is orbiting. It is a 360 + angle degree rotation to account for movement in orbit.
    */
    template<typename T>
    T OrbitalPeriodTwoBodyFromSGP(const T semiMajorAxisInm, const T firstBodyStandardGravitationalParameter, const T secondBodyStandardGravitationalParameter);
            

    /// @}
} //namespace EGXPhys

#include "OrbitalPeriod.inl"
