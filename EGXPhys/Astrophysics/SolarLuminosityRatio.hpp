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
    *   @brief Calculates the solar luminosity (visual) ratio \f$\dfrac{L}{L_{\odot}\f$ of a star. It is the ratio of a star's luminosity to that of the sun.
    *   		\f[M=\frac{m_{star}}{m_{ref}}\f]
    *   See https://en.wikipedia.org/wiki/Stellar_mass
    *
    *   @param starMass \f$m_{star}\ (kg)\f$ is the mass of the star.
    *	@param referenceMass \f$m_{ref}\ (kg)\f$ is the mass of the reference star.
    *   @return \f$M\f$(dimensionless) Stellar mass. Mass ratio of a star compared to a reference star.
    *	@see PlanetaryMass() for \f$M\f$ equation used for planets size objects.
    *	@see StellarMass() for \f$M\f$ equation using a star as a reference.
    *	@see SolarMass() for \f$M\f$ equation using the Sun as a reference.
    */
      template<typename T>
    T solarLuminosityRatio(const T starLuminosityInW);

    template<typename T>
    T solarBolometricLuminosityRatio(const T starBolometricLuminosityInW);

    /// @}
} //namespace EGXPhys

#include "SolarLuminosityRatio.inl"
