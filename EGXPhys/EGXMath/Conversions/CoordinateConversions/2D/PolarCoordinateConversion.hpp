/// @file EGXMath/Conversions/CoordinateConversions/2D/PolarCoordinateConversion.hpp
///
/// @brief Converts a set of 2D coordinates from Polar into Caresian ect.
///
/// @author Elliot Grafil (Metex)
/// @date 5/18/18

/// @defgroup EGXMath-Conversions-CoordinateConversions-2D-Polar Polar
/// @ingroup EGXMath-Conversions-CoordinateConversions-2D

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXMath
{
	/// @addtogroup  EGXMath-Conversions-CoordinateConversions-2D-Polar
	/// @{
	
    /**
    *   @brief Converts a 2D point represented in the Polar coordiante system \f$(r,\theta)\f$ to a representation in the Cartesian coordinate system \f$(x,y)\f$.
    *		\f[ x = r\ cos(\theta) \f]
    *       \f[ y = r\ sin(\theta) \f]
    *
    *
    *	See http://mathworld.wolfram.com/PolarCoordinates.html and https://en.wikipedia.org/wiki/Polar_coordinate_system
    *   @param polarR \f$ r\ (m)\f$ The \f$r\f$ polar coordinate (polar radius) in meters.
    *   @param polarAzimuthInRadians \f$ \theta\ (rad)\f$ The \f$\theta\f$ polar coordinate (azimuth angle/polar angle) in radians.
    *   @param x \f$ x\ (m)\f$ The \f$x\f$ cartesian coordinate in meters.
    *   @param y \f$ y\ (m)\f$ The \f$y\f$ cartesian coordinate in meters.
    *	@see CartesianCoordinateToPolarCoordinate() for reverse coordinate transform.
    *	@see CylindricalCoordinateToCartesianCoordinate() for 3D.
    *	@see DegreeToRadian() for conversion from degrees to radians.
    */
    template<typename T>
    void PolarCoordinateToCartesianCoordinate(      const T polarR, const T polarAzimuthInRadians,
                                                    T& x, T& y);


	/// @}
} //namespace EGXMath

#include "PolarCoordinateConversion.inl"