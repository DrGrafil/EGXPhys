/// @file EGXPhys/Optics/Redshift.hpp
///
/// @brief Calculates redshift caused by various doppler effects.
///
/// @author Elliot Grafil (Metex)
/// @date 7/28/17


//=================================
// Header guard
#pragma once
//=================================
// Included dependencies

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{
	/// @addtogroup Optics
	/// @{
    
	/** 
	*   @brief  Calculates the redshift, \f$z\f$, of light based on wavelenght. Redshifts occur when \f$z > 0\f$, blueshifts when \f$z < 0\f$. See https://en.wikipedia.org/wiki/Redshift.
	*			\f[z=\frac{\lambda_{observed}-\lambda_{emitted}}{\lambda_{emitted}}\f]   
	*  
	*   @param  wavelengthObserved \f$\lambda_{observed}\f$(\f$m\f$) is the observed wavelength of light.
	*   @param  wavelengthEmitted \f$\lambda_{emitted}\f$(\f$m\f$) is the emitted wavelength of light.
	*   @return \f$z\f$(dimensionless) redshift of the observed light.
	*/ 
    template<typename T>
    T redshiftByWavelength(const T& wavelengthObserved, const T& wavelengthEmitted);
    
    /** 
	*   @brief  Calculates the redshift, \f$z\f$, of light based on frequency. Redshifts occur when \f$z > 0\f$, blueshifts when \f$z < 0\f$. See https://en.wikipedia.org/wiki/Redshift.
	*			\f[z=\frac{f_{emitted}-f_{observed}}{f_{observed}}\f]   
	*  
	*   @param  frequencyObserved \f$f_{observed}\f$(\f$m\f$) is the observed frequency of light.
	*   @param  frequencyEmitted \f$f_{emitted}\f$(\f$m\f$) is the emitted frequency of light.
	*   @return \f$z\f$(dimensionless) redshift of the observed light.
	*/ 
    template<typename T>
    T redshiftByFrequency(const T& frequencyObserved, const T& frequencyEmitted);
    
	/// @}
} //namespace EGXPhys

#include "Redshift.inl"
