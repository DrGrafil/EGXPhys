/// @file EGXMath/Geometry/2D/Ellipse/EllipseFocalParameter.hpp
///
/// @brief Defines functions relating to ellipse focal parameter.
///
/// @author Elliot Grafil (Metex)
/// @date 4/23/18

/// @defgroup EGXMath-Geometry-2D-Ellipse-FocalParameter Focal Parameter
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
	/// @addtogroup EGXMath-Geometry-2D-Ellipse-FocalParameter
	/// @{

	/**
	*   @brief Finds the focal parameter, \f$p\f$, in meters of an ellipse with semi-major axis, \f$a\f$, and semi-minor axis \f$b\f$.
	*		\f[ p=\frac{b^2}{\sqrt{a^2-b^2}} \f]
	*
	*	The focal parameter is the distance from the focus (or one of the two foci) to the directrix.
	*
	*	See http://mathworld.wolfram.com/FocalParameter.html and https://en.wikipedia.org/wiki/Conic_section#Conic_parameters
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*   @return \f$ p\ (m)\f$ Focal Parameter of the ellipse in meters.
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
	T EllipseFocalParameter(const T semiMajorAxisInm, const T semiMinorAxisInm);

	/**
	*   @brief Finds the focal parameter, \f$p\f$, in meters of an ellipse with semi-major axis, \f$a\f$, and semi-minor axis \f$b\f$.
	*		\f[ p=\frac{b^2}{\sqrt{a^2-b^2}} \f]
	*
	*	The focal parameter is the distance from the focus (or one of the two foci) to the directrix.
	*
	*	See http://mathworld.wolfram.com/FocalParameter.html and https://en.wikipedia.org/wiki/Conic_section#Conic_parameters
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*   @return \f$ p\ (m)\f$ Focal Parameter of the ellipse in meters.
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
	T EllipseFocalParameterFromSemiMajorAndSemiMinorAxes(const T semiMajorAxisInm, const T semiMinorAxisInm);

	/**
	*   @brief Finds the focal parameter, \f$p\f$, in meters of an ellipse with semi-major axis, \f$a\f$, and linear eccentricity \f$c\f$.
	*		\f[ p=\frac{a^2-c^2}{c} \f]
	*
	*	The focal parameter is the distance from the focus (or one of the two foci) to the directrix.
	*
	*	See http://mathworld.wolfram.com/FocalParameter.html and https://en.wikipedia.org/wiki/Conic_section#Conic_parameters
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param linearEccentricityInm \f$ c\ (m)\f$ Linear eccentricity of the ellipse in meters.
	*   @return \f$ p\ (m)\f$ Focal Parameter of the ellipse in meters.
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
	T EllipseFocalParameterFromLinearEccentricity(const T semiMajorAxisInm, const T linearEccentricityInm);

	/**
	*   @brief Finds the focal parameter, \f$p\f$, in meters of an ellipse with semi-major axis, \f$a\f$, and eccentricity \f$e\f$.
	*		\f[ p=\frac{a(1-e^2)}{e} \f]
	*
	*	The focal parameter is the distance from the focus (or one of the two foci) to the directrix.
	*
	*	See http://mathworld.wolfram.com/FocalParameter.html and https://en.wikipedia.org/wiki/Conic_section#Conic_parameters
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param eccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the ellipse.
	*   @return \f$ p\ (m)\f$ Focal Parameter of the ellipse in meters.
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
	T EllipseFocalParameterFromEccentricity(const T semiMajorAxisInm, const T eccentricity);

	/**
	*   @brief Finds the focal parameter, \f$p\f$, in meters of an ellipse with semi-Latus rectum, \f$\ell\f$, and eccentricity \f$e\f$.
	*		\f[ p=\frac{\ell}{e} \f]
	*
	*	The focal parameter is the distance from the focus (or one of the two foci) to the directrix.
	*
	*	See http://mathworld.wolfram.com/FocalParameter.html and https://en.wikipedia.org/wiki/Conic_section#Conic_parameters
	*
	*	@param semiLatusRectumInm \f$ \ell\ (m)\f$ Semi-latus rectum of the ellipse in meters.
	*	@param eccentricity \f$ e\ (dimensionless)\f$ Eccentricity of the ellipse.
	*   @return \f$ p\ (m)\f$ Focal Parameter of the ellipse in meters.
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
	T EllipseFocalParameterFromSemiLatusRectum(const T semiLatusRectumInm, const T eccentricity);

	
    /// @}
} //namespace EGXMath

#include "EllipseFocalParameter.inl"
