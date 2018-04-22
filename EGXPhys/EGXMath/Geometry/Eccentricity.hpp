/// @file EGXMath/Geometry/Eccentricity.hpp
///
/// @brief Defines functions relating to eccentricity.
///
/// @author Elliot Grafil (Metex)
/// @date 4/11/18

/// @defgroup EGXMath-Geometry-Eccentricity Eccentricity
/// @ingroup EGXMath-Geometry


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
	/// @addtogroup EGXMath-Geometry-Eccentricity
	/// @{

	/**
	*   @brief Finds the eccentricity, \f$e\f$, of a conic section. Eccentricity is a measure of how much a shape deviates from that of a circle., \f$r\f$ 
	*		\f[ A_{circle}=\pi r^2 \f]
	*
	*	@param radius \f$ r\ (m)\f$ Radius of circle in meters.
	*   @return \f$ A_{circle}\ (m^2)\f$ Surface area of circle in meter squared.
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
	*	@param radius \f$ r\ (m)\f$ Radius of circle in meters.
	*   @return \f$ C_{circle}\ (m)\f$ Circumference of circle in meters.
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
