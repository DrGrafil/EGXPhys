/// @file Astrophysics/Luminosity.hpp
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
    
    
	/** 
	*   @brief  Calculates the luminosity in Watts of a black body.   
	*  
	*   @param  tempreture (K) is tempreture of black body 
	*   @param  area (m^2) is the area of black body
	*   @return Luminosity (W) for a black body
	*/ 
    template<typename T>
    T blackbodyLuminosity(const T& area, const T& tempreture);
    
    
} //namespace EGXPhys

#include "header.inl"
