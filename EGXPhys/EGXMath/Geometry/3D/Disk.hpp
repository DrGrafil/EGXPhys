/// @file EGXMath/Geometry/3D/Disk.hpp
///
/// @brief Defines functions relating to disk shape.
///
/// @author Elliot Grafil (Metex)
/// @date 4/11/18

/// @defgroup EGXMath-Geometry-3D-Disk Disk
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
	/// @addtogroup EGXMath-Geometry-3D-Disk
	/// @{

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{disk}\f$ of a disk with radius, \f$r\f$, height, \f$h\f$ and mass \f$m\f$. Also known as a cylinder. The circular componet lays in the x,y plane.
	*		\f[ I_{disk}=\begin{bmatrix}
	\frac{1}{12}m\ h^2 + \frac{1}{4}m\ r^2 & 0 & 0\\
	0 & \frac{1}{12}m\ h^2 + \frac{1}{4}m\ r^2 & 0\\
	0 & 0 & \frac{1}{2}m\ r^2
	\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaCylinder.html
	*	@param mass \f$ m\ (kg)\f$ Mass of disk in kilograms.
	*	@param height \f$ r\ (m)\f$ Height of disk in meters.
	*	@param radius \f$ r\ (m)\f$ Radius of disk in meters.
	*	@param matrix \f$ I_{disk}\ (kg\ m^2)\f$ Inertia tensor matrix in kilograms meter squared.
	*	@see CylinderInertia() for alias.
	*	@see CircleSurfaceArea() for area of a circle.
	*	@see CircleCircumference() for circumference of a circle.
	*	@see HoopThinInertia() for inertial tensor of a thin hoop.
	*	@see HoopInertia() for inertial tensor of a hoop.
	*	@see DiskThinInertia() for inertial tensor of a thin disk.
	*	@see DiskInertia() for inertial tensor of a disk.
	*	@see SphereInertia() for inertial tensor of a sphere.
	*/
	template <typename T, typename T2>
	void DiskInertia(const T mass, const T height, const T radius, T2(&matrix)[9]);

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{disk}\f$ of a disk with radius, \f$r\f$, and mass \f$m\f$ that is infinitly thin.
	*		\f[ I_{disk}=\begin{bmatrix}
			\frac{1}{4}m\ r^2 & 0 & 0\\
			0 & \frac{1}{4}m\ r^2 & 0\\
			0 & 0 & \frac{1}{2}m\ r^2
			\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaCylinder.html
	*	@param mass \f$ m\ (kg)\f$ Mass of disk in kilograms.
	*	@param radius \f$ r\ (m)\f$ Radius of disk in meters.
	*	@param matrix \f$ I_{disk}\ (kg\ m^2)\f$ Inertia tensor matrix in kilograms meter squared.
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
	void DiskThinInertia(const T mass, const T radius, T2(&matrix)[9]);

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{disk}\f$ of a disk with radius, \f$r\f$, height, \f$h\f$ and mass \f$m\f$. Also known as a cylinder. The circular componet lays in the x,y plane.
	*		\f[ I_{disk}=\begin{bmatrix}
	\frac{1}{12}m\ h^2 + \frac{1}{4}m\ r^2 & 0 & 0\\
	0 & \frac{1}{12}m\ h^2 + \frac{1}{4}m\ r^2 & 0\\
	0 & 0 & \frac{1}{2}m\ r^2
	\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaCylinder.html
	*	@param mass \f$ m\ (kg)\f$ Mass of disk in kilograms.
	*	@param height \f$ r\ (m)\f$ Height of disk in meters.
	*	@param radius \f$ r\ (m)\f$ Radius of disk in meters.
	*	@param matrix \f$ I_{disk}\ (kg\ m^2)\f$ Inertia tensor matrix in kilograms meter squared.
	*	@see CylinderInertia() for alias.
	*	@see CircleSurfaceArea() for area of a circle.
	*	@see CircleCircumference() for circumference of a circle.
	*	@see HoopThinInertia() for inertial tensor of a thin hoop.
	*	@see HoopInertia() for inertial tensor of a hoop.
	*	@see DiskThinInertia() for inertial tensor of a thin disk.
	*	@see DiskInertia() for inertial tensor of a disk.
	*	@see SphereInertia() for inertial tensor of a sphere.
	*/
	template <typename T, typename T2>
	void DiskInertia(const T mass, const T height, const T radius, std::vector<T2>& matrix);

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{disk}\f$ of a disk with radius, \f$r\f$, and mass \f$m\f$ that is infinitly thin.
	*		\f[ I_{disk}=\begin{bmatrix}
	\frac{1}{4}m\ r^2 & 0 & 0\\
	0 & \frac{1}{4}m\ r^2 & 0\\
	0 & 0 & \frac{1}{2}m\ r^2
	\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaCylinder.html
	*	@param mass \f$ m\ (kg)\f$ Mass of disk in kilograms.
	*	@param radius \f$ r\ (m)\f$ Radius of disk in meters.
	*	@param matrix \f$ I_{disk}\ (kg\ m^2)\f$ Inertia tensor matrix in kilograms meter squared.
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
	void DiskThinInertia(const T mass, const T radius, std::vector<T2>& matrix);

#ifdef EGXMATH_GLM

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{disk}\f$ of a disk with radius, \f$r\f$, height, \f$h\f$ and mass \f$m\f$. Also known as a cylinder. The circular componet lays in the x,y plane.
	*		\f[ I_{disk}=\begin{bmatrix}
	\frac{1}{12}m\ h^2 + \frac{1}{4}m\ r^2 & 0 & 0\\
	0 & \frac{1}{12}m\ h^2 + \frac{1}{4}m\ r^2 & 0\\
	0 & 0 & \frac{1}{2}m\ r^2
	\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaCylinder.html
	*	@param mass \f$ m\ (kg)\f$ Mass of disk in kilograms.
	*	@param height \f$ r\ (m)\f$ Height of disk in meters.
	*	@param radius \f$ r\ (m)\f$ Radius of disk in meters.
	*	@param matrix \f$ I_{disk}\ (kg\ m^2)\f$ Inertia tensor matrix in kilograms meter squared.
	*	@see CylinderInertia() for alias.
	*	@see CircleSurfaceArea() for area of a circle.
	*	@see CircleCircumference() for circumference of a circle.
	*	@see HoopThinInertia() for inertial tensor of a thin hoop.
	*	@see HoopInertia() for inertial tensor of a hoop.
	*	@see DiskThinInertia() for inertial tensor of a thin disk.
	*	@see DiskInertia() for inertial tensor of a disk.
	*	@see SphereInertia() for inertial tensor of a sphere.
	*/
	template <typename T, typename T2>
	void DiskInertia(const T mass, const T height, const T radius, glm::mat3& matrix);

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{disk}\f$ of a disk with radius, \f$r\f$, and mass \f$m\f$ that is infinitly thin.
	*		\f[ I_{disk}=\begin{bmatrix}
	\frac{1}{4}m\ r^2 & 0 & 0\\
	0 & \frac{1}{4}m\ r^2 & 0\\
	0 & 0 & \frac{1}{2}m\ r^2
	\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaCylinder.html
	*	@param mass \f$ m\ (kg)\f$ Mass of disk in kilograms.
	*	@param radius \f$ r\ (m)\f$ Radius of disk in meters.
	*	@param matrix \f$ I_{disk}\ (kg\ m^2)\f$ Inertia tensor matrix in kilograms meter squared.
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
	void DiskThinInertia(const T mass, const T radius, glm::mat3& matrix);
#endif // EGXMATH_GLM


    /// @}
} //namespace EGXMath

#include "Disk.inl"
