/// @file EGXPhys/Astrophysics/StellarLuminosity.hpp
///
/// @brief Calculates stellar luminosity of a star.
///
/// @author Elliot Grafil 
/// @date 7/27/18


/// @defgroup EGXPhys-Astrophysics-StellarLuminosity StellarLuminosity
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
	/// @addtogroup EGXPhys-Astrophysics-StellarLuminosity
	/// @{
    
    /**
    *   @brief Calculates the stellar luminosity, \f$L\f$, in watts of a star from a stars absolute bolometric magnitude, \f$M_{bol}\f$.
    *   		\f[ L=L_{0}10^{-0.4 M_{bol}}\f]
    *   See https://en.wikipedia.org/wiki/Solar_luminosity and https://en.wikipedia.org/wiki/Mass–luminosity_relation
    *
    *   @param starAbsoluteBolometricMagnitude \f$M_{bol}\ (dimensionless)\f$ Absolute bolometric (all wavelengths) magnitude of the star.
    *   @return \f$L\ (W)\f$ Luminosity of the star in watts.
    *
    */
    template<typename T>
    T StellarLuminosity(const T starAbsoluteBolometricMagnitude);


    /// @}
} //namespace EGXPhys

#include "StellarLuminosity.inl"
