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
	*   @brief Finds the eccentricity, \f$e\f$, of a ellipse from flattening, \f$f\f$:
	*		\f[ e = \sqrt{f (2 - f)} \f]
	*
	*	Equation taken from "Map Projections-A Working Manual" (Snyder, 1987), p. 13
	*
	*	See https://en.wikipedia.org/wiki/Eccentricity_(mathematics) , http://mathworld.wolfram.com/Eccentricity.html, http://mathworld.wolfram.com/Flattening.html
	*	@param flattening \f$ f\ (dimensionless)\f$ Flattening of ellipse.
	*   @return \f$ e\ (dimensionless)\f$ Eccentricity of ellipse.
	*	@see EllipseSurfaceArea() for area of a ellipse.
	*	@see EllipseCircumference() for circumference of a ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of a ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of a ellipse.
	*	@see EllipseFocalLength() for focal length (linear eccentricity) of a ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity (focal length) of a ellipse.
	*	@see EllipseEccentricity() for eccentricity of a ellipse.
	*	@see EllipseInertia() for inertial tensor of a ellipse.
	*/
	template <typename T>
	T EllipseEccentricity(const T flattening);

	/**
	*   @brief Finds the eccentricity, \f$e\f$, of a ellipse with semi-major axis \f$a\f$, and semi-minor axis \f$b\f$:
	*		\f[ e = \sqrt{1-\frac{b^2}{a^2}}\f]
	*
	*	Equation taken from "Map Projections-A Working Manual" (Snyder, 1987), p. 13
	*
	*	See https://en.wikipedia.org/wiki/Eccentricity_(mathematics) , http://mathworld.wolfram.com/Eccentricity.html, http://mathworld.wolfram.com/Flattening.html
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*   @return \f$ e\ (dimensionless)\f$ Eccentricity of ellipse.
	*	@see EllipseSurfaceArea() for area of a ellipse.
	*	@see EllipseCircumference() for circumference of a ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of a ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of a ellipse.
	*	@see EllipseFocalLength() for focal length (linear eccentricity) of a ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity (focal length) of a ellipse.
	*	@see EllipseEccentricity() for eccentricity of a ellipse.
	*	@see EllipseInertia() for inertial tensor of a ellipse.
	*/
	template <typename T>
	T EllipseEccentricity(const T semiMajorAxisInm, const T semiMinorAxisInm);
	


    /// @}
} //namespace EGXMath

#include "EllipseEccentricity.inl"
