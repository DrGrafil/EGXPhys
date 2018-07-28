/// @file EGXPhys/Astrophysics/SolarLuminosityRatio.hpp
///
/// @brief Calculates solar luminosity ratio of a star when compared to the sun.
///
/// @author Elliot Grafil (Metex)
/// @date 7/27/18


/// @defgroup EGXPhys-Astrophysics-SolarLuminosityRatio Solar Luminosity Ratio
/// @ingroup EGXPhys-Astrophysics

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include "AstrophysicsConstants.hpp"

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{	
	/// @addtogroup EGXPhys-Astrophysics-SolarLuminosity
	/// @{
    
    /**
    *   @brief Calculates the solar luminosity (visual) ratio \f$\dfrac{L}{L_{\odot}\f$ of a star from the stars luminosity, \f$L\f$, in watts. It is the ratio of a star's luminosity to that of the sun.
    *   		\f[\dfrac{L}{L_{\odot}=\dfrac{L}{L_{\odot}\f]
    *   See https://en.wikipedia.org/wiki/Solar_luminosity and https://en.wikipedia.org/wiki/Mass–luminosity_relation
    *
    *   @param starLuminosityInW \f$L\ (W)\f$ Luminosity (visual) of the star in watts.
    *   @return \f$\dfrac{L}{L_{\odot}\f$(dimensionless) Solar luminosity ratio. Ratio of a star's luminosity to the luminosity of the Sun.
    *	@see solarBolometricLuminosityRatio() for calculations using the bolometric (all wavelengths) luminosity.
    */
    template<typename T>
    T SolarLuminosityRatio(const T starLuminosityInW);

    /**
    *   @brief Calculates the solar luminosity (visual) ratio \f$\dfrac{L}{L_{\odot}\f$ of a star from the stars luminosity, \f$L\f$, in watts. It is the ratio of a star's luminosity to that of the sun.
    *   		\f[\dfrac{L}{L_{\odot}=\dfrac{L}{L_{\odot}\f]
    *   See https://en.wikipedia.org/wiki/Solar_luminosity and https://en.wikipedia.org/wiki/Mass–luminosity_relation
    *
    *   @param starBolometricLuminosityInW \f$L\ (W)\f$ Bolometric luminosity (all wavelengths) of the star in watts.
    *   @return \f$\dfrac{L}{L_{\odot}\f$(dimensionless) Bolometric solar luminosity ratio. Ratio of a star's bolometric luminosity to the bolometric luminosity of the Sun.
    *	@see SolarLuminosityRatio() for calculations using visual luminosity.
    */
    template<typename T>
    T SolarBolometricLuminosityRatio(const T starBolometricLuminosityInW);

    /// @}
} //namespace EGXPhys

#include "SolarLuminosityRatio.inl"
