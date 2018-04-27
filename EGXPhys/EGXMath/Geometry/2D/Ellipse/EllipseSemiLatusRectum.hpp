/// @file EGXMath/Geometry/2D/Ellipse/EllipseSemiLatusRectum.hpp
///
/// @brief Defines functions relating to ellipse semi-latus rectum.
///
/// @author Elliot Grafil (Metex)
/// @date 4/25/18

/// @defgroup EGXMath-Geometry-2D-Ellipse-SemiLatusRectum Semi-Latus Rectum
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
	/// @addtogroup EGXMath-Geometry-2D-Ellipse-SemiLatusRectum
	/// @{

	/**
	*   @brief Finds the semi-latus rectum, \f$\ell\f$, in meters of an ellipse with semi-major axis \f$a\f$, and eccentricity \f$e\f$.
	*		\f[ \ell=a(1-e^2) \f]
	*
	*	The latus rectum of an elipse is the chord parallel to the directrix and passing through one of the foci. The semi-latus rectum is one half the length of said chord.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html and https://en.wikipedia.org/wiki/Conic_section#Conic_parameters
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param eccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the ellipse.
	*   @return \f$ \ell\ (m)\f$ Semi-latus rectum of the ellipse in meters.
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
	T EllipseSemiLatusRectum(const T semiMajorAxisInm, const T eccentricity);

	/**
	*   @brief Finds the semi-latus rectum, \f$\ell\f$, in meters of an ellipse with semi-major axis \f$a\f$, and eccentricity \f$e\f$.
	*		\f[ \ell=a(1-e^2) \f]
	*
	*	The latus rectum of an elipse is the chord parallel to the directrix and passing through one of the foci. The semi-latus rectum is one half the length of said chord.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html and https://en.wikipedia.org/wiki/Conic_section#Conic_parameters
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
	T EllipseSemiLatusRectumFromEccentricity(const T semiMajorAxisInm, const T eccentricity);


	/**
	*   @brief Finds the semi-major axis, \f$a\f$, in meters of an ellipse with semi-minor axis \f$b\f$, and linear eccentricity \f$c\f$.
	*		\f[ a=\sqrt{b^2+c^2} \f]
	*
	*	The latus rectum of an elipse is the chord parallel to the directrix and passing through one of the foci. The semi-latus rectum is one half the length of said chord.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html and https://en.wikipedia.org/wiki/Conic_section#Conic_parameters
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
	T EllipseSemiLatusRectumFromLinearEccentricity(const T semiMinorAxisInm, const T linearEccentricityInm);

	/**
	*   @brief Finds the semi-major axis, \f$a\f$, in meters of an ellipse with semi-minor axis \f$b\f$, and semi-latus rectum \f$\ell\f$.
	*		\f[ \ell= \frac{b^2}{a} \f]
	*
	*	The latus rectum of an elipse is the chord parallel to the directrix and passing through one of the foci. The semi-latus rectum is one half the length of said chord.
	*
	*	See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes , http://mathworld.wolfram.com/Ellipse.html and https://en.wikipedia.org/wiki/Conic_section#Conic_parameters
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
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
	T EllipseSemiLatusRectumFromSemiMajorAndSemiMinorAxes(const T semiMajorAxisInm, const T semiMinorAxisInm);

    /// @}
} //namespace EGXMath

#include "EllipseSemiLatusRectum.inl"
