/// @file EGXPhys/Astrophysics/Periapsis.hpp
///
/// @brief Calculates periapsis of various orbiting bodies.
///
/// @author Elliot Grafil (Metex)
/// @date 7/29/17


/// @defgroup EGXPhys-Periapsis Periapsis
/// @ingroup EGXPhys-Astrophysics
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
	/// @addtogroup EGXPhys-Periapsis
	/// @{
	
	/** 
	*   @brief Calculates periapsis of an orbiting body. 
    *
    *   The periapsis is the distance at which an orbiting object is farthest away from the body it is orbiting.
	*			\f[r=a(1-e)\f]
	*   See http://mathworld.wolfram.com/Periapsis.html and https://en.wikipedia.org/wiki/Apsis
    * 
    *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
    *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
	*   @return \f$ r\ (m)\f$ Periapsis for the orbiting body.
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
    T Periapsis( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    /**
     *   @brief Calculates periapsis of an orbiting body. 
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Pericenter for the orbiting body.
     *   @see Periapsis() for more info.
     *   @see Perifocus() alternative name.
     */
    template<typename T>
    T Pericenter( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    /**
     *   @brief Calculates periapsis of an orbiting body.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Perifocus for the orbiting body.
     *   @see Periapsis() for more info.
     *   @see Pericenter() alternative name.
     */
    template<typename T>
    T Perifocus( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates periapsis around a galaxy.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Perigalacticon for the orbiting body.
     *   @see Periapsis() for more info.
     */
    template<typename T>
    T Perigalacticon ( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates periapsis around a black hole.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Peribothron for the orbiting body.
     *   @see Periapsis() for more info.
     *   @see Perinigricon() alternative name.
     */
    template<typename T>
    T Peribothron( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    /**
     *   @brief Calculates periapsis around a black hole.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Perinigricon for the orbiting body.
     *   @see Periapsis() for more info.
     *   @see Peribothron() alternative name.
     */
    template<typename T>
    T Perinigricon( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates periapsis around a star.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Periastron for the orbiting body.
     *   @see Periapsis() for more info.
     */
    template<typename T>
    T Periastron( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    
    /**
     *   @brief Calculates periapsis around the Sun.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Perihelion for the orbiting body.
     *   @see Periapsis() for more info.
     */
    template<typename T>
    T Perihelion( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    
    /**
     *   @brief Calculates periapsis around Mercury.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Perihermion for the orbiting body.
     *   @see Periapsis() for more info.
     */
    template<typename T>
    T Perihermion( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates periapsis around Venus.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Pericytherion for the orbiting body.
     *   @see Periapsis() for more info.
     */
    template<typename T>
    T Pericytherion( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates periapsis around Earth.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Perigee for the orbiting body.
     *   @see Periapsis() for more info.
     */
    template<typename T>
    T Perigee( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates periapsis around Moon.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Perilune for the orbiting body.
     *   @see Periapsis() for more info.
     *   @see Pericynthion() alternative name.
     *   @see Periselene() alternative name.
     */
    template<typename T>
    T Perilune( const T& orbitalEccentricity, const T& semiMajorAxisInm );
   
    /**
     *   @brief Calculates periapsis around Moon.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Pericynthion for the orbiting body.
     *   @see Periapsis() for more info.
     *   @see Perilune() alternative name.
     *   @see Periselene() alternative name.
     */
    template<typename T>
    T Pericynthion( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    /**
     *   @brief Calculates periapsis around Moon.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Periselene for the orbiting body.
     *   @see Periapsis() for more info.
     *   @see Perilune() alternative name.
     *   @see Pericynthion() alternative name.
     */
    template<typename T>
    T Periselene( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates periapsis around Mars.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Periareion for the orbiting body.
     *   @see Periapsis() for more info.
     */
    template<typename T>
    T Periareion( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates periapsis around Jupiter.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Perizene for the orbiting body.
     *   @see Periapsis() for more info.
     *   @see Perijove() alternative name.
     */
    template<typename T>
    T Perizene( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    /**
     *   @brief Calculates periapsis around Jupiter.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Perijove for the orbiting body.
     *   @see Periapsis() for more info.
     *   @see Perizene() alternative name.
     */
    template<typename T>
    T Perijove( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates periapsis around Saturn.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Perichron for the orbiting body.
     *   @see Periapsis() for more info.
     *   @see Perichron() alternative name.
     *   @see Perisaturnium() alternative name.
     */
    template<typename T>
    T Perichron( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    /**
     *   @brief Calculates periapsis around Saturn.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Perikrone for the orbiting body.
     *   @see Periapsis() for more info.
     *   @see Perichron() alternative name.
     *   @see Perisaturnium() alternative name.
     */
    template<typename T>
    T Perikrone( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    /**
     *   @brief Calculates periapsis around Saturn.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Perisaturnium for the orbiting body.
     *   @see Periapsis() for more info.
     *   @see Perichron() alternative name.
     *   @see Perikrone() alternative name.
     */
    template<typename T>
    T Perisaturnium( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates periapsis around Uranus.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Periuranion for the orbiting body.
     *   @see Periapsis() for more info.
     */
    template<typename T>
    T Periuranion( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates periapsis around Neptune.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Periposeidon for the orbiting body.
     *   @see Periapsis() for more info.
     */
    template<typename T>
    T Periposeidon( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates periapsis around Pluto.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Perihadion for the orbiting body.
     *   @see Periapsis() for more info.
     */
    template<typename T>
    T Perihadion( const T& orbitalEccentricity, const T& semiMajorAxisInm );
   
    
    /// @}
} //namespace EGXPhys

#include "Periapsis.inl"
