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
	*   @brief Finds the surface area, \f$A_{ellipse}\f$, in meter squared of an ellipse with semi-major axis \f$a\f$, and semi-minor axis \f$b\f$.
	*		\f[ A_{ellipse}=\pi a b \f]
	*
	*	See http://mathworld.wolfram.com/FocalParameter.html and https://en.wikipedia.org/wiki/Conic_section#Conic_parameters
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*   @return \f$ A_{ellipse}\ (m^2)\f$ Surface area of circle in meter squared.
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
	T EllipseFocalParameter(const T semiMajorAxisInm, const T semiMinorAxisInm);

	template <typename T>
	T EllipseFocalParameterFromSemiMajorAndSemiMinorAxes(const T semiMajorAxisInm, const T semiMinorAxisInm);

	template <typename T>
	T EllipseFocalParameterFromLinearEccentricity(const T semiMajorAxisInm, const T linearEccentricity);

	template <typename T>
	T EllipseFocalParameterFromEccentricity(const T semiMajorAxisInm, const T eccentricity);
    /// @}
} //namespace EGXMath

#include "EllipseFocalParameter.inl"
