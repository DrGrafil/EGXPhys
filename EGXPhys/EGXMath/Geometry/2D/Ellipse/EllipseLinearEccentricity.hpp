/// @file EGXMath/Geometry/2D/Ellipse/EllipseLinearEccentricity.hpp
///
/// @brief Defines functions relating to ellipse linear eccentricity.
///
/// @author Elliot Grafil (Metex)
/// @date 4/24/18

/// @defgroup EGXMath-Geometry-2D-Ellipse-LinearEccentricity Linear Eccentricity
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
	/// @addtogroup EGXMath-Geometry-2D-Ellipse-LinearEccentricity
	/// @{

	/**
	*   @brief Finds the linear eccentricity, \f$c\f$, in meters of an ellipse with semi-major axis \f$a\f$, and semi-minor axis \f$b\f$.
	*		\f[ c=\sqrt{a^2-b^2} \f]
	*
	*	See http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*   @return \f$ c\ (m)\f$ Linear eccentricity of the ellipse in meters.
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
	T EllipseLinearEccentricity(const T semiMajorAxisInm, const T semiMinorAxisInm);

	/**
	*   @brief Finds the linear eccentricity, \f$c\f$, in meters of an ellipse with semi-major axis \f$a\f$, and semi-minor axis \f$b\f$.
	*		\f[ c=\sqrt{a^2-b^2} \f]
	*
	*	See http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*   @return \f$ c\ (m)\f$ Linear eccentricity of the ellipse in meters.
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
	T EllipseLinearEccentricityFromSemiMajorAndSemiMinorAxes(const T semiMajorAxisInm, const T semiMinorAxisInm);

	/**
	*   @brief Finds the linear eccentricity, \f$c\f$, in meters of an ellipse with semi-major axis \f$a\f$, and eccentricity \f$e\f$.
	*		\f[ c=a e \f]
	*
	*	See http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param eccentricity \f$ e\ ()\f$ Eccentricity of the ellipse in meters.
	*   @return \f$ c\ (m)\f$ Linear eccentricity of the ellipse in meters.
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
	T EllipseLinearEccentricityFromEccentricity(const T semiMajorAxisInm, const T eccentricity);

    /// @}
} //namespace EGXMath

#include "EllipseLinearEccentricity.inl"
