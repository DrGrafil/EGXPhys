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
	*   @brief Finds the eccentricity, \f$e\f$, of an ellipse from flattening, \f$f\f$:
	*		\f[ e = \sqrt{f (2 - f)} \f]
	*
	*	Equation taken from "Map Projections-A Working Manual" (Snyder, 1987), p. 13
	*
	*	See https://en.wikipedia.org/wiki/Eccentricity_(mathematics) , http://mathworld.wolfram.com/Eccentricity.html, http://mathworld.wolfram.com/Flattening.html
	*	@param flattening \f$ f\ (dimensionless)\f$ Flattening of ellipse.
	*   @return \f$ e\ (dimensionless)\f$ Eccentricity of ellipse.
	*	@see EllipseSurfaceArea() for area of an ellipse.
	*	@see EllipseCircumference() for circumference of an ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of an ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of an ellipse.
	*	@see EllipseSemiLatusRectum() for semi-latus rectum of an ellipse.
	*	@see EllipseDirectrix() for directrix of an ellipse.
	*	@see EllipseFocalParameter() for focal parameter of an ellipse.
	*	@see EllipseFocalLength() for focal length of an ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity of an ellipse.
	*	@see EllipseInertia() for inertial tensor of an ellipse.
	*/
	template <typename T>
	T EllipseEccentricity(const T flattening);

	/**
	*   @brief Finds the eccentricity, \f$e\f$, of an ellipse with semi-major axis \f$a\f$, and semi-minor axis \f$b\f$:
	*		\f[ e = \sqrt{1-\frac{b^2}{a^2}}\f]
	*
	*	Equation taken from "Map Projections-A Working Manual" (Snyder, 1987), p. 13
	*
	*	See https://en.wikipedia.org/wiki/Eccentricity_(mathematics) , http://mathworld.wolfram.com/Eccentricity.html, http://mathworld.wolfram.com/Flattening.html
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*   @return \f$ e\ (dimensionless)\f$ Eccentricity of ellipse.
	*	@see EllipseSurfaceArea() for area of an ellipse.
	*	@see EllipseCircumference() for circumference of an ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of an ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of an ellipse.
	*	@see EllipseSemiLatusRectum() for semi-latus rectum of an ellipse.
	*	@see EllipseDirectrix() for directrix of an ellipse.
	*	@see EllipseFocalParameter() for focal parameter of an ellipse.
	*	@see EllipseFocalLength() for focal length of an ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity of an ellipse.
	*	@see EllipseInertia() for inertial tensor of an ellipse.
	*/
	template <typename T>
	T EllipseEccentricity(const T semiMajorAxisInm, const T semiMinorAxisInm);
	


    /// @}
} //namespace EGXMath

#include "EllipseEccentricity.inl"
