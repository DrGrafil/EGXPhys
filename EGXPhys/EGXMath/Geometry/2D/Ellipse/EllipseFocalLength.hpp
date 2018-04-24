/// @file EGXMath/Geometry/2D/Ellipse/EllipseSurfaceArea.hpp
///
/// @brief Defines functions relating to ellipse surface area.
/// Focal length is 2c/2linear eccentricity https://www.vitutor.com/geometry/conics/ellipse.html
/// @author Elliot Grafil (Metex)
/// @date 4/23/18

/// @defgroup EGXMath-Geometry-2D-Ellipse-SurfaceArea Surface Area
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
	/// @addtogroup EGXMath-Geometry-2D-Ellipse-SurfaceArea
	/// @{

	/**
	*   @brief Finds the surface area, \f$A_{ellipse}\f$, in meter squared of an ellipse with semi-major axis \f$a\f$, and semi-minor axis \f$b\f$.
	*		\f[ A_{ellipse}=\pi a b \f]
	*
	*	See http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*   @return \f$ A_{ellipse}\ (m^2)\f$ Surface area of circle in meter squared.
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
	T EllipseSurfaceArea(const T semiMajorAxisInm, const T semiMinorAxisInm);

    /// @}
} //namespace EGXMath

#include "EllipseSurfaceArea.inl"
