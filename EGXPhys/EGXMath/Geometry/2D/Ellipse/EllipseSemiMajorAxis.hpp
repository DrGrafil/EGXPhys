/// @file EGXMath/Geometry/2D/Ellipse/EllipseSemiMajorAxis.hpp
///
/// @brief Defines functions relating to ellipse semi-major axis.
///
/// @author Elliot Grafil (Metex)
/// @date 4/25/18

/// @defgroup EGXMath-Geometry-2D-Ellipse-SemiMajorAxis Semi-Major Axis
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
	/// @addtogroup EGXMath-Geometry-2D-Ellipse-SemiMajorAxis
	/// @{

	/**
	*   @brief Finds the semi-major axis, \f$a$, in meters of an ellipse with semi-minor axis \f$b\f$, and eccentricity \f$e\f$.
	*		\f[ a=\frac{b}{\sqrt{1-e^2}} \f]
	*
	*	The semi-minor axis of an ellipse is half of the major axis that runs from the centre of the ellipse, through both foci to the perimeter.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of ellipse in meters.
	*	@param eccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the ellipse.
	*   @return \f$ b\ (m)\f$ Semi-minor axis of ellipse in meters.
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
	T EllipseSemiMajorAxis(const T semiMinorAxisInm, const T eccentricity);

	/**
	*	@brief Finds the semi-major axis, \f$a$, in meters of an ellipse with semi-minor axis \f$b\f$, and eccentricity \f$e\f$.
	*		\f[ a=\frac{b}{\sqrt{1-e^2}} \f]
	*
	*	The semi-minor axis of an ellipse is half of the major axis that runs from the centre of the ellipse, through both foci to the perimeter.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of ellipse in meters.
	*	@param eccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the ellipse.
	*   @return \f$ b\ (m)\f$ Semi-minor axis of ellipse in meters.
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
	T EllipseSemiMajorAxisFromEccentricity(const T semiMinorAxisInm, const T eccentricity);


	/**
	*   @brief Finds the semi-major axis, \f$a$, in meters of an ellipse with semi-minor axis \f$b\f$, and linear eccentricity \f$c\f$.
	*		\f[ a=\sqrt{b^2+c^2} \f]
	*
	*	The semi-minor axis of an ellipse is half of the major axis that runs from the centre of the ellipse, through both foci to the perimeter.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of ellipse in meters.
	*	@param linearEccentricityInm \f$ c\ (m)\f$ Linear eccentricity of the ellipse in meters.
	*   @return \f$ b\ (m)\f$ Semi-minor axis of ellipse in meters.
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
	T EllipseSemiMajorAxisFromLinearEccentricity(const T semiMinorAxisInm, const T linearEccentricityInm);

	/**
	*   @brief Finds the semi-major axis, \f$a$, in meters of an ellipse with semi-minor axis \f$b\f$, and semi-latus rectum \f$\ell\f$.
	*		\f[ a= \frac{b^2}{\ell} \f]
	*
	*	The semi-minor axis of an ellipse is half of the major axis that runs from the centre of the ellipse, through both foci to the perimeter.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of ellipse in meters.
	*	@param semiLatusRectumInm \f$ \ell\ (m)\f$ Semi-latus rectum of the ellipse in meters.
	*   @return \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
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
	T EllipseSemiMajorAxisFromSemiLatusRectum(const T semiMinorAxisInm, const T semiLatusRectumInm);

    /// @}
} //namespace EGXMath

#include "EllipseSemiMajorAxis.inl"
