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
	*	@see HoopThinInertia() for inertial tensor of a thin hoop.
	*	@see HoopInertia() for inertial tensor of a hoop.
	*	@see DiskThinInertia() for inertial tensor of a thin disk.
	*	@see DiskInertia() for inertial tensor of a disk.
	*/
	template <typename T>
	T CircleSurfaceArea(const T radius);

	/**
	*   @brief Finds the circumference, \f$C_{circle}\f$ of a circle with radius, \f$r\f$
	*		\f[ C_{circle}=2 \pi r \f]
	*
	*	@param radius \f$ r\ (m)\f$ is the radius of the circle.
	*   @return \f$ C_{circle}\ (m)\f$ is the circumference of the circle.
	*	@see CircleArea() for area of a circle.
	*	@see HoopThinInertia() for inertial tensor of a thin hoop.
	*	@see HoopInertia() for inertial tensor of a hoop.
	*	@see DiskThinInertia() for inertial tensor of a thin disk.
	*	@see DiskInertia() for inertial tensor of a disk.
	*/
	template <typename T>
	T CircleCircumference(const T radius);

    /// @}
} //namespace EGXMath

#include "Circle.inl"
