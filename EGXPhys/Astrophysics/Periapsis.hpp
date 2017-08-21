/// @file EGXPhys/Astrophysics/Periapsis.hpp
///
/// @brief Calculates periapsis of various orbiting bodies.
///
/// Equation Count: 23 \n
/// Equations: Complete \n
/// Documentation: Complete \n
/// Unit-Test: Complete \n
///
/// @author Elliot Grafil (Metex)
/// @date 7/29/17


/// @defgroup Periapsis Periapsis
/// @ingroup Astrophysics
/// Calculates periapsis of an orbiting body.

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
	/// @addtogroup Periapsis
	/// @{
	
	/** 
	*   @brief Calculates periapsis of an orbiting body. 
    *
    *   The periapsis is the distance at which an orbiting object is nearest to the body it is orbiting.
	*			\f[r_p=a(1-e)\f]
	*   See https://en.wikipedia.org/wiki/Apsis
    * 	
    *	Equation taken from http://mathworld.wolfram.com/Periapsis.html	
    *
	*   @param  orbitalEccentricity \f$e\ (1)\f$ Orbital eccentricity. The amount by which its orbit around another body deviates from a perfect circle. \f$e=0\f$ is circular,\f$ 0<e<1\f$ is elliptical and \f$e>1\f$ is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
	*   @param  semimajorAxis \f$a\ (m)\f$ Semi-major Axis of orbit in meters. It is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
	*   @return \f$r_p\ (m)\f$ Periapsis. The distance at which an orbiting object is nearest to the body it is orbiting in meters.
    *   @see Pericenter() alternative name.
    *   @see Perifocus() alternative name.
    *   @see Perigalacticon() periapsis around a galaxy.
    *   @see Peribothron() periapsis around a black hole.
    *   @see Perinigricon() periapsis around a black hole.
    *   @see Periastron() periapsis around a star.
    *   @see Perihelion() periapsis around the Sun.
    *   @see Perihermion() periapsis around Mercury.
    *   @see Pericytherion() periapsis around Venus.
    *   @see Perigee() periapsis around Earth.
    *   @see Perilune() periapsis around Moon.
    *   @see Pericynthion() periapsis around Moon.
    *   @see Periselene() periapsis around Moon.
    *   @see Periareion() periapsis around Mars.
    *   @see Perizene() periapsis around Jupiter.
    *   @see Perijove() periapsis around Jupiter.
    *   @see Perichron() periapsis around Saturn.
    *   @see Perikrone() periapsis around Saturn.
    *   @see Perisaturnium() periapsis around Saturn.
    *   @see Periuranion() periapsis around Uranus.
    *   @see Periposeidon() periapsis around Neptune.
    *   @see Perihadion() periapsis around Pluto.
	*/ 
    template<typename T>
    T Periapsis( const T& orbitalEccentricity, const T& semimajorAxis );
    
    /**
     *   @brief Calculates periapsis of an orbiting body. 
     *   @see Periapsis() for more info.
     *   @see Perifocus() alternative name.
     */
    template<typename T>
    T Pericenter( const T& orbitalEccentricity, const T& semimajorAxis );
    
    /**
     *   @brief Calculates periapsis of an orbiting body.
     *   @see Periapsis() for more info.
     *   @see Pericenter() alternative name.
     */
    template<typename T>
    T Perifocus( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates periapsis around a galaxy.
     *   @see Periapsis() for more info.
     */
    template<typename T>
    T Perigalacticon ( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates periapsis around a black hole.
     *   @see Periapsis() for more info.
     *   @see Perinigricon() alternative name.
     */
    template<typename T>
    T Peribothron( const T& orbitalEccentricity, const T& semimajorAxis );
    
    /**
     *   @brief Calculates periapsis around a black hole.
     *   @see Periapsis() for more info.
     *   @see Peribothron() alternative name.
     */
    template<typename T>
    T Perinigricon( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates periapsis around a star.
     *   @see Periapsis() for more info.
     */
    template<typename T>
    T Periastron( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    
    /**
     *   @brief Calculates periapsis around the Sun.
     *   @see Periapsis() for more info.
     */
    template<typename T>
    T Perihelion( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    
    /**
     *   @brief Calculates periapsis around Mercury.
     *   @see Periapsis() for more info.
     */
    template<typename T>
    T Perihermion( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates periapsis around Venus.
     *   @see Periapsis() for more info.
     */
    template<typename T>
    T Pericytherion( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates periapsis around Earth.
     *   @see Periapsis() for more info.
     */
    template<typename T>
    T Perigee( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates periapsis around Moon.
     *   @see Periapsis() for more info.
     *   @see Pericynthion() alternative name.
     *   @see Periselene() alternative name.
     */
    template<typename T>
    T Perilune( const T& orbitalEccentricity, const T& semimajorAxis );
   
    /**
     *   @brief Calculates periapsis around Moon.
     *   @see Periapsis() for more info.
     *   @see Perilune() alternative name.
     *   @see Periselene() alternative name.
     */
    template<typename T>
    T Pericynthion( const T& orbitalEccentricity, const T& semimajorAxis );
    
    /**
     *   @brief Calculates periapsis around Moon.
     *   @see Periapsis() for more info.
     *   @see Perilune() alternative name.
     *   @see Pericynthion() alternative name.
     */
    template<typename T>
    T Periselene( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates periapsis around Mars.
     *   @see Periapsis() for more info.
     */
    template<typename T>
    T Periareion( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates periapsis around Jupiter.
     *   @see Periapsis() for more info.
     *   @see Perijove() alternative name.
     */
    template<typename T>
    T Perizene( const T& orbitalEccentricity, const T& semimajorAxis );
    
    /**
     *   @brief Calculates periapsis around Jupiter.
     *   @see Periapsis() for more info.
     *   @see Perizene() alternative name.
     */
    template<typename T>
    T Perijove( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates periapsis around Saturn.
     *   @see Periapsis() for more info.
     *   @see Perichron() alternative name.
     *   @see Perisaturnium() alternative name.
     */
    template<typename T>
    T Perichron( const T& orbitalEccentricity, const T& semimajorAxis );
    
    /**
     *   @brief Calculates periapsis around Saturn.
     *   @see Periapsis() for more info.
     *   @see Perichron() alternative name.
     *   @see Perisaturnium() alternative name.
     */
    template<typename T>
    T Perikrone( const T& orbitalEccentricity, const T& semimajorAxis );
    
    /**
     *   @brief Calculates periapsis around Saturn.
     *   @see Periapsis() for more info.
     *   @see Perichron() alternative name.
     *   @see Perikrone() alternative name.
     */
    template<typename T>
    T Perisaturnium( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates periapsis around Uranus.
     *   @see Periapsis() for more info.
     */
    template<typename T>
    T Periuranion( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates periapsis around Neptune.
     *   @see Periapsis() for more info.
     */
    template<typename T>
    T Periposeidon( const T& orbitalEccentricity, const T& semimajorAxis );
    
    
    /**
     *   @brief Calculates periapsis around Pluto.
     *   @see Periapsis() for more info.
     */
    template<typename T>
    T Perihadion( const T& orbitalEccentricity, const T& semimajorAxis );
   
    
    /// @}
} //namespace EGXPhys

#include "Periapsis.inl"
