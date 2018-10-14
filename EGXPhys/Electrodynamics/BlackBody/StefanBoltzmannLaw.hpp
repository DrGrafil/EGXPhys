/// @file EGXPhys/Electrodynamics/BlackBody/StefanBoltzmannLaw.hpp
///
/// @brief Calculates B-V Color of stars and related information derived from it Stefan-Boltzmann Law.
///
/// @author Elliot Grafil (Metex)
/// @date 5/30/18

/// @defgroup EGXPhys-Electrodynamics-BlackBody-StefanBoltzmannLaw Stefan-Boltzmann Law
/// @ingroup EGXPhys-Electrodynamics-BlackBody

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <cmath>  

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{
	/// @addtogroup EGXPhys-Electrodynamics-BlackBody-StefanBoltzmannLaw
	/// @{
	
	/**
	*   @brief Calculates the radiant emittance, \f$j^*\f$, of a black body in watts per meter squared using Stefan-Boltzmann Law from the surface tempreture, \f$T\f$ of the black body.
	*   		\f[j^*=\sigma T^4\f]
	*
	*	See https://en.wikipedia.org/wiki/Stefan%E2%80%93Boltzmann_law and https://en.wikipedia.org/wiki/Radiant_exitance and http://hyperphysics.phy-astr.gsu.edu/hbase/thermo/stefan.html
	*
	*   @param surfaceTempretureInK \f$T\ (K)\f$ Surface tempreture of the black body in kelvin.
	*   @return \f$j^*\ (\frac{W}{m^2})\f$ Radiant emittance of a black body in watts per meter squared.
	*	@see RadiantEmittance() for alias.
    *   @see RadiantExitance() for alias.
	*/
	template<typename T>
	T StefanBoltzmannLaw(const T surfaceTempretureInK);


    /// @}
} //namespace EGXPhys

#include "StefanBoltzmannLaw.inl"
