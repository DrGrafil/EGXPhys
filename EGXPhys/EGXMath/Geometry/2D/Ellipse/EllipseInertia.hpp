/// @file EGXMath/Geometry/2D/Ellipse/EllipseInertia.hpp
///
/// @brief Defines functions relating to ellipse inertia.
///
/// @author Elliot Grafil 
/// @date 4/23/18

/// @defgroup EGXMath-Geometry-2D-Ellipse-Inertia Inertia
/// @ingroup EGXMath-Geometry-2D-Ellipse


//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <vector>
#include <algorithm>
//=================================
// Forward declared dependencies
#ifdef EGXMATH_GLM
#include <glm/fwd.hpp>
#endif // EGXPHYS_GLM
//=================================
//


namespace EGXMath
{
	/// @addtogroup EGXMath-Geometry-2D-Ellipse-Inertia
	/// @{

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{ellipse}\f$ of an ellipse with semi-major axis \f$a\f$, and semi-minor axis \f$b\f$ that is infinitly thin. It is assumed that the semi-major axis lays on the x axis while semi-minor axis is on the y axis. 
	*		\f[ I_{ellipse}=\begin{bmatrix}
	??? & 0 & 0\\
	0 & ??? & 0\\
	0 & 0 & ???
	\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaHoop.html
	*	@param massInkg \f$ m\ (kg)\f$ Mass of the ellipse in kilograms.
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*	@param matrix \f$ I_{ellipse}\ (kg\ m^2)\f$ Moment of inertia tensor matrix.
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
	template <typename T, typename T2>
	void EllipseInertia(const T massInkg, const T semiMajorAxisInm, const T semiMinorAxisInm, T2(&matrix)[9]);

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{ellipse}\f$ of an ellipse with semi-major axis \f$a\f$, and semi-minor axis \f$b\f$ that is infinitly thin. It is assumed that the semi-major axis lays on the x axis while semi-minor axis is on the y axis. 
	*		\f[ I_{ellipse}=\begin{bmatrix}
	??? & 0 & 0\\
	0 & ??? & 0\\
	0 & 0 & ???
	\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaHoop.html
	*	@param massInkg \f$ m\ (kg)\f$ Mass of the ellipse in kilograms.
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*	@param matrix \f$ I_{ellipse}\ (kg\ m^2)\f$ Moment of inertia tensor matrix.
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
	template <typename T, typename T2>
	void EllipseInertia(const T massInkg, const T semiMajorAxisInm, const T semiMinorAxisInm, std::vector<T2>& matrix);

#ifdef EGXMATH_GLM

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{ellipse}\f$ of an ellipse with semi-major axis \f$a\f$, and semi-minor axis \f$b\f$ that is infinitly thin. It is assumed that the semi-major axis lays on the x axis while semi-minor axis is on the y axis. 
	*		\f[ I_{ellipse}=\begin{bmatrix}
	??? & 0 & 0\\
	0 & ??? & 0\\
	0 & 0 & ???
	\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaHoop.html
	*	@param massInkg \f$ m\ (kg)\f$ Mass of the ellipse in kilograms.
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*	@param matrix \f$ I_{ellipse}\ (kg\ m^2)\f$ Moment of inertia tensor matrix.
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
	void EllipseInertia(const T massInkg, const T semiMajorAxisInm, const T semiMinorAxisInm, glm::mat3& matrix);

#endif // EGXMATH_GLM
    /// @}
} //namespace EGXMath

#include "EllipseInertia.inl"
