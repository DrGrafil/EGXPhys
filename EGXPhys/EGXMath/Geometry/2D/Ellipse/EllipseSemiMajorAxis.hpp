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
	*   @brief Finds the semi-major axis, \f$a\f$, in meters of an ellipse with semi-minor axis \f$b\f$, and eccentricity \f$e\f$.
	*		\f[ a=\frac{b}{\sqrt{1-e^2}} \f]
	*
	*	The semi-major axis of an ellipse is a line segment that starts at the center of the ellipse going the farthest point on the curve.
	*	It is half the length of the major axis and is at right angles with the semi-minor axis. It runs through one of the ellipses foci.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*	@param eccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the ellipse.
	*   @return \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
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
	*   @brief Finds the semi-major axis, \f$a\f$, in meters of an ellipse with semi-minor axis \f$b\f$, and linear eccentricity \f$c\f$.
	*		\f[ a=\sqrt{b^2+c^2} \f]
	*
	*	The semi-major axis of an ellipse is a line segment that starts at the center of the ellipse going the farthest point on the curve.
	*	It is half the length of the major axis and is at right angles with the semi-minor axis. It runs through one of the ellipses foci.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*	@param linearEccentricityInm \f$ c\ (m)\f$ Linear eccentricity of the ellipse in meters.
	*   @return \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
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
	T EllipseSemiMajorAxisFromSemiMinorAxisAndLinearEccentricity(const T semiMinorAxisInm, const T linearEccentricityInm);

	/**
	*	@brief Finds the semi-major axis, \f$a\f$, in meters of an ellipse with semi-minor axis \f$b\f$, and eccentricity \f$e\f$.
	*		\f[ a=\frac{b}{\sqrt{1-e^2}} \f]
	*
	*	The semi-major axis of an ellipse is a line segment that starts at the center of the ellipse going the farthest point on the curve.
	*	It is half the length of the major axis and is at right angles with the semi-minor axis. It runs through one of the ellipses foci.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*	@param eccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the ellipse.
	*   @return \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
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
	T EllipseSemiMajorAxisFromSemiMinorAxisAndEccentricity(const T semiMinorAxisInm, const T eccentricity);


	/**
	*   @brief Finds the semi-major axis, \f$a\f$, in meters of an ellipse with semi-minor axis \f$b\f$, and semi-latus rectum \f$\ell\f$.
	*		\f[ a= \frac{b^2}{\ell} \f]
	*
	*	The semi-major axis of an ellipse is a line segment that starts at the center of the ellipse going the farthest point on the curve.
	*	It is half the length of the major axis and is at right angles with the semi-minor axis. It runs through one of the ellipses foci.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
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
	T EllipseSemiMajorAxisFromSemiMinorAxisAndSemiLatusRectum(const T semiMinorAxisInm, const T semiLatusRectumInm);

	/**
	*   @brief Finds the semi-major axis, \f$a\f$, in meters of an ellipse with semi-minor axis \f$b\f$, and focal parameter \f$p\f$.
	*		\f[ a=b\sqrt{1+\dfrac{b^2}{p^2}} \f]
	*
	*	The semi-major axis of an ellipse is a line segment that starts at the center of the ellipse going the farthest point on the curve.
	*	It is half the length of the major axis and is at right angles with the semi-minor axis. It runs through one of the ellipses foci.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*	@param focalParameterInm\f$ p\ (m)\f$ Focal parameter of the ellipse in meters.
	*   @return \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
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
	T EllipseSemiMajorAxisFromSemiMinorAxisAndFocalParameter(const T semiMinorAxisInm, const T focalParameterInm);

	/**
	*   @brief Finds the semi-major axis, \f$a\f$, in meters of an ellipse with linear eccentricity \f$c\f$, and eccentricity \f$e\f$.
	*		\f[ a=\dfrac{c}{e} \f]
	*
	*	The semi-major axis of an ellipse is a line segment that starts at the center of the ellipse going the farthest point on the curve.
	*	It is half the length of the major axis and is at right angles with the semi-minor axis. It runs through one of the ellipses foci.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param linearEccentricityInm \f$ c\ (m)\f$ Linear eccentricity of the ellipse in meters.
	*	@param eccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the ellipse.
	*   @return \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
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
	T EllipseSemiMajorAxisFromLinearEccentricityAndEccentricity(const T linearEccentricityInm, const T eccentricity);

	/**
	*   @brief Finds the semi-major axis, \f$a\f$, in meters of an ellipse with linear eccentricity \f$c\f$, and semi-latus rectum \f$\ell\f$.
	*		\f[ a=\dfrac{\ell+\sqrt{4c^2+\ell^2}}{2} \f]
	*
	*	The semi-major axis of an ellipse is a line segment that starts at the center of the ellipse going the farthest point on the curve.
	*	It is half the length of the major axis and is at right angles with the semi-minor axis. It runs through one of the ellipses foci.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param linearEccentricityInm \f$ c\ (m)\f$ Linear eccentricity of the ellipse in meters.
	*	@param semiLatusRectumInm \f$ \ell\ (m)\f$ Semi-latus rectum of the ellipse in meters.
	*   @return \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
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
	T EllipseSemiMajorAxisFromLinearEccentricityAndSemiLatusRectum(const T linearEccentricityInm, const T semiLatusRectumInm);

	/**
	*   @brief Finds the semi-major axis, \f$a\f$, in meters of an ellipse with linear eccentricity \f$c\f$, and focal parameter \f$p\f$.
	*		\f[ a=\sqrt{cp + c^2} \f]
	*
	*	The semi-major axis of an ellipse is a line segment that starts at the center of the ellipse going the farthest point on the curve.
	*	It is half the length of the major axis and is at right angles with the semi-minor axis. It runs through one of the ellipses foci.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param linearEccentricityInm \f$ c\ (m)\f$ Linear eccentricity of the ellipse in meters.
	*	@param focalParameterInm\f$ p\ (m)\f$ Focal parameter of the ellipse in meters.
	*   @return \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
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
	T EllipseSemiMajorAxisFromLinearEccentricityAndFocalParameter(const T linearEccentricityInm, const T focalParameterInm);

	/**
	*   @brief Finds the semi-major axis, \f$a\f$, in meters of an ellipse with eccentricity \f$e\f$, and semi-latus rectum \f$\ell\f$.
	*		\f[ a=\dfrac{\ell}{1 - e^2} \f]
	*
	*	The semi-major axis of an ellipse is a line segment that starts at the center of the ellipse going the farthest point on the curve.
	*	It is half the length of the major axis and is at right angles with the semi-minor axis. It runs through one of the ellipses foci.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param eccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the ellipse.
	*	@param semiLatusRectumInm \f$ \ell\ (m)\f$ Semi-latus rectum of the ellipse in meters.
	*   @return \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
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
	T EllipseSemiMajorAxisFromEccentricityAndSemiLatusRectum(const T eccentricity, const T semiLatusRectumInm);

	/**
	*   @brief Finds the semi-major axis, \f$a\f$, in meters of an ellipse with eccentricity \f$e\f$, and focal parameter \f$p\f$.
	*		\f[ a=\dfrac{ep}{1-e^2} \f]
	*
	*	The semi-major axis of an ellipse is a line segment that starts at the center of the ellipse going the farthest point on the curve.
	*	It is half the length of the major axis and is at right angles with the semi-minor axis. It runs through one of the ellipses foci.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param eccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the ellipse.
	*	@param focalParameterInm\f$ p\ (m)\f$ Focal parameter of the ellipse in meters.
	*   @return \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
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
	T EllipseSemiMajorAxisFromEccentricityAndFocalParameter(const T eccentricity, const T focalParameterInm);

	/**
	*   @brief Finds the semi-major axis, \f$a\f$, in meters of an ellipse with semi-latus rectum \f$\ell\f$, and focal parameter \f$p\f$.
	*		\f[ a=\dfrac{\ell}{1-\dfrac{\ell^2}{p^2}} \f]
	*
	*	The semi-major axis of an ellipse is a line segment that starts at the center of the ellipse going the farthest point on the curve.
	*	It is half the length of the major axis and is at right angles with the semi-minor axis. It runs through one of the ellipses foci.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiLatusRectumInm \f$ \ell\ (m)\f$ Semi-latus rectum of the ellipse in meters.
	*	@param focalParameterInm\f$ p\ (m)\f$ Focal parameter of the ellipse in meters.
	*   @return \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
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
	T EllipseSemiMajorAxisFromSemiLatusRectumAndFocalParameter(const T semiLatusRectumInm, const T focalParameterInm);
    /// @}
} //namespace EGXMath

#include "EllipseSemiMajorAxis.inl"
