/// @file EGXMath/Geometry/3D/Ellipsoid/EllipsoidVolume.hpp
/// 
/// @brief Defines functions relating to the volume of an ellipsoid.
///
/// @author Elliot Grafil (Metex)
/// @date 5/23/18

/// @defgroup EGXMath-Geometry-3D-Ellipsoid-Volume Volume
/// @ingroup EGXMath-Geometry-3D-Ellipsoid


//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <cmath>
//=================================
// Forward declared dependencies

//=================================
//


namespace EGXMath
{
	/// @addtogroup EGXMath-Geometry-3D-Ellipsoid-Volume
	/// @{

    /**
    *   @brief Finds the volume, \f$V_{ellipsoid}\f$, in meter cubed of a ellipsoid with three distinct semi-principle axes, \f$a\f$, \f$b\f$ and \f$c\f$.
    *		\f[ V_{ellipsoid}=\frac{4}{3}\pi a b c \f]
    *
    *	See http://mathworld.wolfram.com/Ellipsoid.html and https://en.wikipedia.org/wiki/Ellipsoid
    *
    *	@param aSemiPrincipleAxisInm \f$ a\ (m)\f$ Semi-principle axis of the ellipsoid that lays along the x-axis in meters.
    *	@param bSemiPrincipleAxisInm \f$ b\ (m)\f$ Semi-principle axis of the ellipsoid that lays along the y-axis in meters.
    *	@param cSemiPrincipleAxisInm \f$ c\ (m)\f$ Semi-principle axis of the ellipsoid that lays along the z-axis in meters.
    *   @return \f$ V_{ellipsoid}\ (m^3)\f$ Volume of ellipsoid in meter cubed.
    *	@see EllipsoidSurfaceArea() for surface area of an ellipsoid.
    *	@see EllipsoidInertia() for inertial tensor of an ellipsoid.
    *	@see SphereVolume() for volume of a sphere.
    *	@see SpheroidVolume() for volume of a spheroid.
    */
    template <typename T>
    T EllipsoidVolume(const T aSemiPrincipleAxisInm, const T bSemiPrincipleAxisInm, const T cSemiPrincipleAxisInm);

    /// @}
} //namespace EGXMath

#include "EllipsoidVolume.inl"
