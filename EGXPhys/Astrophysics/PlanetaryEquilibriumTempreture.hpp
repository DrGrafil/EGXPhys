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
	*	\f[ T_{eq}=\left ( \dfrac{L (1-A)}{16 \epsilon \sigma \pi D^2} \right ) \f]
	*	
	*	See https://en.wikipedia.org/wiki/Planetary_equilibrium_temperature and https://www.astro.princeton.edu/~strauss/FRS113/writeup3/
	*
	*   @param starEffectiveSurfaceTemperatureInK \f$T_{eff}\ (K)\f$ Effective surface temperature of the star (black body) in kelvin. See https://en.wikipedia.org/wiki/Effective_temperature.
    *   @param starLuminosityInW \f$L\ (W)\f$ Luminosity of the star in watts.
    *   @return \f$R\ (m)\f$ Radius of star in meters.
	*/    
    template<typename T>
    T PlanetaryEquilibriumTempreture(const T planetBondAlbedo, const T planetDistanceFromStarInm, const T starLuminosityInW, const T planetEmissivity = (T)1.0)
	

    *   @param starEffectiveSurfaceTemperatureInK \f$T_{ eff }\ (K)\f$ Effective surface temperature of the star(black body) in kelvin.See https ://en.wikipedia.org/wiki/Effective_temperature.

    template<typename T>
    T PlanetaryEquilibriumTempreture(const T planetBondAlbedo, const T planetDistanceFromStarInm, const T starEffectiveSurfaceTemperatureInK, const T starRadiusInm, const T planetEmissivity = (T)1.0);

    /// @}
} //namespace EGXPhys

#include "PlanetaryEquilibriumTempreture.inl"
