/// @file EGXPhys/Astrophysics/OrbitalCharecteristics.hpp
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
	*   @brief  Calculates apoapsis of an orbiting body. The apoapsis is the distance at which an orbiting object is farthest away from the body it is orbiting.
	*			\f[r=a(1+e)\f]   
	*  
	*   @param  orbitalEccentricity e(dimensionless) is the amount by which its orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
	*   @param  semimajorAxis a(m) is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
	*   @return Apoapsis r(m) for a black body
	*/ 
    template<typename T>
    T Apoapsis( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    template<typename T>
	static const auto& Aphelion = Apoapsis<T>;
	static const auto& Apastron = Apoapsis<T>;
	static const auto& Apogee = Apoapsis<T>;
	static const auto& Apocenter = Apoapsis;
    
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
    
} //namespace EGXPhys

#include "header.inl"
