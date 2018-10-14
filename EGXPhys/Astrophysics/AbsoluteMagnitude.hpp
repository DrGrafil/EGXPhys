/// @file EGXPhys/Astrophysics/AbsoluteMagnitude.hpp
///
/// @brief Calculates the absolute magnitude of a star.
///
/// @author Elliot Grafil (Metex)
/// @date 4/14/18

/// @defgroup EGXPhys-Astrophysics-AbsoluteMagnitude Absolute Magnitude
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
	/// @addtogroup EGXPhys-Astrophysics-AbsoluteMagnitude
	/// @{

	/**
	*   @brief Calculates the absolute magnitude, \f$M\f$, of a star from its apparent magnitude, \f$m\f$, and the distance, \f$d_{pc}\f$, in parsecs it is away. 
	*   		\f[M= m - 5 \left ( log_{10}(d_{pc}) - 1 \right )\f]
	*
	*	See https://en.wikipedia.org/wiki/Absolute_magnitude
	*
	*   @param apparentMagnitude \f$M\ (dimensionless)\f$ Apparent magnitude of a star (almost allways as seen from earth).
	*   @param distanceInparsecs \f$d_{pc}\ (pc)\f$ Distance in parsecs between a star and the measurement of apparent magnitude.
	*   @return \f$M\ (dimensionless)\f$ Absolute magnitude of a star.
    *   @see AbsoluteMagnitudeFromParsecs() for alias.
    *   @see AbsoluteMagnitudeFromParallax() for calculation using parallax.
    *   @see AbsoluteMagnitudeFromAU() for calculation using astronomical units.
	*/
	template<typename T>
	T AbsoluteMagnitude(const T apparentMagnitude, const T distanceInparsecs);

    /**
    *   @brief Calculates the absolute magnitude, \f$M\f$, of a star from its apparent magnitude, \f$m\f$, and the distance, \f$d_{pc}\f$, in parsecs it is away.
    *   		\f[M= m - 5 \left ( log_{10}(d_{pc}) - 1 \right )\f]
    *
    *	See https://en.wikipedia.org/wiki/Absolute_magnitude
    *
    *   @param apparentMagnitude \f$M\ (dimensionless)\f$ Apparent magnitude of a star (almost allways as seen from earth).
    *   @param distanceInparsecs \f$d_{pc}\ (pc)\f$ Distance in parsecs between a star and the measurement of apparent magnitude.
    *   @return \f$M\ (dimensionless)\f$ Absolute magnitude of a star.
    *   @see AbsoluteMagnitude() for alias.
    *   @see AbsoluteMagnitudeFromParallax() for calculation using parallax.
    *   @see AbsoluteMagnitudeFromAU() for calculation using astronomical units.
    */
    template<typename T>
    T AbsoluteMagnitudeFromParsecs(const T apparentMagnitude, const T distanceInparsecs);

    /**
    *   @brief Calculates the absolute magnitude, \f$M\f$, of a star from its apparent magnitude, \f$m\f$, and the parallax, \f$p\f$, in arc seconds.
    *   		\f[M= m - 5 \left ( log_{10} \left ( \dfrac{1}{p} \right ) - 1 \right )\f]
    *
    *	See https://en.wikipedia.org/wiki/Absolute_magnitude
    *
    *   @param apparentMagnitude \f$M\ (dimensionless)\f$ Apparent magnitude of a star (almost allways as seen from earth).
    *   @param parallaxInArcSec \f$p\ (arc seconds)\f$ Parallax of the star in arc seconds.
    *   @return \f$M\ (dimensionless)\f$ Absolute magnitude of a star.
    *   @see AbsoluteMagnitudeFromParsecs() for calculation using parsecs.
    *   @see AbsoluteMagnitudeFromAU() for calculation using astronomical units.
    */
    template<typename T>
    T AbsoluteMagnitudeFromParallax(const T apparentMagnitude, const T parallaxInArcSec);

    /**
    *   @brief Calculates the absolute magnitude, \f$M\f$, of a star from its apparent magnitude, \f$m\f$, and the distance, \f$d_{AU}\f$, in astronomical units it is away.
    *   		\f[M= m - 5 \left ( log_{10} \left ( \dfrac{\pi}{648000}d_{AU} \right ) - 1 \right )\f]
    *
    *	See https://en.wikipedia.org/wiki/Absolute_magnitude
    *
    *   @param apparentMagnitude \f$M\ (dimensionless)\f$ Apparent magnitude of a star (almost allways as seen from earth).
    *   @param distanceInAstronomicalUnits \f$d_{AU}\ (AU)\f$ Distance in astronomical units between a star and the measurement of apparent magnitude.
    *   @return \f$M\ (dimensionless)\f$ Absolute magnitude of a star.
    *   @see AbsoluteMagnitudeFromParsecs() for calculation using parsecs.
    *   @see AbsoluteMagnitudeFromParallax() for calculation using parallax.
    */
    template<typename T>
    T AbsoluteMagnitudeFromAU(const T apparentMagnitude, const T distanceInAstronomicalUnits);
    /// @}
} //namespace EGXPhys

#include "AbsoluteMagnitude.inl"
