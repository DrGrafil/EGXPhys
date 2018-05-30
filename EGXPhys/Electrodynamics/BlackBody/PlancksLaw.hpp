/// @file EGXPhys/Electrodynamics/BlackBody/PlancksLaw.hpp
///
/// @brief Calculates B-V Color of stars and related information derived from it PlancksLaw.
///
/// @author Elliot Grafil (Metex)
/// @date 5/25/18

/// @defgroup EGXPhys-Electrodynamics-BlackBody-PlancksLaw Planck's Law
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
	/// @addtogroup EGXPhys-Electrodynamics-BlackBody-PlancksLaw
	/// @{
	
	/**
	*   @brief Calculates the spectral radiance, \f$B_{\lambda}\f$, in watts per steradien meter cubed of a black body from the surface tempreture, \f$T\f$ of the black body using Plank's Law. The spectral radience is the amount of power emmited per steradien at a specific wavelength for a unit surface area of the black body.
	*   		\f[ B_{\lambda} = \dfrac{2 h c^2}{\lambda^5} \dfrac{1}{e^{\dfrac{hc}{\lambda k_B T}} - 1} \f]
	*
	*   See https://en.wikipedia.org/wiki/Planck%27s_law
	*
	*   @param surfaceTempInK \f$T\ (K)\f$ Surface tempreture of the black body in Kelvin.
    *   @param wavelengthInm \f$\lambda\ (m)\f$ Wavelength at which to find spectral radiance at in meters.
	*   @return \f$B_{\lambda}\ ( \dfrac{W}{sr\ m^3})\f$ Spectral radiance of a black body at the wavelength \f$B_{\lambda}\f$ in watts per steradien meter cubed.
	*	@see BVToTempretureBallesteros() for alias.
	*/
	template<typename T>
	T PlancksLaw(const T wavelengthInm, const T surfaceTempretureInK);

    /// @}
} //namespace EGXPhys

#include "PlancksLaw.inl"
