/// @file EGXPhys/Astrophysics/StellarRadius.hpp
///
/// @brief Calculates the radius of stars.
///
/// @author Elliot Grafil (Metex)
/// @date 3/19/18

/// @defgroup EGXPhys-StellarRadius Stellar Radius
/// @ingroup EGXPhys-Astrophysics

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <math.h>  

#include "AstrophysicsConstants.hpp"

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{
	/// @addtogroup EGXPhys-StellarRadius
	/// @{
	
    /**
    *   @brief Calculates the radius, \f$R\f$, of a star in meters using its luminosity, \f$L\f$, and its surface tempreture \f$T\f$.
    *   \f[R=\sqrt{\dfrac{L}{4\pi \sigma T_{eff}^4}}\f]
    *
    *   See https://en.wikipedia.org/wiki/Luminosity
    *   See https://www.astro.princeton.edu/~gk/A403/constants.pdf for equation.
    *   Note that one should not use the Luminosity along with apparent magnitude formula to get stellar radius. It is an approximation.
    *
    *   @param starEffectiveSurfaceTemperatureInK \f$T_{eff}\ (K)\f$ Effective surface temperature of the star (black body) in kelvin. See https://en.wikipedia.org/wiki/Effective_temperature.
    *   @param starLuminosityInW \f$L\ (W)\f$ Luminosity of the star in watts.
    *   @return \f$R\ (m)\f$ Radius of star in meters.
    *	@see StellarRadiusFromLuminosityInWatts() for alias.
    *	@see StellarRadiusFromLuminosityInSolarLuminosity() to calculate using luminosity in solar luminosity.
    */
    template<typename T>
    T StellarRadius(const T starEffectiveSurfaceTemperatureInK, const T starLuminosityInW);


    /**
    *   @brief Calculates the radius, \f$R\f$, of a star in meters using its luminosity, \f$L\f$, and its surface tempreture \f$T\f$.
    *   \f[R=\sqrt{\dfrac{L}{4\pi \sigma T_{eff}^4}}\f]
    *
    *   See https://en.wikipedia.org/wiki/Luminosity
    *   See https://www.astro.princeton.edu/~gk/A403/constants.pdf for equation.
    *   Note that one should not use the Luminosity along with apparent magnitude formula to get stellar radius. It is an approximation.
    *
    *   @param starEffectiveSurfaceTemperatureInK \f$T_{eff}\ (K)\f$ Effective surface temperature of the star (black body) in kelvin. See https://en.wikipedia.org/wiki/Effective_temperature.
    *   @param starLuminosityInW \f$L\ (W)\f$ Luminosity of the star in watts.
    *   @return \f$R\ (m)\f$ Radius of star in meters.
    *	@see StellarRadius() for alias.
    *	@see StellarRadiusFromLuminosityInSolarLuminosity() to calculate using luminosity in solar luminosity.
    */
    template<typename T>
    T StellarRadiusFromLuminosityInWatts(const T starEffectiveSurfaceTemperatureInK, const T starLuminosityInW);


    /**
    *   @brief Calculates the radius, \f$R\f$, of a star in meters using its luminosity, \f$L\f$, and its surface tempreture \f$T\f$.
    *   \f[R=\sqrt{\dfrac{L}{4\pi \sigma T_{eff}^4}}\f]
    *
    *   See https://en.wikipedia.org/wiki/Luminosity
    *   See https://www.astro.princeton.edu/~gk/A403/constants.pdf for equation.
    *   Note that one should not use the Luminosity along with apparent magnitude formula to get stellar radius. It is an approximation.
    *
    *   @param starEffectiveSurfaceTemperatureInK \f$T_{eff}\ (K)\f$ Effective surface temperature of the star (black body) in kelvin. See https://en.wikipedia.org/wiki/Effective_temperature.
    *   @param starLuminosityInW \f$L\ (dimensionless)\f$ Luminosity of the star in solar luminosity (the ratio of its luminosity compared to the sun).
    *   @return \f$R\ (m)\f$ Radius of star in meters.
    *	@see StellarRadius() to calculate using luminosity in watts.
    *	@see StellarRadiusFromLuminosityInWatts() to calculate using luminosity in watts.
    */
    template<typename T>
    T StellarRadiusFromLuminosityInSolarLuminosity(const T starEffectiveSurfaceTemperatureInK, const T starLuminosityInSolarLuminosity);

    /// @}
} //namespace EGXPhys

#include "StellarRadius.inl"
