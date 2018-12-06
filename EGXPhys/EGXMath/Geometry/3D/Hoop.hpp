/// @file EGXMath/Geometry/3D/Hoop.hpp
///
/// @brief Defines functions relating to hoop shape.
///
/// @author Elliot Grafil 
/// @date 4/11/18

/// @defgroup EGXMath-Geometry-3D-Hoop Hoop
/// @ingroup EGXMath-Geometry-3D


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
	/// @addtogroup EGXMath-Geometry-3D-Hoop
	/// @{

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{hoop}\f$ of a hoop with radius, \f$r\f$, and mass \f$m\f$ that is infinitly thin.
	*		\f[ I_{hoop}=\begin{bmatrix}
			\frac{1}{2}m\ r^2 & 0 & 0\\ 
			0 & \frac{1}{2}m\ r^2 & 0\\ 
			0 & 0 & m\ r^2
			\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaHoop.html
	*	@param mass \f$ m\ (kg)\f$ is the mass of the hoop.
	*	@param radius \f$ r\ (m)\f$ is the radius of the hoop.
	*	@param matrix \f$ I_{hoop}\ (kg\ m^2)\f$ is the moment of inertia tensor matrix.
	*	@see CircleSurfaceArea() for area of a circle.
	*	@see CircleCircumference() for circumference of a circle.
	*	@see HoopThinInertia() for inertial tensor of a thin hoop.
	*	@see HoopInertia() for inertial tensor of a hoop.
	*	@see DiskThinInertia() for inertial tensor of a thin disk.
	*	@see DiskInertia() for inertial tensor of a disk.
	*	@see CylinderInertia() for inertial tensor of a cylinder.
	*	@see SphereInertia() for inertial tensor of a sphere.
	*/
	template <typename T, typename T2>
	void HoopThinInertia(const T mass, const T radius, T2 (&matrix)[9]);

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{hoop}\f$ of a hoop with radius, \f$r\f$, and mass \f$m\f$ that is infinitly thin.
	*		\f[ I_{hoop}=\begin{bmatrix}
			\frac{1}{2}m\ r^2 & 0 & 0\\
			0 & \frac{1}{2}m\ r^2 & 0\\
			0 & 0 & m\ r^2
			\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaHoop.html
	*	@param mass \f$ m\ (kg)\f$ is the mass of the hoop.
	*	@param radius \f$ r\ (m)\f$ is the radius of the hoop.
	*	@param matrix \f$ I_{hoop}\ (kg\ m^2)\f$ is the moment of inertia tensor matrix.
	*	@see CircleSurfaceArea() for area of a circle.
	*	@see CircleCircumference() for circumference of a circle.
	*	@see HoopThinInertia() for inertial tensor of a thin hoop.
	*	@see HoopInertia() for inertial tensor of a hoop.
	*	@see DiskThinInertia() for inertial tensor of a thin disk.
	*	@see DiskInertia() for inertial tensor of a disk.
	*	@see CylinderInertia() for inertial tensor of a cylinder.
	*	@see SphereInertia() for inertial tensor of a sphere.
	*/
	template <typename T, typename T2>
	void HoopThinInertia(const T mass, const T radius, std::vector<T2>& matrix);

#ifdef EGXMATH_GLM

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{hoop}\f$ of a hoop with radius, \f$r\f$, and mass \f$m\f$ that is infinitly thin.
	*		\f[ I_{hoop}=\begin{bmatrix}
			\frac{1}{2}m\ r^2 & 0 & 0\\
			0 & \frac{1}{2}m\ r^2 & 0\\
			0 & 0 & m\ r^2
			\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaHoop.html
	*	@param mass \f$ m\ (kg)\f$ is the mass of the hoop.
	*	@param radius \f$ r\ (m)\f$ is the radius of the hoop.
	*	@param matrix \f$ I_{hoop}\ (kg\ m^2)\f$ is the moment of inertia tensor matrix.
	*	@see CircleSurfaceArea() for area of a circle.
	*	@see CircleCircumference() for circumference of a circle.
	*	@see HoopThinInertia() for inertial tensor of a thin hoop.
	*	@see HoopInertia() for inertial tensor of a hoop.
	*	@see DiskThinInertia() for inertial tensor of a thin disk.
	*	@see DiskInertia() for inertial tensor of a disk.
	*	@see CylinderInertia() for inertial tensor of a cylinder.
	*	@see SphereInertia() for inertial tensor of a sphere.
	*/
	template <typename T>
	void HoopThinInertia(const T mass, const T radius, glm::mat3& matrix);

#endif // EGXMATH_GLM


    /// @}
} //namespace EGXMath

#include "Hoop.inl"
