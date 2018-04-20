/// @file EGXMath/Geometry/3D/Cylinder.hpp
///
/// @brief Defines functions relating to cylinder shape.
///
/// @author Elliot Grafil (Metex)
/// @date 4/19/18

/// @defgroup EGXMath-Geometry-Cylinder Cylinder 
/// @ingroup EGXMath-Geometry


//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <math.h>  
//=================================
// Forward declared dependencies
#ifdef EGXMATH_GLM
#include <glm/fwd.hpp>
#endif // EGXPHYS_GLM
//=================================
//


namespace EGXMath
{
	/// @addtogroup EGXMath-Geometry-Cylinder
	/// @{


	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{cyl}\f$ of a cylinder with radius, \f$r\f$, height, \f$h\f$ and mass \f$m\f$. The circular componet lays in the x,y plane.
	*		\f[ I_{cyl}=\begin{bmatrix}
	\frac{1}{12}m\ h^2 + \frac{1}{4}m\ r^2 & 0 & 0\\
	0 & \frac{1}{12}m\ h^2 + \frac{1}{4}m\ r^2 & 0\\
	0 & 0 & \frac{1}{2}m\ r^2
	\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaCylinder.html
	*	@param mass \f$ m\ (kg)\f$ Mass of cylinder in kilograms.
	*	@param height \f$ r\ (m)\f$ Height of cylinder in meters.
	*	@param radius \f$ r\ (m)\f$ Radius of cylinder in meters.
	*	@param matrix \f$ I_{cyl}\ (kg\ m^2)\f$ Inertia tensor matrix in kilograms meter squared.
	*	@see CylinderInertia() for alias.
	*	@see CircleArea() for area of a circle.
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
	*   @brief Finds the moment of inertia tensor, \f$I_{cyl}\f$ of a cylinder with radius, \f$r\f$, height, \f$h\f$ and mass \f$m\f$. The circular componet lays in the x,y plane.
	*		\f[ I_{cyl}=\begin{bmatrix}
	\frac{1}{12}m\ h^2 + \frac{1}{4}m\ r^2 & 0 & 0\\
	0 & \frac{1}{12}m\ h^2 + \frac{1}{4}m\ r^2 & 0\\
	0 & 0 & \frac{1}{2}m\ r^2
	\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaCylinder.html
	*	@param mass \f$ m\ (kg)\f$ Mass of cylinder in kilograms.
	*	@param height \f$ r\ (m)\f$ Height of cylinder in meters.
	*	@param radius \f$ r\ (m)\f$ Radius of cylinder in meters.
	*	@param matrix \f$ I_{disk}\ (kg\ m^2)\f$ Inertia tensor matrix in kilograms meter squared.
	*	@see CylinderInertia() for alias.
	*	@see CircleArea() for area of a circle.
	*	@see CircleCircumference() for circumference of a circle.
	*	@see HoopThinInertia() for inertial tensor of a thin hoop.
	*	@see HoopInertia() for inertial tensor of a hoop.
	*	@see DiskThinInertia() for inertial tensor of a thin disk.
	*	@see DiskInertia() for inertial tensor of a disk.
	*	@see SphereInertia() for inertial tensor of a sphere.
	*/
	template <typename T, typename T2>
	void DiskInertia(const T mass, const T height, const T radius, std::vector<T2>& matrix);


#ifdef EGXMATH_GLM

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{cyl}\f$ of a cylinder with radius, \f$r\f$, height, \f$h\f$ and mass \f$m\f$. The circular componet lays in the x,y plane.
	*		\f[ I_{cyl}=\begin{bmatrix}
	\frac{1}{12}m\ h^2 + \frac{1}{4}m\ r^2 & 0 & 0\\
	0 & \frac{1}{12}m\ h^2 + \frac{1}{4}m\ r^2 & 0\\
	0 & 0 & \frac{1}{2}m\ r^2
	\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaCylinder.html
	*	@param mass \f$ m\ (kg)\f$ Mass of cylinder in kilograms.
	*	@param height \f$ r\ (m)\f$ Height of cylinder in meters.
	*	@param radius \f$ r\ (m)\f$ Radius of cylinder in meters.
	*	@param matrix \f$ I_{cyl}\ (kg\ m^2)\f$  Inertia tensor matrix in kilograms meter squared.
	*	@see CylinderInertia() for alias.
	*	@see CircleArea() for area of a circle.
	*	@see CircleCircumference() for circumference of a circle.
	*	@see HoopThinInertia() for inertial tensor of a thin hoop.
	*	@see HoopInertia() for inertial tensor of a hoop.
	*	@see DiskThinInertia() for inertial tensor of a thin disk.
	*	@see DiskInertia() for inertial tensor of a disk.
	*	@see SphereInertia() for inertial tensor of a sphere.
	*/
	template <typename T, typename T2>
	void DiskInertia(const T mass, const T height, const T radius, glm::mat3& matrix);

#endif // EGXMATH_GLM

    /// @}
} //namespace EGXMath

#include "Cylinder.inl"
