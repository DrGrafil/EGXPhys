/// @file EGXPhys/Astrophysics/PlanetaryEquilibriumTempreture.hpp
///
/// @brief Calculates planetary equilibrium tempreture of a planet
///
/// @author Elliot Grafil (Metex)
/// @date 7/29/18


/// @defgroup EGXPhys-Astrophysics-PlanetaryEquilibriumTempreture Planetary Equilibrium Tempreture
/// @ingroup EGXPhys-Astrophysics

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <math.h>
//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{	
	/// @addtogroup EGXPhys-Astrophysics-PlanetaryEquilibriumTempreture
	/// @{

    /** 
	*   @brief Calculates the planetary equilibrium tempreture, \f$T_{eq}\f$ of a planet in kelvin. The planetary equilibrium tempreture is the theoretical temperature of a planet assuming it is a black body being heated only by its parent star. 
	*	\f[ T_{eq}=\left ( \dfrac{L (1-A)}{16 \epsilon \sigma \pi D^2} \right )^{\dfrac{1}{4}} \f]
	*	
	*	See https://en.wikipedia.org/wiki/Planetary_equilibrium_temperature and https://www.astro.princeton.edu/~strauss/FRS113/writeup3/
	*
    *   @param planetBondAlbedo \f$A\ (dimensionless)\f$ Planet's bond albedo. Varies between 0-1. Earth's bond albedo is at 0.30.
    *   @param planetDistanceFromStarInm \f$D\ (m)\f$ Distant planet is from parent star in meters.
    *   @param starLuminosityInW \f$L\ (W)\f$ Luminosity of the parent star in watts.
    *   @param planetEmissivity \f$\epsilon\ (dimensionless)\f$ Planet's emissivity. Varies between 0-1 but is 0.9-1.0 for a planet. Earth's emissivity is at 0.96. Defaults to 1.0.
    *   @return \f$T_{eq}\ (K)\f$ Planetary equilibrium tempreture of a planet in kelvin.
	*/    
    template<typename T>
    T PlanetaryEquilibriumTempreture(const T planetBondAlbedo, const T planetDistanceFromStarInm, const T starLuminosityInW, const T planetEmissivity = (T)1.0);
	
    /** 
	*   @brief Calculates the planetary equilibrium tempreture, \f$T_{eq}\f$ of a planet in kelvin. The planetary equilibrium tempreture is the theoretical temperature of a planet assuming it is a black body being heated only by its parent star. 
	*	\f[ T_{eq}=T_{eff} \left ( \dfrac{(1-A)}{\epsilon} \right )^{\dfrac{1}{4}} \sqrt{\dfrac{R}{2 D} \f]
	*	
	*	See https://en.wikipedia.org/wiki/Planetary_equilibrium_temperature and https://www.astro.princeton.edu/~strauss/FRS113/writeup3/
	*
    *   @param planetBondAlbedo \f$A\ (dimensionless)\f$ Planet's bond albedo. Varies between 0-1. Earth's bond albedo is at 0.30.
    *   @param planetDistanceFromStarInm \f$D\ (m)\f$ Distant planet is from parent star in meters.
	*   @param starEffectiveSurfaceTemperatureInK \f$T_{eff}\ (K)\f$ Effective surface temperature of the star (black body) in kelvin. See https://en.wikipedia.org/wiki/Effective_temperature.
    *   @param starRadiusInm \f$R\ (m)\f$ Radius of parent star in meters.
    *   @param planetEmissivity \f$\epsilon\ (dimensionless)\f$ Planet's emissivity. Varies between 0-1 but is 0.9-1.0 for a planet. Earth's emissivity is at 0.96. Defaults to 1.0.
    *   @return \f$T_{eq}\ (K)\f$ Planetary equilibrium tempreture of a planet in kelvin.
	*/    
    template<typename T>
    T PlanetaryEquilibriumTempreture(const T planetBondAlbedo, const T planetDistanceFromStarInm, const T starEffectiveSurfaceTemperatureInK, const T starRadiusInm, const T planetEmissivity = (T)1.0);

    /// @}
} //namespace EGXPhys

#include "PlanetaryEquilibriumTempreture.inl"
