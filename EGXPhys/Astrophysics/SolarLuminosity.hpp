/// @file EGXPhys/Astrophysics/SolarLuminosity.hpp
///
/// @brief Calculates solar luminosity ratio of a star when compared to the sun.
///
/// @author Elliot Grafil (Metex)
/// @date 7/27/18


/// @defgroup EGXPhys-Astrophysics-SolarLuminosity Solar Luminosity
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
    
    template<typename T>
    T solarLuminosity(const T starLuminosityInW);

    template<typename T>
    T solarLuminosityRatio(const T starLuminosityInW);

    template<typename T>
    T solarBolometricLuminosity(const T starBolometricLuminosityInW);

    template<typename T>
    T solarBolometricLuminosityRatio(const T starBolometricLuminosityInW);

    /// @}
} //namespace EGXPhys

#include "SolarLuminosity.inl"
