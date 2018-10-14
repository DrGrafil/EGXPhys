/// @file EGXMath/Geometry/3D/Spheroid/SpheroidEccentricity.hpp
/// 
/// @brief Defines functions relating to eccentricity of a spheroid.
///
/// @author Elliot Grafil (Metex)
/// @date 4/20/18

/// @defgroup EGXMath-Geometry-3D-Spheroid-Eccentricity Eccentricity
/// @ingroup EGXMath-Geometry-3D-Spheroid


//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <cmath>
//=================================
// Forward declared dependencies

//=================================
//


namespace EGXMath
{
	/// @addtogroup EGXMath-Geometry-3D-Spheroid-Eccentricity
	/// @{

	/**
	*   @brief Finds the eccentricity, \f$e\f$, of a spheroid from flattening, \f$f\f$:
	*		\f[ e = \sqrt{f (2 - f)} \f]
	*
	*	Equation taken from "Map Projections-A Working Manual" (Snyder, 1987), p. 13
	*
	*	See https://en.wikipedia.org/wiki/Eccentricity_(mathematics) , http://mathworld.wolfram.com/Eccentricity.html, http://mathworld.wolfram.com/Flattening.html
	*	@param flattening \f$ f\ (dimensionless)\f$ Flattening of spheroid.
	*   @return \f$ e\ (dimensionless)\f$ Flatness of spheroid.
    *	@see SpheroidEquatorialRadius() for equatorial radius of a spheroid.
	*	@see SpheroidFlattening() for flattening of a spheroid.
    *	@see SpheroidInertia() for inertia tensor of a spheroid.
    *	@see SpheroidPolarRadius() for polar radius of a spheroid.
	*	@see SpheroidSurfaceArea() for surface area of a spheroid.
	*	@see SpheroidVolume() for volume of a spheroid.
	*/
	template <typename T>
	T SpheroidEccentricity(const T flattening);

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
    *	@param equatorialRadiusInm \f$ a\ (m)\f$ Equatorial radius in meters. The degenerate semi-principle axis of the spheroid.
    *	@param polarRadiusInm \f$ c\ (m)\f$ Polar radius in meters. The unique semi-principle axis of the spheroid.
	*   @return \f$ e\ (dimensionless)\f$ Eccentricity of spheroid.
    *	@see SpheroidEquatorialRadius() for equatorial radius of a spheroid.
    *	@see SpheroidFlattening() for flattening of a spheroid.
    *	@see SpheroidInertia() for inertia tensor of a spheroid.
    *	@see SpheroidPolarRadius() for polar radius of a spheroid.
    *	@see SpheroidSurfaceArea() for surface area of a spheroid.
    *	@see SpheroidVolume() for volume of a spheroid.
	*/
	template <typename T>
	T SpheroidEccentricity(const T equatorialRadiusInm, const T polarRadiusInm);
	


    /// @}
} //namespace EGXMath

#include "SpheroidEccentricity.inl"
