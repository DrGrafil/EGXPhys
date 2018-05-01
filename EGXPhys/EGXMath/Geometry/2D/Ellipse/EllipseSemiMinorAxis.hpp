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
	*   @brief Finds the semi-minor axis, \f$b\f$, in meters of an ellipse with semi-major axis \f$a\f$, and eccentricity \f$e\f$.
	*		\f[ b=a \sqrt{1-e^2} \f]
	*
	*	The semi-minor axis of an ellipse is a line segment that starts at the center of the ellipse going the nearest point on the curve.
	*	It is half the length of the minor axis and is at right angles with the semi-major axis.
	*
	* See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes and http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
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
	T EllipseSemiMinorAxis(const T semiMajorAxisInm, const T eccentricity);

	/**
	*   @brief Finds the semi-minor axis, \f$b\f$, in meters of an ellipse with semi-major axis \f$a\f$, and linear eccentricity \f$c\f$.
	*		\f[ b=\sqrt{a^2-c^2} \f]
	*
	*	The semi-minor axis of an ellipse is a line segment that starts at the center of the ellipse going the nearest point on the curve.
	*	It is half the length of the minor axis and is at right angles with the semi-major axis.
	*
	* See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes and http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
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
	T EllipseSemiMinorAxisFromSemiMajorAxisAndLinearEccentricity(const T semiMajorAxisInm, const T linearEccentricityInm);

	/**
	*   @brief Finds the semi-minor axis, \f$b\f$, in meters of an ellipse with semi-major axis \f$a\f$, and eccentricity \f$e\f$.
	*		\f[ b=a \sqrt{1-e^2} \f]
	*
	*	The semi-minor axis of an ellipse is a line segment that starts at the center of the ellipse going the nearest point on the curve.
	*	It is half the length of the minor axis and is at right angles with the semi-major axis.
	*
	* See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes and http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
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
	T EllipseSemiMinorAxisFromSemiMajorAxisAndEccentricity(const T semiMajorAxisInm, const T eccentricity);

	/**
	*   @brief Finds the semi-minor axis, \f$b\f$, in meters of an ellipse with semi-major axis \f$a\f$, and semi-latus rectum \f$\ell\f$.
	*		\f[ b= \sqrt{a\ell} \f]
	*
	*	The semi-minor axis of an ellipse is a line segment that starts at the center of the ellipse going the nearest point on the curve.
	*	It is half the length of the minor axis and is at right angles with the semi-major axis.
	*
	* See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes and http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
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
	T EllipseSemiMinorAxisFromSemiMajorAxisAndSemiLatusRectum(const T semiMajorAxisInm, const T semiLatusRectumInm);




	/**
	*   @brief Finds the semi-minor axis, \f$b\f$, in meters of an ellipse with semi-major axis \f$a\f$, and focal parameter \f$p\f$.
	*		\f[ b=\sqrt{\dfrac{\sqrt{4 a^2 p^2 + p^4}-p^2}{2}} \f]
	*
	*	The semi-minor axis of an ellipse is a line segment that starts at the center of the ellipse going the nearest point on the curve.
	*	It is half the length of the minor axis and is at right angles with the semi-major axis.
	*
	* See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes and http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
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
	T EllipseSemiMinorAxisFromSemiMajorAxisAndFocalParameter(const T semiMajorAxisInm, const T focalParameterInm);


	/**
	*   @brief Finds the semi-minor axis, \f$b\f$, in meters of an ellipse with linear eccentricity \f$c\f$, and eccentricity \f$e\f$.
	*		\f[ b=\dfrac{c}{e}\sqrt{1 - e^2}\f]
	*
	*	The semi-minor axis of an ellipse is a line segment that starts at the center of the ellipse going the nearest point on the curve.
	*	It is half the length of the minor axis and is at right angles with the semi-major axis.
	*
	* See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes and http://mathworld.wolfram.com/Ellipse.html
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
	T EllipseSemiMinorAxisFromLinearEccentricityAndEccentricity(const T linearEccentricityInm, const T eccentricity);

	/**
	*   @brief Finds the semi-minor axis, \f$b\f$, in meters of an ellipse with linear eccentricity \f$c\f$, and semi-latus rectum \f$\ell\f$.
	*		\f[ b=\sqrt{\dfrac{\sqrt{4 c^2 \ell^2+ \ell^4}+\ell^2}{2}}\f]
	*
	*	The semi-minor axis of an ellipse is a line segment that starts at the center of the ellipse going the nearest point on the curve.
	*	It is half the length of the minor axis and is at right angles with the semi-major axis.
	*
	* See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes and http://mathworld.wolfram.com/Ellipse.html
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
	T EllipseSemiMinorAxisFromLinearEccentricityAndSemiLatusRectum(const T linearEccentricityInm, const T semiLatusRectumInm);

	/**
	*   @brief Finds the semi-minor axis, \f$b\f$, in meters of an ellipse with linear eccentricity \f$c\f$, and focal parameter \f$p\f$.
	*		\f[ b=\sqrt{c p} \f]
	*
	*	The semi-minor axis of an ellipse is a line segment that starts at the center of the ellipse going the nearest point on the curve.
	*	It is half the length of the minor axis and is at right angles with the semi-major axis.
	*
	* See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes and http://mathworld.wolfram.com/Ellipse.html
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
	T EllipseSemiMinorAxisFromLinearEccentricityAndFocalParameter(const T linearEccentricityInm, const T focalParameterInm);



	/**
	*   @brief Finds the semi-minor axis, \f$b\f$, in meters of an ellipse with eccentricity \f$e\f$, and semi-latus rectum \f$\ell\f$.
	*		\f[ b=\dfrac{\ell}{\sqrt{1 - e^2}} \f]
	*
	*	The semi-minor axis of an ellipse is a line segment that starts at the center of the ellipse going the nearest point on the curve.
	*	It is half the length of the minor axis and is at right angles with the semi-major axis.
	*
	* See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes and http://mathworld.wolfram.com/Ellipse.html
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
	T EllipseSemiMinorAxisFromEccentricityAndSemiLatusRectum(const T eccentricity, const T semiLatusRectumInm);

	/**
	*   @brief Finds the semi-minor axis, \f$b\f$, in meters of an ellipse with eccentricity \f$e\f$, and focal parameter \f$p\f$.
	*		\f[ b=\dfrac{ep}{\sqrt{1 - e^2}} \f]
	*
	*	The semi-minor axis of an ellipse is a line segment that starts at the center of the ellipse going the nearest point on the curve.
	*	It is half the length of the minor axis and is at right angles with the semi-major axis.
	*
	* See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes and http://mathworld.wolfram.com/Ellipse.html
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
	T EllipseSemiMinorAxisFromEccentricityAndFocalParameter(const T eccentricity, const T focalParameterInm);


	/**
	*   @brief Finds the semi-minor axis, \f$b\f$, in meters of an ellipse with semi-latus rectum \f$\ell\f$, and focal parameter \f$p\f$.
	*		\f[ b=\dfrac{\ell}{\sqrt{1-\dfrac{\ell^2}{p^2}}} \f]
	*
	*	The semi-minor axis of an ellipse is a line segment that starts at the center of the ellipse going the nearest point on the curve.
	*	It is half the length of the minor axis and is at right angles with the semi-major axis.
	*
	* See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes and http://mathworld.wolfram.com/Ellipse.html
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
	T EllipseSemiMinorAxisFromSemiLatusRectumAndFocalParameter(const T semiLatusRectumInm, const T focalParameterInm);

    /// @}
} //namespace EGXMath

#include "EllipseSemiMinorAxis.inl"
