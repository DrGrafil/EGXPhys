/// @file EGXPhys/Electrodynamics/BlackBody/StefanBoltzmannLaw.hpp
///
/// @brief Calculates B-V Color of stars and related information derived from it StefanBoltzmannLaw.
///
/// @author Elliot Grafil (Metex)
/// @date 5/25/18

/// @defgroup EGXPhys-Electrodynamics-BlackBody-StefanBoltzmannLaw Stefan-Boltzmann Law
/// @ingroup EGXPhys-Electrodynamics-BlackBody

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
	/// @addtogroup EGXPhys-Electrodynamics-BlackBody-StefanBoltzmannLaw
	/// @{
	
	/**
	*   @brief Calculates the tempreture, \f$T_{star}\f$, of a star in Kelvin from the B-V color index using Ballesteros' formula. This approximation assumes that stars are black bodies.
	*   		\f[T_{star}=4600 \left ( \frac{1}{0.92 (B-V)+ 1.7} + \frac{1}{0.92 (B-V) + 0.62} \right )\f]
	*
	*	See https://arxiv.org/pdf/1201.1809.pdf for Ballesteros' paper.
	*   See http://en.wikipedia.org/wiki/Color_index
	*
	*   @param BV \f$B-V\ (dimensionless)\f$ is the B-V color index of the star.
	*   @return \f$T\ (K)\f$ Tempreture of the star in Kelvin.
	*	@see BVToTempretureBallesteros() for alias.
	*/
	template<typename T>
	T StefanBoltzmannLaw(const T surfaceAreaInm, const T surfaceTempInK);


    /// @}
} //namespace EGXPhys

#include "StefanBoltzmannLaw.hpp"
