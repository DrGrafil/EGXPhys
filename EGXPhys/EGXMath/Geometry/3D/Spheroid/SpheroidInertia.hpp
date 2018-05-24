/// @file EGXMath/Geometry/3D/Spheroid/SpheroidInertia.hpp
///
/// @brief Defines functions relating to inertia of an ellipsoid.
///
/// @author Elliot Grafil (Metex)
/// @date 5/24/18

/// @defgroup EGXMath-Geometry-3D-Spheroid-Inertia Inertia
/// @ingroup EGXMath-Geometry-3D-Spheroid


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
	/// @addtogroup EGXMath-Geometry-3D-Spheroid-Inertia
	/// @{

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{spheroid}\f$ of a spheroid with equatorial radius \f$a\f$ and polar radius, \f$c\f$. It is assumed that \f$a\f$ lays on the xy-plane, and \f$c\f$ on the z-axis.
	*		\f[ I_{spheroid}=\begin{bmatrix}
			\frac{1}{5}m\ a^2c^2 & 0 & 0\\ 
			0 & \frac{1}{5}m\ a^2c^2 & 0\\ 
			0 & 0 & \frac{2}{5}m\ a^2
			\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaEllipsoid.html
	*	@param mass \f$ m\ (kg)\f$ Mass of the ellipsoid.
	*	@param equatorialRadiusInm \f$ a\ (m)\f$ Equatorial radius in meters. The degenerate semi-principle axis of the spheroid.
    *	@param polarRadiusInm \f$ c\ (m)\f$ Polar radius in meters. The unique semi-principle axis of the spheroid.
	*	@param matrix \f$ I_{spheroid}\ (kg\ m^2)\f$ Moment of inertia tensor matrix of the spheroid.
    *	@see SpheroidEccentricity() for eccentricity of a spheroid.
    *	@see SpheroidEquatorialRadius() for equatorial radius of a spheroid.
    *	@see SpheroidFlattening() for flattening of a spheroid.
    *	@see SpheroidPolarRadius() for polar radius of a spheroid.
    *	@see SpheroidSurfaceArea() for surface area of a spheroid.
    *	@see SpheroidVolume() for volume of a spheroid.
	*	@see SphereInertia() for inertial tensor of a sphere.
	*	@see EllipsoidInertia() for inertial tensor of an ellipsoid.
	*/
	template <typename T, typename T2>
	void SpheroidInertia(const T mass, const T equatorialRadiusInm, const T polarRadiusInm, T2 (&matrix)[9]);

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{spheroid}\f$ of a spheroid with equatorial radius \f$a\f$ and polar radius, \f$c\f$. It is assumed that \f$a\f$ lays on the xy-plane, and \f$c\f$ on the z-axis.
	*		\f[ I_{spheroid}=\begin{bmatrix}
			\frac{1}{5}m\ a^2c^2 & 0 & 0\\ 
			0 & \frac{1}{5}m\ a^2c^2 & 0\\ 
			0 & 0 & \frac{2}{5}m\ a^2
			\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaEllipsoid.html
	*	@param mass \f$ m\ (kg)\f$ Mass of the ellipsoid.
	*	@param equatorialRadiusInm \f$ a\ (m)\f$ Equatorial radius in meters. The degenerate semi-principle axis of the spheroid.
    *	@param polarRadiusInm \f$ c\ (m)\f$ Polar radius in meters. The unique semi-principle axis of the spheroid.
	*	@param matrix \f$ I_{spheroid}\ (kg\ m^2)\f$ Moment of inertia tensor matrix of the spheroid.
    *	@see SpheroidEccentricity() for eccentricity of a spheroid.
    *	@see SpheroidEquatorialRadius() for equatorial radius of a spheroid.
    *	@see SpheroidFlattening() for flattening of a spheroid.
    *	@see SpheroidPolarRadius() for polar radius of a spheroid.
    *	@see SpheroidSurfaceArea() for surface area of a spheroid.
    *	@see SpheroidVolume() for volume of a spheroid.
	*	@see SphereInertia() for inertial tensor of a sphere.
	*	@see EllipsoidInertia() for inertial tensor of an ellipsoid.
	*/
	template <typename T, typename T2>
	void SpheroidInertia(const T mass, const T equatorialRadiusInm, const T polarRadiusInm, std::vector<T2>& matrix);

#ifdef EGXMATH_GLM

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{spheroid}\f$ of a spheroid with equatorial radius \f$a\f$ and polar radius, \f$c\f$. It is assumed that \f$a\f$ lays on the xy-plane, and \f$c\f$ on the z-axis.
	*		\f[ I_{spheroid}=\begin{bmatrix}
			\frac{1}{5}m\ a^2c^2 & 0 & 0\\ 
			0 & \frac{1}{5}m\ a^2c^2 & 0\\ 
			0 & 0 & \frac{2}{5}m\ a^2
			\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaEllipsoid.html
	*	@param mass \f$ m\ (kg)\f$ Mass of the ellipsoid.
	*	@param equatorialRadiusInm \f$ a\ (m)\f$ Equatorial radius in meters. The degenerate semi-principle axis of the spheroid.
    *	@param polarRadiusInm \f$ c\ (m)\f$ Polar radius in meters. The unique semi-principle axis of the spheroid.
	*	@param matrix \f$ I_{spheroid}\ (kg\ m^2)\f$ Moment of inertia tensor matrix of the spheroid.
    *	@see SpheroidEccentricity() for eccentricity of a spheroid.
    *	@see SpheroidEquatorialRadius() for equatorial radius of a spheroid.
    *	@see SpheroidFlattening() for flattening of a spheroid.
    *	@see SpheroidPolarRadius() for polar radius of a spheroid.
    *	@see SpheroidSurfaceArea() for surface area of a spheroid.
    *	@see SpheroidVolume() for volume of a spheroid.
	*	@see SphereInertia() for inertial tensor of a sphere.
	*	@see EllipsoidInertia() for inertial tensor of an ellipsoid.
	*/
	template <typename T>
	void SpheroidInertia(const T mass, const T equatorialRadiusInm, const T polarRadiusInm, glm::mat3& matrix);

#endif // EGXMATH_GLM


    /// @}
} //namespace EGXMath

#include "SpheroidInertia.inl"
