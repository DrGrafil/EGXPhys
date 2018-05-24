/// @file EGXMath/Geometry/3D/Ellipsoid/EllipsoidInertia.hpp
///
/// @brief Defines functions relating to inertia of an ellipsoid.
///
/// @author Elliot Grafil (Metex)
/// @date 5/23/18

/// @defgroup EGXMath-Geometry-3D-Ellipsoid-Inertia Inertia
/// @ingroup EGXMath-Geometry-3D-Ellipsoid


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
	/// @addtogroup EGXMath-Geometry-3D-Ellipsoid-Inertia
	/// @{

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{ellipsoid}\f$ of an ellipsoid with three distinct semi-principle axes, \f$a\f$, \f$b\f$ and \f$c\f$. It is assumed that \f$a\f$ lays on the x-axis, \f$b\f$ on the y-axis and \f$c\f$ on the z-axis.
	*		\f[ I_{ellipsoid}=\begin{bmatrix}
			\frac{1}{2}m\ b^2c^2 & 0 & 0\\ 
			0 & \frac{1}{2}m\ a^2c^2 & 0\\ 
			0 & 0 & m\ a^2b^2
			\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaEllipsoid.html
	*	@param mass \f$ m\ (kg)\f$ Mass of the ellipsoid.
	*	@param aSemiPrincipleAxisInm \f$ a\ (m)\f$ Semi-principle axis of the ellipsoid that lays along the x-axis in meters.
    *	@param bSemiPrincipleAxisInm \f$ b\ (m)\f$ Semi-principle axis of the ellipsoid that lays along the y-axis in meters.
    *	@param cSemiPrincipleAxisInm \f$ c\ (m)\f$ Semi-principle axis of the ellipsoid that lays along the z-axis in meters.
	*	@param matrix \f$ I_{ellipsoid}\ (kg\ m^2)\f$ Moment of inertia tensor matrix of the ellipsoid.
	*	@see EllipsoidSurfaceArea() for surface area of an ellipsoid.
	*	@see EllipsoidVolume() for volume of an ellipsoid.
	*	@see SphereInertia() for inertial tensor of a sphere.
	*	@see SpheroidInertia() for inertial tensor of a spheroid.
	*/
	template <typename T, typename T2>
	void EllipsoidInertia(const T mass, const T aSemiPrincipleAxisInm, const T bSemiPrincipleAxisInm, const T cSemiPrincipleAxisInm, T2 (&matrix)[9]);

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{ellipsoid}\f$ of an ellipsoid with three distinct semi-principle axes, \f$a\f$, \f$b\f$ and \f$c\f$. It is assumed that \f$a\f$ lays on the x-axis, \f$b\f$ on the y-axis and \f$c\f$ on the z-axis.
	*		\f[ I_{ellipsoid}=\begin{bmatrix}
			\frac{1}{2}m\ b^2c^2 & 0 & 0\\ 
			0 & \frac{1}{2}m\ a^2c^2 & 0\\ 
			0 & 0 & m\ a^2b^2
			\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaEllipsoid.html
	*	@param mass \f$ m\ (kg)\f$ Mass of the ellipsoid.
	*	@param aSemiPrincipleAxisInm \f$ a\ (m)\f$ Semi-principle axis of the ellipsoid that lays along the x-axis in meters.
    *	@param bSemiPrincipleAxisInm \f$ b\ (m)\f$ Semi-principle axis of the ellipsoid that lays along the y-axis in meters.
    *	@param cSemiPrincipleAxisInm \f$ c\ (m)\f$ Semi-principle axis of the ellipsoid that lays along the z-axis in meters.
	*	@param matrix \f$ I_{ellipsoid}\ (kg\ m^2)\f$ Moment of inertia tensor matrix of the ellipsoid.
    *	@see EllipsoidSurfaceArea() for surface area of an ellipsoid.
    *	@see EllipsoidVolume() for volume of an ellipsoid.
    *	@see SphereInertia() for inertial tensor of a sphere.
    *	@see SpheroidInertia() for inertial tensor of a spheroid.
	*/
	template <typename T, typename T2>
	void EllipsoidInertia(const T mass, const T aSemiPrincipleAxisInm, const T bSemiPrincipleAxisInm, const T cSemiPrincipleAxisInm, std::vector<T2>& matrix);

#ifdef EGXMATH_GLM

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{ellipsoid}\f$ of an ellipsoid with three distinct semi-principle axes, \f$a\f$, \f$b\f$ and \f$c\f$. It is assumed that \f$a\f$ lays on the x-axis, \f$b\f$ on the y-axis and \f$c\f$ on the z-axis.
	*		\f[ I_{ellipsoid}=\begin{bmatrix}
			\frac{1}{2}m\ b^2c^2 & 0 & 0\\ 
			0 & \frac{1}{2}m\ a^2c^2 & 0\\ 
			0 & 0 & m\ a^2b^2
			\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaEllipsoid.html
	*	@param mass \f$ m\ (kg)\f$ Mass of the ellipsoid.
	*	@param aSemiPrincipleAxisInm \f$ a\ (m)\f$ Semi-principle axis of the ellipsoid that lays along the x-axis in meters.
    *	@param bSemiPrincipleAxisInm \f$ b\ (m)\f$ Semi-principle axis of the ellipsoid that lays along the y-axis in meters.
    *	@param cSemiPrincipleAxisInm \f$ c\ (m)\f$ Semi-principle axis of the ellipsoid that lays along the z-axis in meters.
	*	@param matrix \f$ I_{ellipsoid}\ (kg\ m^2)\f$ Moment of inertia tensor matrix of the ellipsoid.
	*	@see EllipsoidSurfaceArea() for surface area of an ellipsoid.
	*	@see EllipsoidVolume() for volume of an ellipsoid.
	*	@see SphereInertia() for inertial tensor of a sphere.
	*	@see SpheroidInertia() for inertial tensor of a spheroid.
	*/
	template <typename T>
	void EllipsoidInertia(const T mass, const T aSemiPrincipleAxisInm, const T bSemiPrincipleAxisInm, const T cSemiPrincipleAxisInm, glm::mat3& matrix);

#endif // EGXMATH_GLM


    /// @}
} //namespace EGXMath

#include "EllipsoidInertia.inl"
