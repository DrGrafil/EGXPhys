/// @file EGXPhys/Astrophysics/AbsoluteMagnitude.hpp
///
/// @brief Calculates the absolute magnitude of a star.
///
/// @author Elliot Grafil (Metex)
/// @date 4/14/18

/// @defgroup EGXPhys-Astrophysics-AbsoluteMagnitude Absolute Magnitude
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
	/// @addtogroup EGXPhys-Astrophysics-AbsoluteMagnitude
	/// @{

	/**
	*   @brief Calculates the absolute magnitude, \f$M\f$, of a star from its apparent magnitude, \f$m\f$, and the distance, \f$d\f$, in parsecs it is away. 
	*   		\f[M= m - 5 \left ( log_{10}(d_{pc}) - 1 \right )\f]
	*
	*	See https://en.wikipedia.org/wiki/Absolute_magnitude
	*
	*   @param apparentMagnitude \f$M\ (dimensionless)\f$ Apparent magnitude of a star (almost allways as seen from earth).
	*   @param distanceInparsecs \f$d_{pc}\ (pc)\f$ Distance in parsecs between a star and the measurement of apparent magnitude.
	*   @return \f$M\ (dimensionless)\f$ Absolute magnitude of a star.
	*/
	template<typename T>
	T AbsoluteMagnitude(const T apparentMagnitude, const T distanceInparsecs);

    /// @}
} //namespace EGXPhys

#include "AbsoluteMagnitude.inl"
