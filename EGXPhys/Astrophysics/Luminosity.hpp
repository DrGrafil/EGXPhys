/// @file EGXPhys/Astrophysics/Luminosity.hpp
///
/// @brief Calculates luminosity of various types for stellar bodies
///
/// @author Elliot Grafil (Metex)
/// @date 7/25/17
/// @bug No known bugs.

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
	/// @addtogroup Astrophysics
	/// @{

	/** 
	*   @brief  Calculates the luminosity in Watts of a black body. 
	*			\f[L=\sigma*A*T^4\f]   
	*  
	*   @param  area A(m^2) is the area of black body
	*   @param  tempreture T(K) is tempreture of black body 
	*   @return Luminosity L(W) for a black body
	*/ 
    template<typename T>
    T blackbodyLuminosity(const T& area, const T& tempreture);
    
    /** 
	*   @brief  Calculates the radio luminosity in W/Hz of a radio source. See https://en.wikipedia.org/wiki/Luminosity#Radio_luminosity.  
	*  
	*   @param  fluxDensity (W*m^2/Hz) is observed flux density 
	*   @param  luminosityDistance (m) is the luminosity distance. See https://en.wikipedia.org/wiki/Luminosity_distance.
	*   @param	redshift (dimensionless) for a black body. See https://en.wikipedia.org/wiki/Redshift.
	*	@param	spectralIndex (dimensionless). The spectral index is typically -0.7.
	*	@return Radio luminosity (W/Hz) of a radio source. 
	*/ 
    template<typename T>
    T radioLuminosity(const T& fluxDensity, const T& luminosityDistance, const T& redshift, const T& spectralIndex);
    
    /// @}
} //namespace EGXPhys

#include "Luminosity.inl"
