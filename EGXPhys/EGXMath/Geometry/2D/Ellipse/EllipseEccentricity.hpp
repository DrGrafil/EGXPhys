/// @file EGXMath/Geometry/2D/EllipseEccentricity.hpp
/// 
/// @brief Defines functions relating to eccentricity of a spheroid.
///
/// @author Elliot Grafil (Metex)
/// @date 4/23/18

/// @defgroup EGXMath-Geometry-2D-Ellipse-Eccentricity Eccentricity
/// @ingroup EGXMath-Geometry-2D-Ellipse


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
	/// @addtogroup EGXMath-Geometry-2D-Ellipse-Eccentricity
	/// @{

	/**
	*   @brief Finds the eccentricity, \f$e\f$, of a spheroid from flattening, \f$f\f$:
	*		\f[ e = \sqrt{f (2 - f)} \f]
	*
	*	Equation taken from "Map Projections-A Working Manual" (Snyder, 1987), p. 13
	*
	*	See https://en.wikipedia.org/wiki/Eccentricity_(mathematics) , http://mathworld.wolfram.com/Eccentricity.html, http://mathworld.wolfram.com/Flattening.html
	*	@param eccentricity \f$ f\ (dimensionless)\f$  Eccentricity of spheroid.
	*   @return \f$ e\ (dimensionless)\f$ Flatness of spheroid.
	*	@see SpheroidFlattening() for flattening of a spheroid.
	*	@see SpheroidSurfaceArea() for surface area of a spheroid.
	*	@see SpheroidVolume() for volume of a spheroid.
	*	@see SpheroidInertia() for inertia tensor of a spheroid.
	*/
	template <typename T>
	T EllipseEccentricity(const T flattening);

	/**
	*   @brief Finds the eccentricity, \f$e\f$, of a spheroid with equatorial radius \f$a\f$ and polar radius, \f$c\f$:
	*		\f[ f =\begin{cases}
\sqrt{\frac{a^2-c^2}{a^2}} & oblate \\ 
\sqrt{\frac{c^2-a^2}{a^2}} & prolate 
\end{cases} \f]
	*
	*	Spheroid is oblate if the equatorial radius is larger than the polar radius. It is prolate if the polar radius is larger than the equatorial radius.
	*
	*	Equation taken from "Map Projections-A Working Manual" (Snyder, 1987), p. 13
	*
	*	See https://en.wikipedia.org/wiki/Eccentricity_(mathematics) , http://mathworld.wolfram.com/Eccentricity.html, http://mathworld.wolfram.com/Flattening.html
	*	@param equatorialRadius \f$ a\ (m)\f$ Equatorial radius in meters.
	*	@param polarRadius \f$ c\ (m)\f$ Polar radius in meters.
	*   @return \f$ e\ (dimensionless)\f$ Eccentricity of spheroid.
	*	@see SpheroidFlattening() for flattening of a spheroid.
	*	@see SpheroidSurfaceArea() for surface area of a spheroid.
	*	@see SpheroidVolume() for volume of a spheroid.
	*	@see SpheroidInertia() for inertia tensor of a spheroid.
	*/
	template <typename T>
	T EllipseEccentricity(const T equatorialRadius, const T polarRadius);
	


    /// @}
} //namespace EGXMath

#include "EllipseEccentricity.inl"
