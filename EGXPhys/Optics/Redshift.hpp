/// @file EGXPhys/Optics/Redshift.hpp
///
/// @brief Calculates redshift caused by various doppler effects.
///
/// @author Elliot Grafil (Metex)
/// @date 7/28/17
/// @bug No known bugs.

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
    
} //namespace EGXPhys

#include "Redshift.inl"
