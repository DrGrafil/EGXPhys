/// @file EGXPhys/Astrophysics/SurfaceGravity.hpp
///
/// @brief Calculates surface gravity of celestial bodies.
///
/// @author Elliot Grafil 
/// @date 4/19/18

/// @defgroup EGXPhys-Astrophysics-SurfaceGravity Surface Gravity
/// @ingroup EGXPhys-Astrophysics

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include "AstrophysicsConstants.hpp"
//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{
	/// @addtogroup EGXPhys-Astrophysics-SurfaceGravity
	/// @{
	
	/**
	*   @brief Calculates the surface gravity, \f$g\f$, of a celestial body in meters per second squared. The surface gravity is a product of the gravitational constant, \f$G\f$, as well as the mass, \f$M\f$, and mean radius, \f$r\f$, of the celestial body:
	*   		\f[g  = \frac{GM}{r^2}\f]
	*
	*   See https://en.wikipedia.org/wiki/Surface_gravity and https://en.wikipedia.org/wiki/Gravity_of_Earth
	*
	*   @param massInkg \f$M\ (kg)\f$ Mass of celestial body in kilograms.
	*   @param meanRadiusInm \f$r\ (m)\f$ Mean radius of celestial body in meters.
	*   @return \f$g\ (\frac{m}{s^2})\f$ Surface gravity of celestial body in meters per second squared.
	*	@see SurfaceGravityIng() for surface gravity in gs.
	*	@see StandardGravitationalParameter() for calulations of the standard gravitational parameter.
	*/
	template<typename T>
	T SurfaceGravityInmPersSquared(const T massInkg, const T meanRadiusInm);

	/**
	*   @brief Calculates the surface gravity, \f$g\f$, of a celestial body in gs (Earth's gravity). The surface gravity is a product of the gravitational constant, \f$G\f$, as well as the mass, \f$M\f$, and mean radius, \f$r\f$, of the celestial body:
	*   		\f[g  = \frac{GM}{g_{Earth}r^2}\f]
	*
	*   See https://en.wikipedia.org/wiki/Surface_gravity and https://en.wikipedia.org/wiki/Gravity_of_Earth
	*
	*   @param massInkg \f$M\ (kg)\f$ Mass of celestial body in kilograms.
	*   @param meanRadiusInm \f$r\ (m)\f$ Mean radius of celestial body in meters.
	*   @return \f$g\ (g)\f$ Surface gravity of celestial body in gs.
	*	@see SurfaceGravityInmPersSquared() for surface gravity in meter per second squared.
	*	@see StandardGravitationalParameter() for calulations of the standard gravitational parameter.
	*/
	template<typename T>
	T SurfaceGravityIng(const T massInkg, const T meanRadiusInm);

    /// @}
} //namespace EGXPhys

#include "SurfaceGravity.inl"
