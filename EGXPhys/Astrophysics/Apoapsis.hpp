/// @file EGXPhys/Astrophysics/Apoapsis.hpp
///
/// @brief Calculates apoapsis of various orbiting bodies.
///
/// Equation Count: 23
/// Equations: Complete
/// Documentation: Complete
/// Unit-Test: Complete
///
/// @author Elliot Grafil (Metex)
/// @date 7/29/17


/// @defgroup Apoapsis Apoapsis
/// @ingroup Astrophysics
/// Calculates apoapsis of an orbiting body.

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
	/// @addtogroup Apoapsis
	/// @{
	
	/** 
	*   @brief Calculates apoapsis of an orbiting body. 
    *
    *   The apoapsis is the distance at which an orbiting object is farthest away from the body it is orbiting.
	*			\f[r=a(1+e)\f]   
	*   See https://en.wikipedia.org/wiki/Apsis
	*
	*	Equation taken from http://mathworld.wolfram.com/Apoapsis.html
    * 
	*   @param  orbitalEccentricity e(dimensionless) is the amount by which its orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
	*   @param  semimajorAxis a(m) is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
	*   @return Apoapsis r(m) for an orbiting body.
    *   @see Apocenter() alternative name.
    *   @see Apofocus() alternative name.
    *   @see Apogalacticon() apoapsis around a galaxy.
    *   @see Apobothron() apoapsis around a black hole.
    *   @see Aponigricon() apoapsis around a black hole.
    *   @see Apastron() apoapsis around a star.
    *   @see Aphelion() apoapsis around the Sun.
    *   @see Apohermion() apoapsis around Mercury.
    *   @see Apocytherion() apoapsis around Venus.
    *   @see Apogee() apoapsis around Earth.
    *   @see Apolune() apoapsis around Moon.
    *   @see Apocynthion() apoapsis around Moon.
    *   @see Aposelene() apoapsis around Moon.
    *   @see Apoareion() apoapsis around Mars.
    *   @see Apozene() apoapsis around Jupiter.
    *   @see Apojove() apoapsis around Jupiter.
    *   @see Apochron() apoapsis around Saturn.
    *   @see Apokrone() apoapsis around Saturn.
    *   @see Aposaturnium() apoapsis around Saturn.
    *   @see Apouranion() apoapsis around Uranus.
    *   @see Apoposeidon() apoapsis around Neptune.
    *   @see Apohadion() apoapsis around Pluto.
	*/ 
    template<typename T>
    T Apoapsis( const T& orbitalEccentricity, const T& semimajorAxis );
    
    /**
     *   @brief Calculates apoapsis of an orbiting body. 
     *   @see Apoapsis() for more info.
     *   @see Apofocus() alternative name.
     */
    template<typename T>
    T Apocenter( const T& orbitalEccentricity, const T& semimajorAxis );
    
    /**
     *   @brief Calculates apoapsis of an orbiting body.
     *   @see Apoapsis() for more info.
     *   @see Apocenter() alternative name.
     */
    template<typename T>
    T Apofocus( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates apoapsis around a galaxy.
     *   @see Apoapsis() for more info.
     */
    template<typename T>
    T Apogalacticon ( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates apoapsis around a black hole.
     *   @see Apoapsis() for more info.
     *   @see Aponigricon() alternative name.
     */
    template<typename T>
    T Apobothron( const T& orbitalEccentricity, const T& semimajorAxis );
    
    /**
     *   @brief Calculates apoapsis around a black hole.
     *   @see Apoapsis() for more info.
     *   @see Apobothron() alternative name.
     */
    template<typename T>
    T Aponigricon( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates apoapsis around a star.
     *   @see Apoapsis() for more info.
     */
    template<typename T>
    T Apastron( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    
    /**
     *   @brief Calculates apoapsis around the Sun.
     *   @see Apoapsis() for more info.
     */
    template<typename T>
    T Aphelion( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    
    /**
     *   @brief Calculates apoapsis around Mercury.
     *   @see Apoapsis() for more info.
     */
    template<typename T>
    T Apohermion( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates apoapsis around Venus.
     *   @see Apoapsis() for more info.
     */
    template<typename T>
    T Apocytherion( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates apoapsis around Earth.
     *   @see Apoapsis() for more info.
     */
    template<typename T>
    T Apogee( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates apoapsis around Moon.
     *   @see Apoapsis() for more info.
     *   @see Apocynthion() alternative name.
     *   @see Aposelene() alternative name.
     */
    template<typename T>
    T Apolune( const T& orbitalEccentricity, const T& semimajorAxis );
   
    /**
     *   @brief Calculates apoapsis around Moon.
     *   @see Apoapsis() for more info.
     *   @see Apolune() alternative name.
     *   @see Aposelene() alternative name.
     */
    template<typename T>
    T Apocynthion( const T& orbitalEccentricity, const T& semimajorAxis );
    
    /**
     *   @brief Calculates apoapsis around Moon.
     *   @see Apoapsis() for more info.
     *   @see Apolune() alternative name.
     *   @see Apocynthion() alternative name.
     */
    template<typename T>
    T Aposelene( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates apoapsis around Mars.
     *   @see Apoapsis() for more info.
     */
    template<typename T>
    T Apoareion( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates apoapsis around Jupiter.
     *   @see Apoapsis() for more info.
     *   @see Apojove() alternative name.
     */
    template<typename T>
    T Apozene( const T& orbitalEccentricity, const T& semimajorAxis );
    
    /**
     *   @brief Calculates apoapsis around Jupiter.
     *   @see Apoapsis() for more info.
     *   @see Apozene() alternative name.
     */
    template<typename T>
    T Apojove( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates apoapsis around Saturn.
     *   @see Apoapsis() for more info.
     *   @see Apochron() alternative name.
     *   @see Aposaturnium() alternative name.
     */
    template<typename T>
    T Apochron( const T& orbitalEccentricity, const T& semimajorAxis );
    
    /**
     *   @brief Calculates apoapsis around Saturn.
     *   @see Apoapsis() for more info.
     *   @see Apochron() alternative name.
     *   @see Aposaturnium() alternative name.
     */
    template<typename T>
    T Apokrone( const T& orbitalEccentricity, const T& semimajorAxis );
    
    /**
     *   @brief Calculates apoapsis around Saturn.
     *   @see Apoapsis() for more info.
     *   @see Apochron() alternative name.
     *   @see Apokrone() alternative name.
     */
    template<typename T>
    T Aposaturnium( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates apoapsis around Uranus.
     *   @see Apoapsis() for more info.
     */
    template<typename T>
    T Apouranion( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates apoapsis around Neptune.
     *   @see Apoapsis() for more info.
     */
    template<typename T>
    T Apoposeidon( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates apoapsis around Pluto.
     *   @see Apoapsis() for more info.
     */
    template<typename T>
    T Apohadion( const T& orbitalEccentricity, const T& semimajorAxis );
   
    
    /// @}
} //namespace EGXPhys

#include "Apoapsis.inl"
