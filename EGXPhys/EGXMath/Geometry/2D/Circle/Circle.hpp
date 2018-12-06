/// @file EGXMath/Geometry/2D/Circle.hpp
///
/// @brief Defines functions relating to circle shape.
///
/// @author Elliot Grafil 
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
	*   @brief Finds the surface area, \f$A_{circle}\f$, in meter squared of a circle with radius, \f$r\f$ 
	*		\f[ A_{circle}=\pi r^2 \f]
	*
	*	@param radius \f$ r\ (m)\f$ Radius of circle in meters.
	*   @return \f$ A_{circle}\ (m^2)\f$ Surface area of circle in meter squared.
	*	@see CircleCircumference() for ircumference of a circle.
	*	@see HoopThinInertia() for inertial tensor of a thin hoop.
	*	@see HoopInertia() for inertial tensor of a hoop.
	*	@see DiskThinInertia() for inertial tensor of a thin disk.
	*	@see DiskInertia() for inertial tensor of a disk.
	*/
	template <typename T>
	T CircleSurfaceArea(const T radius);

	/**
	*   @brief Finds the circumference (perimeter), \f$C_{circle}\f$ of a circle with radius, \f$r\f$
	*		\f[ C_{circle}=2 \pi r \f]
	*
	*	@param radius \f$ r\ (m)\f$ Radius of circle in meters.
	*   @return \f$ C_{circle}\ (m)\f$ Circumference of circle in meters.
	*	@see CirclePerimeter() for alias.
	*	@see CircleSurfaceArea() for area of a circle.
	*	@see HoopThinInertia() for inertial tensor of a thin hoop.
	*	@see HoopInertia() for inertial tensor of a hoop.
	*	@see DiskThinInertia() for inertial tensor of a thin disk.
	*	@see DiskInertia() for inertial tensor of a disk.
	*/
	template <typename T>
	T CircleCircumference(const T radius);

	/**
	*   @brief Finds the perimeter (circumference), \f$C_{circle}\f$ of a circle with radius, \f$r\f$
	*		\f[ C_{circle}=2 \pi r \f]
	*
	*	@param radius \f$ r\ (m)\f$ Radius of circle in meters.
	*   @return \f$ C_{circle}\ (m)\f$ Perimeter of circle in meters.
	*	@see CircleCircumference() for alias.
	*	@see CircleSurfaceArea() for area of a circle.
	*	@see HoopThinInertia() for inertial tensor of a thin hoop.
	*	@see HoopInertia() for inertial tensor of a hoop.
	*	@see DiskThinInertia() for inertial tensor of a thin disk.
	*	@see DiskInertia() for inertial tensor of a disk.
	*/
	template <typename T>
	T CirclePerimeter(const T radius);
	

    /// @}
} //namespace EGXMath

#include "Circle.inl"
