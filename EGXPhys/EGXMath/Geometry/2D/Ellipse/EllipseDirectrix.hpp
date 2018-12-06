/// @file EGXMath/Geometry/2D/Ellipse/EllipseDirectrix.hpp
///
/// @brief Defines functions relating to ellipse directrix.
///
/// @author Elliot Grafil 
/// @date 4/24/18

/// @defgroup EGXMath-Geometry-2D-Ellipse-Directrix Directrix
/// @ingroup EGXMath-Geometry-2D-Ellipse


//=================================
// Header guard
#pragma once
//=================================
// Included dependencies

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXMath
{
	/// @addtogroup EGXMath-Geometry-2D-Ellipse-Directrix
	/// @{

	/**
	*   @brief Finds the directrix, \f$d\f$, in meters of an ellipse with semi-major axis, \f$a\f$, and semi-minor axis \f$b\f$.
	*		\f[ d=\frac{a^2}{\sqrt{a^2-b^2}} \f]
	*
	*	See http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*   @return \f$ d\ (m)\f$ Directrix of the ellipse in meters.
	*	@see EllipseSurfaceArea() for area of an ellipse.
	*	@see EllipseCircumference() for circumference of an ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of an ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of an ellipse.
	*	@see EllipseSemiLatusRectum() for semi-latus rectum of an ellipse.
	*	@see EllipseFocalParameter() for focal parameter of an ellipse.
	*	@see EllipseFocalLength() for focal length of an ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity of an ellipse.
	*	@see EllipseEccentricity() for eccentricity of an ellipse.
	*	@see EllipseInertia() for inertial tensor of an ellipse.
	*/
	template <typename T>
	T EllipseDirectrix(const T semiMajorAxisInm, const T semiMinorAxisInm);

	/**
	*   @brief Finds the directrix, \f$d\f$, in meters of an ellipse with semi-major axis, \f$a\f$, and semi-minor axis \f$b\f$.
	*		\f[ d=\frac{a^2}{\sqrt{a^2-b^2}} \f]
	*
	*	See http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*   @return \f$ d\ (m)\f$ Directrix of the ellipse in meters.
	*	@see EllipseSurfaceArea() for area of an ellipse.
	*	@see EllipseCircumference() for circumference of an ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of an ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of an ellipse.
	*	@see EllipseSemiLatusRectum() for semi-latus rectum of an ellipse.
	*	@see EllipseFocalParameter() for focal parameter of an ellipse.
	*	@see EllipseFocalLength() for focal length of an ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity of an ellipse.
	*	@see EllipseEccentricity() for eccentricity of an ellipse.
	*	@see EllipseInertia() for inertial tensor of an ellipse.
	*/
	template <typename T>
	T EllipseDirectrixFromSemiMajorAndSemiMinorAxes(const T semiMajorAxisInm, const T semiMinorAxisInm);

	/**
	*   @brief Finds the directrix, \f$d\f$, in meters of an ellipse with semi-major axis, \f$a\f$, and linear eccentricity \f$c\f$.
	*		\f[ d=\frac{a^2}{c} \f]
	*
	*	See http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param linearEccentricityInm \f$ c\ (m)\f$ Linear eccentricity of the ellipse in meters.
	*   @return \f$ d\ (m)\f$ Directrix of the ellipse in meters.
	*	@see EllipseSurfaceArea() for area of an ellipse.
	*	@see EllipseCircumference() for circumference of an ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of an ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of an ellipse.
	*	@see EllipseSemiLatusRectum() for semi-latus rectum of an ellipse.
	*	@see EllipseFocalParameter() for focal parameter of an ellipse.
	*	@see EllipseFocalLength() for focal length of an ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity of an ellipse.
	*	@see EllipseEccentricity() for eccentricity of an ellipse.
	*	@see EllipseInertia() for inertial tensor of an ellipse.
	*/
	template <typename T>
	T EllipseDirectrixFromLinearEccentricity(const T semiMajorAxisInm, const T linearEccentricityInm);

    /// @}
} //namespace EGXMath

#include "EllipseDirectrix.inl"
