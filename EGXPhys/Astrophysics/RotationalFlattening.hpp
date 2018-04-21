/// @file EGXPhys/Astrophysics/RotationalFlattening.hpp
/// 
/// @brief Defines functions relating to flattening of a planet due to rotation.
///
/// @author Elliot Grafil (Metex)
/// @date 4/20/18

/// @defgroup EGXPhys-Astrophysics-RotationalFlattening Rotational Flattening/Oblateness
/// @ingroup EGXPhys-Astrophysics


//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <math.h>
//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{
	/// @addtogroup EGXPhys-Astrophysics-RotationalFlattening
	/// @{

	/**
	*   @brief Finds the flattening (oblateness), \f$f\f$, of a planet with ellipticity \f$e\f$:
	*		\f[ f = 1 - \sqrt{1-e^2} \f]
	*
	*	Equation taken from "Map Projections-A Working Manual" (Snyder, 1987), p. 13
	*
	*	See http://mathworld.wolfram.com/Flattening.html , https://en.wikipedia.org/wiki/Flattening and https://en.wikipedia.org/wiki/Equatorial_bulge
	*	@param ellipticity \f$ e\ (dimensionless)\f$ Ellipticity of planet.
	*   @return \f$ f\ (dimensionless)\f$ Flattening of planet.
	*	@see RotationalOblateness() for alias.
	*	@see SpheroidFlattening() for alias.
	*	@see SpheroidEllipticity() for ellipticity of a spheroid.
	*/
	template <typename T>
	T RotationalFlattening(const T ellipticity);

	/**
	*   @brief Finds the flattening (oblateness), \f$f\f$, of a planet with equatorial radius \f$a\f$ and polar radius, \f$c\f$:
	*		\f[ f =\begin{cases}
\frac{a-c}{a}{} & oblate \\ 
\frac{c-a}{a} & prolate 
\end{cases} \f]
	*
	*	Planet is oblate if the equatorial radius is larger than the polar radius. It is prolate if the polar radius is larger than the equatorial radius.
	*
	*	Equation taken from "Map Projections-A Working Manual" (Snyder, 1987), p. 13
	*
	*	See http://mathworld.wolfram.com/Flattening.html , https://en.wikipedia.org/wiki/Flattening and https://en.wikipedia.org/wiki/Equatorial_bulge
	*	@param equatorialRadius \f$ a\ (m)\f$ Equatorial radius in meters.
	*	@param polarRadius \f$ c\ (m)\f$ Polar radius in meters.
	*   @return \f$ f\ (dimensionless)\f$ Flattening of planet.
	*	@see RotationalOblateness() for alias.
	*	@see SpheroidFlattening() for alias.
	*/
	template <typename T>
	T RotationalFlattening(const T equatorialRadius, const T polarRadius);
	
	/**
	*   @brief Finds the flattening (oblateness), \f$f\f$, of a planet with mass, \f$M\f$, mean radius, \f$a\f$, and angular velocity of rotation, \f$\Omega\f$. Note that this is a 1st order approximation for a planet that is rotating relatively slowly (small flattening).
	*		\f[ f = \frac{5}{4} \frac{\Omega^2 a^3}{GM} \f]
	*
	*	Equation taken from http://farside.ph.utexas.edu/teaching/336k/Newtonhtml/node109.html
	*
	*	See http://mathworld.wolfram.com/Flattening.html , https://en.wikipedia.org/wiki/Flattening and https://en.wikipedia.org/wiki/Equatorial_bulge
	*	@param massInkg \f$ M\ (kg)\f$ Mass of planet in kilograms.
	*	@param meanRadiusInm \f$ e\ (m)\f$ Mean radius of planet in meters.
	*	@param angularVelocityInmPersSquared \f$ \Omega\ (\frac{m}{s^2})\f$ Angular velocity of rotation of planet in meter per second squared.
	*   @return \f$ f\ (dimensionless)\f$ Flattening of planet.
	*	@see RotationalOblateness() for alias.
	*/
	template <typename T>
	T RotationalFlattening(const T massInkg, const T meanRadiusInm, const T angularVelocityInmPersSquared);

	/**
	*   @brief Finds the oblateness (flattening), \f$f\f$, of a planet with ellipticity \f$e\f$:
	*		\f[ f = 1 - \sqrt{1-e^2} \f]
	*
	*	Equation taken from "Map Projections-A Working Manual" (Snyder, 1987), p. 13
	*
	*	See http://mathworld.wolfram.com/Flattening.html , https://en.wikipedia.org/wiki/Flattening and https://en.wikipedia.org/wiki/Equatorial_bulge
	*	@param ellipticity \f$ e\ (dimensionless)\f$ Ellipticity of planet.
	*   @return \f$ f\ (dimensionless)\f$ Flattening of planet.
	*	@see RotationalFlattening() for alias.
	*	@see SpheroidOblateness() for alias.
	*	@see SpheroidEllipticity() for ellipticity of a spheroid.
	*/
	template <typename T>
	T RotationalOblateness(const T ellipticity);

	/**
	*   @brief Finds the oblateness (flattening), \f$f\f$, of a planet with equatorial radius \f$a\f$ and polar radius, \f$c\f$:
	*		\f[ f =\begin{cases}
	\frac{a-c}{a}{} & oblate \\
	\frac{c-a}{a} & prolate
	\end{cases} \f]
	*
	*	Planet is oblate if the equatorial radius is larger than the polar radius. It is prolate if the polar radius is larger than the equatorial radius.
	*
	*	Equation taken from "Map Projections-A Working Manual" (Snyder, 1987), p. 13
	*
	*	See http://mathworld.wolfram.com/Flattening.html , https://en.wikipedia.org/wiki/Flattening and https://en.wikipedia.org/wiki/Equatorial_bulge
	*	@param equatorialRadius \f$ a\ (m)\f$ Equatorial radius in meters.
	*	@param polarRadius \f$ c\ (m)\f$ Polar radius in meters.
	*   @return \f$ f\ (dimensionless)\f$ Flattening of planet.
	*	@see RotationalFlattening() for alias.
	*	@see SpheroidOblateness() for alias.
	*/
	template <typename T>
	T RotationalOblateness(const T equatorialRadius, const T polarRadius);

	/**
	*   @brief Finds the oblateness (flattening), \f$f\f$, of a planet with mass, \f$M\f$, mean radius, \f$a\f$, and angular velocity of rotation, \f$\Omega\f$. Note that this is a 1st order approximation for a planet that is rotating relatively slowly (small flattening).
	*		\f[ f = \frac{5}{4} \frac{\Omega^2 a^3}{GM} \f]
	*
	*	Equation taken from http://farside.ph.utexas.edu/teaching/336k/Newtonhtml/node109.html
	*
	*	See http://mathworld.wolfram.com/Flattening.html , https://en.wikipedia.org/wiki/Flattening and https://en.wikipedia.org/wiki/Equatorial_bulge
	*	@param massInkg \f$ M\ (kg)\f$ Mass of planet in kilograms.
	*	@param meanRadiusInm \f$ e\ (m)\f$ Mean radius of planet in meters.
	*	@param angularVelocityInmPersSquared \f$ \Omega\ (\frac{m}{s^2})\f$ Angular velocity of rotation of planet in meter per second squared.
	*   @return \f$ f\ (dimensionless)\f$ Flattening of planet.
	*	@see RotationalOblateness() for alias.
	*/
	template <typename T>
	T RotationalOblateness(const T massInkg, const T meanRadiusInm, const T angularVelocityInmPersSquared);

    /// @}
} //namespace EGXPhys

#include "RotationalFlattening.inl"
