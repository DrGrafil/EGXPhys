/// @file EGXMath/Geometry/3D/SpheroidFlattening.hpp
/// 
/// @brief Defines functions relating to flattening of a spheroid.
///
/// @author Elliot Grafil (Metex)
/// @date 4/20/18

/// @defgroup EGXMath-Geometry-3D-Spheroid-Flattening Flattening/Oblateness
/// @ingroup EGXMath-Geometry-3D-Spheroid


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


namespace EGXMath
{
	/// @addtogroup EGXMath-Geometry-3D-Spheroid-Flattening
	/// @{

	/**
	*   @brief Finds the flattening (oblateness), \f$f\f$, of a spheroid with equatorial radius \f$a\f$ and polar radius, \f$c\f$:
	*		\f[ f =\begin{cases}
\frac{a-c}{a}{} & oblate \\ 
\frac{c-a}{a} & prolate 
\end{cases} \f]
	*
	*	Spheroid is oblate if the equatorial radius is larger than the polar radius. It is prolate if the polar radius is larger than the equatorial radius.
	*
	*	Equation taken from "Map Projections-A Working Manual" (Snyder, 1987), p. 13
	*
	*	See http://mathworld.wolfram.com/Flattening.html , https://en.wikipedia.org/wiki/Flattening and https://en.wikipedia.org/wiki/Equatorial_bulge
	*	@param equatorialRadius \f$ a\ (m)\f$ Equatorial radius in meters.
	*	@param polarRadius \f$ c\ (m)\f$ Polar radius in meters.
	*   @return \f$ f\ (dimensionless)\f$ Flattening of spheroid.
	*	@see SpheroidOblateness() for alias.
	*	@see SpheroidSurfaceArea() for surface area of a spheroid.
	*	@see SpheroidVolume() for volume of a spheroid.
	*	@see SpheroidInertia() for inertia tensor of a spheroid.
	*/
	template <typename T>
	T SpheroidFlattening(const T equatorialRadius, const T polarRadius);
	
	/**
	*   @brief Finds the flattening (oblateness), \f$f\f$, of a spheroid with eccentricity \f$e\f$:
	*		\f[ f = 1 - \sqrt{1-e^2} \f]
	*
	*	Equation taken from "Map Projections-A Working Manual" (Snyder, 1987), p. 13
	*
	*	See http://mathworld.wolfram.com/Flattening.html , https://en.wikipedia.org/wiki/Flattening and https://en.wikipedia.org/wiki/Equatorial_bulge
	*	@param eccentricity \f$ e\ (dimensionless)\f$ Eccentricity of spheroid.
	*   @return \f$ f\ (dimensionless)\f$ Flattening of spheroid.
	*	@see SpheroidOblateness() for alias.
	*	@see SpheroidEccentricity() for eccentricity of a spheroid
	*	@see SpheroidSurfaceArea() for surface area of a spheroid.
	*	@see SpheroidVolume() for volume of a spheroid.
	*	@see SpheroidInertia() for inertia tensor of a spheroid.
	*/
	template <typename T>
	T SpheroidFlattening(const T eccentricity);

	/**
	*   @brief Finds the oblateness (flattening), \f$f\f$, of a spheroid with equatorial radius \f$a\f$ and polar radius, \f$c\f$:
	*		\f[ f =\begin{cases}
	\frac{a-c}{a}{} & oblate \\
	\frac{c-a}{a} & prolate
	\end{cases} \f]
	*
	*	Spheroid is oblate if the equatorial radius is larger than the polar radius. It is prolate if the polar radius is larger than the equatorial radius.
	*
	*	Equation taken from "Map Projections-A Working Manual" (Snyder, 1987), p. 13
	*
	*	See http://mathworld.wolfram.com/Flattening.html , https://en.wikipedia.org/wiki/Flattening and https://en.wikipedia.org/wiki/Equatorial_bulge
	*	@param equatorialRadius \f$ a\ (m)\f$ Equatorial radius in meters.
	*	@param polarRadius \f$ c\ (m)\f$ Polar radius in meters.
	*   @return \f$ f\ (dimensionless)\f$ Flattening of spheroid.
	*	@see SpheroidFlattening() for alias.
	*	@see SpheroidSurfaceArea() for surface area of a spheroid.
	*	@see SpheroidVolume() for volume of a spheroid.
	*	@see SpheroidInertia() for inertia tensor of a spheroid.
	*/
	template <typename T>
	T SpheroidOblateness(const T equatorialRadius, const T polarRadius);

	/**
	*   @brief Finds the oblateness (flattening), \f$f\f$, of a spheroid with eccentricity \f$e\f$:
	*		\f[ f = 1 - \sqrt{1-e^2} \f]
	*
	*	Equation taken from "Map Projections-A Working Manual" (Snyder, 1987), p. 13
	*
	*	See http://mathworld.wolfram.com/Flattening.html , https://en.wikipedia.org/wiki/Flattening and https://en.wikipedia.org/wiki/Equatorial_bulge
	*	@param eccentricity \f$ e\ (dimensionless)\f$ Eccentricity of spheroid.
	*   @return \f$ f\ (dimensionless)\f$ Flattening of spheroid.
	*	@see SpheroidFlattening() for alias.
	*	@see SpheroidEccentricity() for eccentricity of a spheroid
	*	@see SpheroidSurfaceArea() for surface area of a spheroid.
	*	@see SpheroidVolume() for volume of a spheroid.
	*	@see SpheroidInertia() for inertia tensor of a spheroid.
	*/
	template <typename T>
	T SpheroidOblateness(const T eccentricity);

    /// @}
} //namespace EGXMath

#include "SpheroidFlattening.inl"
