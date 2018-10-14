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


/// @defgroup EGXPhys-Apoapsis Apoapsis
/// @ingroup EGXPhys-Astrophysics
/// Calculates apoapsis of an orbiting body.

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <cmath>  

#include "AstrophysicsConstants.hpp"

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{
	/// @addtogroup EGXPhys-Apoapsis
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
	*   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
	*   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
	*   @return \f$ r\ (m)\f$ Apoapsis for the orbiting body.
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
    T Apoapsis( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    /**
     *   @brief Calculates apoapsis of an orbiting body. 
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Apocenter for the orbiting body.
     *   @see Apoapsis() for more info.
     *   @see Apofocus() alternative name.
     */
    template<typename T>
    T Apocenter( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    /**
     *   @brief Calculates apoapsis of an orbiting body.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Apofocus for the orbiting body.
     *   @see Apoapsis() for more info.
     *   @see Apocenter() alternative name.
     */
    template<typename T>
    T Apofocus( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates apoapsis around a galaxy.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Apogalacticon for the orbiting body.
     *   @see Apoapsis() for more info.
     */
    template<typename T>
    T Apogalacticon ( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates apoapsis around a black hole.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Apobothron for the orbiting body.
     *   @see Apoapsis() for more info.
     *   @see Aponigricon() alternative name.
     */
    template<typename T>
    T Apobothron( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    /**
     *   @brief Calculates apoapsis around a black hole.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Aponigricon for the orbiting body.
     *   @see Apoapsis() for more info.
     *   @see Apobothron() alternative name.
     */
    template<typename T>
    T Aponigricon( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates apoapsis around a star.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Apastron for the orbiting body.
     *   @see Apoapsis() for more info.
     */
    template<typename T>
    T Apastron( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    
    /**
     *   @brief Calculates apoapsis around the Sun.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Aphelion for the orbiting body.
     *   @see Apoapsis() for more info.
     */
    template<typename T>
    T Aphelion( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    
    /**
     *   @brief Calculates apoapsis around Mercury.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Apohermion for the orbiting body.
     *   @see Apoapsis() for more info.
     */
    template<typename T>
    T Apohermion( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates apoapsis around Venus.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Apocytherion for the orbiting body.
     *   @see Apoapsis() for more info.
     */
    template<typename T>
    T Apocytherion( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates apoapsis around Earth.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Apogee for the orbiting body.
     *   @see Apoapsis() for more info.
     */
    template<typename T>
    T Apogee( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates apoapsis around Moon.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Apolune for the orbiting body.
     *   @see Apoapsis() for more info.
     *   @see Apocynthion() alternative name.
     *   @see Aposelene() alternative name.
     */
    template<typename T>
    T Apolune( const T& orbitalEccentricity, const T& semiMajorAxisInm );
   
    /**
     *   @brief Calculates apoapsis around Moon.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Apocynthion for the orbiting body.
     *   @see Apoapsis() for more info.
     *   @see Apolune() alternative name.
     *   @see Aposelene() alternative name.
     */
    template<typename T>
    T Apocynthion( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    /**
     *   @brief Calculates apoapsis around Moon.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Aposelene for the orbiting body.
     *   @see Apoapsis() for more info.
     *   @see Apolune() alternative name.
     *   @see Apocynthion() alternative name.
     */
    template<typename T>
    T Aposelene( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates apoapsis around Mars.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Apoareion for the orbiting body.
     *   @see Apoapsis() for more info.
     */
    template<typename T>
    T Apoareion( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates apoapsis around Jupiter.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Apozene for the orbiting body.
     *   @see Apoapsis() for more info.
     *   @see Apojove() alternative name.
     */
    template<typename T>
    T Apozene( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    /**
     *   @brief Calculates apoapsis around Jupiter.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Apojove for the orbiting body.
     *   @see Apoapsis() for more info.
     *   @see Apozene() alternative name.
     */
    template<typename T>
    T Apojove( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates apoapsis around Saturn.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Apochron for the orbiting body.
     *   @see Apoapsis() for more info.
     *   @see Apochron() alternative name.
     *   @see Aposaturnium() alternative name.
     */
    template<typename T>
    T Apochron( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    /**
     *   @brief Calculates apoapsis around Saturn.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Apokrone for the orbiting body.
     *   @see Apoapsis() for more info.
     *   @see Apochron() alternative name.
     *   @see Aposaturnium() alternative name.
     */
    template<typename T>
    T Apokrone( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    /**
     *   @brief Calculates apoapsis around Saturn.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Aposaturnium for the orbiting body.
     *   @see Apoapsis() for more info.
     *   @see Apochron() alternative name.
     *   @see Apokrone() alternative name.
     */
    template<typename T>
    T Aposaturnium( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates apoapsis around Uranus.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Apouranion for the orbiting body.
     *   @see Apoapsis() for more info.
     */
    template<typename T>
    T Apouranion( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates apoapsis around Neptune.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Apoposeidon for the orbiting body.
     *   @see Apoapsis() for more info.
     */
    template<typename T>
    T Apoposeidon( const T& orbitalEccentricity, const T& semiMajorAxisInm );
    
    
    /**
     *   @brief Calculates apoapsis around Pluto.
     *   @param  orbitalEccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the orbit. Eccentricity is the amount by which an objects orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
     *   @param  semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the orbit in meters. This is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
     *   @return \f$ r\ (m)\f$ Apohadion for the orbiting body.
     *   @see Apoapsis() for more info.
     */
    template<typename T>
    T Apohadion( const T& orbitalEccentricity, const T& semiMajorAxisInm );
   
    
    /// @}
} //namespace EGXPhys

#include "Apoapsis.inl"
