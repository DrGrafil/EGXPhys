/// @file EGXPhys/Astrophysics/B-VColor.hpp
///
/// @brief Calculates B-V Color of stars and related information derived from it.
///
/// @author Elliot Grafil (Metex)
/// @date 3/19/18

/// @defgroup EGXPhys-B-VColor B-V Color
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
	/// @addtogroup EGXPhys-B-VColor
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
	T BVColorToTempreture(const T BV);

	/**
	*   @brief Calculates the tempreture, \f$T_{star}\f$, of a star in Kelvin from the B-V color index using Ballesteros' formula. This approximation assumes that stars are black bodies.
	*   		\f[T_{star}=4600 \left ( \frac{1}{0.92 (B-V)+ 1.7} + \frac{1}{0.92 (B-V) + 0.62} \right )\f]
	*
	*	See https://arxiv.org/pdf/1201.1809.pdf for Ballesteros' paper.
	*   See http://en.wikipedia.org/wiki/Color_index
	*
	*   @param BV \f$B-V\ (dimensionless)\f$ is the B-V color index of the star.
	*   @return \f$T\ (K)\f$ Tempreture of the star in Kelvin.
	*	@see BVToTempreture() for alias.
	*/
	template<typename T>
	T BVColorToTempretureBallesteros(const T BV);

    /// @}
} //namespace EGXPhys

#include "B-VColor.inl"
