/// @file EGXMath/Geometry/2D/Circle.hpp
///
/// @brief Defines functions relating to circle shape.
///
/// @author Elliot Grafil (Metex)
/// @date 4/11/18

/// @defgroup EGXMath-Geometry-2D-Circle Circle
/// @ingroup EGXMath-Geometry-2D


//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <vector>
#include <algorithm>
//=================================
// Forward declared dependencies

//=================================
//


namespace EGXMath
{
	/// @addtogroup EGXMath-Geometry-2D-Circle
	/// @{

	/**
	*   @brief Finds the area, \f$A_{circle}\f$ of a circle with radius, \f$r\f$ 
	*		\f[ A_{circle}=\pi r^2 \f]
	*
	*	@param radius \f$ r\ (m)\f$ is the radius of the circle.
	*   @return \f$ A_{circle}\ (m)\f$ is the area of the circle.
	*	@see CircleCircumference() for circumference of a circle.
	*	@see CircleThinHoopInertia() for inertial tensor of a thin hoop.
	*	@see CircleThinDiskInertia() for inertial tensor of a thin disk.
	*/
	template <typename T>
	T CircleArea(const T radius);

	/**
	*   @brief Finds the circumference, \f$C_{circle}\f$ of a circle with radius, \f$r\f$
	*		\f[ C_{circle}=2 \pi r \f]
	*
	*	@param radius \f$ r\ (m)\f$ is the radius of the circle.
	*   @return \f$ C_{circle}\ (m)\f$ is the circumference of the circle.
	*	@see CircleArea() for area of a circle.
	*	@see CircleThinHoopInertia() for inertial tensor of a thin hoop.
	*	@see CircleThinDiskInertia() for inertial tensor of a thin disk.
	*/
	template <typename T>
	T CircleCircumference(const T radius);

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
	*	@see CircleArea() for area of a circle.
	*	@see CircleCircumference() for circumference of a circle.
	*	@see CircleThinHoopInertia() for inertial tensor of a thin hoop.
	*	@see CircleThinDiskInertia() for inertial tensor of a thin disk.
	*/
	template <typename T, typename T2>
	void CircleThinHoopInertia(const T mass, const T radius, T2 (&matrix)[9]);

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{disk}\f$ of a disk with radius, \f$r\f$, and mass \f$m\f$ that is infinitly thin.
	*		\f[ I_{disk}=\begin{bmatrix}
			\frac{1}{4}m\ r^2 & 0 & 0\\
			0 & \frac{1}{4}m\ r^2 & 0\\
			0 & 0 & \frac{1}{2}m\ r^2
			\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaHoop.html
	*	@param mass \f$ m\ (kg)\f$ is the mass of the hoop.
	*	@param radius \f$ r\ (m)\f$ is the radius of the hoop.
	*	@param matrix \f$ I_{disk}\ (kg\ m^2)\f$ is the moment of inertia tensor matrix.
	*	@see CircleArea() for area of a circle.
	*	@see CircleCircumference() for circumference of a circle.
	*	@see CircleThinHoopInertia() for inertial tensor of a thin hoop.
	*	@see CircleThinDiskInertia() for inertial tensor of a thin disk.
	*/
	template <typename T, typename T2>
	void CircleThinDiskInertia(const T mass, const T radius, T2(&matrix)[9]);

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
	*	@see CircleArea() for area of a circle.
	*	@see CircleCircumference() for circumference of a circle.
	*	@see CircleThinHoopInertia() for inertial tensor of a thin hoop.
	*	@see CircleThinDiskInertia() for inertial tensor of a thin disk.
	*/
	template <typename T, typename T2>
	void CircleThinHoopInertia(const T mass, const T radius, std::vector<T2>& matrix);

	template <typename T, typename T2>
	void CircleThinDiskInertia(const T mass, const T radius, std::vector<T2>& matrix);

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
	*	@see CircleArea() for area of a circle.
	*	@see CircleCircumference() for circumference of a circle.
	*	@see CircleThinHoopInertia() for inertial tensor of a thin hoop.
	*	@see CircleThinDiskInertia() for inertial tensor of a thin disk.
	*/
	template <typename T>
	void CircleThinHoopInertia(const T mass, const T radius, glm::mat3& matrix);

	template <typename T>
	void CircleThinDiskInertia(const T mass, const T radius, glm::mat3& matrix);
#endif // EGXMATH_GLM


    /// @}
} //namespace EGXMath

#include "Circle.inl"
