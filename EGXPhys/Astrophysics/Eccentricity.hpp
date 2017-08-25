/// @file EGXPhys/Astrophysics/Eccentricity.hpp
///
/// @brief Calculates eccentricity of an orbit.
///
/// Equation Count: \n
/// Equations:  \n
/// Documentation:  \n
/// Unit-Test:  \n
///
/// @author Elliot Grafil (Metex)
/// @date 8/24/17

/// @defgroup EGXPhys-Eccentricity Eccentricity
/// @ingroup EGXPhys-Astrophysics
/// Calculates eccentricity of an orbit.

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
	/// @addtogroup EGXPhys-Eccentricity
	/// @{

	/** 
	*   @brief Calculates eccentricity,\f$e\f$, of an orbit. 
    *
    *   The eccentricity of an orbit is the distance at which an orbiting object is farthest away from the body it is orbiting.
	*			\f[e = \frac{r_a}{a}-1.0)\f]   
	*   See http://mathworld.wolfram.com/Eccentricity.html and https://en.wikipedia.org/wiki/Orbital_eccentricity
	*
	*	Equation taken 
    * 
	*   @param  orbitalEccentricity \f$e\ (1)\f$ Orbital eccentricity. The amount by which its orbit around another body deviates from a perfect circle. \f$e=0\f$ is circular,\f$ 0<e<1\f$ is elliptical and \f$e>1\f$ is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
	*   @param  semimajorAxis \f$a\ (m)\f$ Semi-major Axis of orbit in meters. It is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
	*   @return \f$r_a\ (m)\f$ Apoapsis. The distance at which an orbiting object is farthest away from the body it is orbiting in meters.
    *   @see Apoapsis() alternative name.
	*/ 
	template<typename T>
	OrbitalEccentricityFromApoapsis(const T& apoapsis, const T& semiMajorAxis );
	
	template<typename T>
	OrbitalEccentricityFromPeriapsis(const T& periapsis, const T& semiMajorAxis );
	
	template<typename T>
	OrbitalEccentricity(const T& semiMajorAxis, const T& semiMinorAxis );
	
	template<typename T>
	OrbitalEccentricity(const T& specificOrbitalEnergy, const T& standardGravitationalParameter, const T& specificRelativeAngularMomentum );
	
	//https://en.wikipedia.org/wiki/Orbital_eccentricity
	template<typename T>
	OrbitalEccentricity(const T& periapsis, const T& apoapsis);
    
    /// @}
} //namespace EGXPhys

#include "Periapsis.inl"
