/// @file EGXPhys/Astrophysics/BolometricCorrection.hpp
///
/// @brief Calculates bolometric correction of for a star. It allows one to convert the visible magnitude of a star into the bolometric(full spectrum) magnitude.
///
/// @author Elliot Grafil 
/// @date 7/16/18

/// @defgroup EGXPhys-Astrophysic-BolometricCorrection Bolometric Correction
/// @ingroup EGXPhys-Astrophysics

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
	/// @addtogroup EGXPhys-Astrophysic-BolometricCorrection
	/// @{
	
	/**
	*   @brief Calculates the visual band bolometric correction, \f$BC_{V}\f$, of a star using emperical data. The bolometric conversion is used to convert the absolute visual magnitude to the absolute bolometric magnitude. 
    *   		\f[ BC_{V}=a + b ( \log T_{eff}) + c ( \log T_{eff})^2 + ...\f]
	*
    *   \f[\begin{array}{|c|c|c|c|} \hline
        Coeff. & \log T_{eff} < 3.70 & 3.70 < \log T_{eff} < 3.90 & \log T_{eff} > 3.90 \\
        \hline
        a & -0.190537291496456e5    & -0.370510203809015e5  & -0.118115450538963e6 \\
        b &  0.155144866764412e5    &  0.385672629965804e5  & 0.137145973583929e6 \\
        c & -0.421278819301717e4    & -0.150651486316025e5  & -0.636233812100225e5 \\
        d &  0.381476328422343e3    &  0.261724637119416e4  & 0.147412923562646e5 \\
        e & -                       & -0.170623810323864e3  & -0.170587278406872e4 \\
        f & -                       & -                     & 0.788731721804990e2 \\
    \hline
    \end{array}\f]
    *
	*	See https://arxiv.org/pdf/1008.3913.pdf for ON THE USE OF EMPIRICAL BOLOMETRIC CORRECTIONS FOR STARS by Guillermo Torres where equations and numbers are taken from.
	*
	*   @param starEffectiveSurfaceTemperatureInK \f$T_{eff}\ (K)\f$ Effective surface temperature of the star (black body) in kelvin. See https://en.wikipedia.org/wiki/Effective_temperature.
	*   @return \f$BC_{V}\ (mag)\f$ Visual Bolometric Correction.
	*/
	template<typename T>
	T BolometricCorrectionVisual(const T starEffectiveSurfaceTemperatureInK);

    /// @}
} //namespace EGXPhys

#include "BolometricCorrection.inl"
