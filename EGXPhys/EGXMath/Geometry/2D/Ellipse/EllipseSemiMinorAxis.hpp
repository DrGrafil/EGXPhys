/// @file EGXMath/Geometry/2D/Ellipse/EllipseSemiMinorAxis.hpp
///
/// @brief Defines functions relating to ellipse semi-minor axis.
///
/// @author Elliot Grafil (Metex)
/// @date 4/25/18

/// @defgroup EGXMath-Geometry-2D-Ellipse-SemiMinorAxis Semi-Minor Axis
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
	/// @addtogroup EGXMath-Geometry-2D-Ellipse-SemiMinorAxis
	/// @{

	/**
	*   @brief Finds the semi-minor axis, \f$b$, in meters of an ellipse with semi-major axis \f$a\f$, and eccentricity \f$e\f$.
	*		\f[ b=a \sqrt{1-e^2} \f]
	*
	*	The semi-minor axis of an ellipse is a line segment that is at right angles with the semi-major axis.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param eccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the ellipse.
	*   @return \f$ b\ (m)\f$ Semi-minor axis of circle in meters.
	*	@see EllipseSurfaceArea() for area of an ellipse.
	*	@see EllipseCircumference() for circumference of an ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of an ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of an ellipse.
	*	@see EllipseSemiLatusRectum() for semi-latus rectum of an ellipse.
	*	@see EllipseDirectrix() for directrix of an ellipse.
	*	@see EllipseFocalParameter() for focal parameter of an ellipse.
	*	@see EllipseFocalLength() for focal length of an ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity of an ellipse.
	*	@see EllipseEccentricity() for eccentricity of an ellipse.
	*	@see EllipseInertia() for inertial tensor of an ellipse.
	*/
	template <typename T>
	T EllipseSemiMinorAxis(const T semiMajorAxisInm, const T eccentricity);

	/**
	*   @brief Finds the semi-minor axis, \f$b$, in meters of an ellipse with semi-major axis \f$a\f$, and eccentricity \f$e\f$.
	*		\f[ b=a \sqrt{1-e^2} \f]
	*
	*	The semi-minor axis of an ellipse is a line segment that is at right angles with the semi-major axis.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param eccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the ellipse.
	*   @return \f$ b\ (m)\f$ Semi-minor axis of circle in meters.
	*	@see EllipseSurfaceArea() for area of an ellipse.
	*	@see EllipseCircumference() for circumference of an ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of an ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of an ellipse.
	*	@see EllipseSemiLatusRectum() for semi-latus rectum of an ellipse.
	*	@see EllipseDirectrix() for directrix of an ellipse.
	*	@see EllipseFocalParameter() for focal parameter of an ellipse.
	*	@see EllipseFocalLength() for focal length of an ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity of an ellipse.
	*	@see EllipseEccentricity() for eccentricity of an ellipse.
	*	@see EllipseInertia() for inertial tensor of an ellipse.
	*/
	template <typename T>
	T EllipseSemiMinorAxisFromEccentricity(const T semiMajorAxisInm, const T eccentricity);


	/**
	*   @brief Finds the semi-minor axis, \f$b$, in meters of an ellipse with semi-major axis \f$a\f$, and linear eccentricity \f$c\f$.
	*		\f[ b=\sqrt{a^2-c^2} \f]
	*
	*	The semi-minor axis of an ellipse is a line segment that is at right angles with the semi-major axis.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param linearEccentricityInm \f$ c\ (m)\f$ Linear eccentricity of the ellipse in meters.
	*   @return \f$ b\ (m)\f$ Semi-minor axis of circle in meters.
	*	@see EllipseSurfaceArea() for area of an ellipse.
	*	@see EllipseCircumference() for circumference of an ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of an ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of an ellipse.
	*	@see EllipseSemiLatusRectum() for semi-latus rectum of an ellipse.
	*	@see EllipseDirectrix() for directrix of an ellipse.
	*	@see EllipseFocalParameter() for focal parameter of an ellipse.
	*	@see EllipseFocalLength() for focal length of an ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity of an ellipse.
	*	@see EllipseEccentricity() for eccentricity of an ellipse.
	*	@see EllipseInertia() for inertial tensor of an ellipse.
	*/
	template <typename T>
	T EllipseSemiMinorAxisFromLinearEccentricity(const T semiMajorAxisInm, const T linearEccentricityInm);

	/**
	*   @brief Finds the semi-minor axis, \f$b$, in meters of an ellipse with semi-major axis \f$a\f$, and semi-latus rectum \f$\ell\f$.
	*		\f[ b= \sqrt{a\ell} \f]
	*
	*	The semi-minor axis of an ellipse is a line segment that is at right angles with the semi-major axis.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiLatusRectumInm \f$ \ell\ (m)\f$ Semi-latus rectum of the ellipse in meters.
	*   @return \f$ b\ (m)\f$ Semi-minor axis of circle in meters.
	*	@see EllipseSurfaceArea() for area of an ellipse.
	*	@see EllipseCircumference() for circumference of an ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of an ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of an ellipse.
	*	@see EllipseSemiLatusRectum() for semi-latus rectum of an ellipse.
	*	@see EllipseDirectrix() for directrix of an ellipse.
	*	@see EllipseFocalParameter() for focal parameter of an ellipse.
	*	@see EllipseFocalLength() for focal length of an ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity of an ellipse.
	*	@see EllipseEccentricity() for eccentricity of an ellipse.
	*	@see EllipseInertia() for inertial tensor of an ellipse.
	*/
	template <typename T>
	T EllipseSemiMinorAxisFromSemiLatusRectum(const T semiMajorAxisInm, const T semiLatusRectumInm);
    /// @}
} //namespace EGXMath

#include "EllipseSemiMinorAxis.inl"
