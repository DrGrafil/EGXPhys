/// @file EGXMath/Conversions/CoordinateConversions/2D/CartesianCoordinateConversion.hpp
///
/// @brief Converts a set of 2D coordinates from Cartesian into  Polar ect.
///
/// @author Elliot Grafil 
/// @date 5/18/18

/// @defgroup EGXMath-Conversions-CoordinateConversions-2D-Cartesian Cartesian
/// @ingroup EGXMath-Conversions-CoordinateConversions-2D

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
	/// @addtogroup EGXMath-Conversions-CoordinateConversions-2D-Cartesian
	/// @{
	
	/**
	*   @brief Converts a 2D point represented in the Cartesian coordinate system \f$(x,y)\f$ to a representation in the Polar coordiante system \f$(r,\theta)\f$ .
	*		\f[ r = \sqrt{x^2+y^2} \f]
    *       \f[ \theta = atan2(y,x) \f]
    *       
	*
	*	See http://mathworld.wolfram.com/PolarCoordinates.html and https://en.wikipedia.org/wiki/Polar_coordinate_system
	*   @param x \f$ x\ (m)\f$ The \f$x\f$ cartesian coordinate in meters.
    *   @param y \f$ y\ (m)\f$ The \f$y\f$ cartesian coordinate in meters.
    *   @param polarR \f$ r\ (m)\f$ The \f$r\f$ polar coordinate (polar radius) in meters.
    *   @param polarAzimuthInRadians \f$ \theta\ (rad)\f$ The \f$\theta\f$ polar coordinate (azimuth angle/polar angle) in radians.
	*	@see PolarCoordinateToCartesianCoordinate() for reverse coordinate transform.
	*	@see CartesianCoordinateToCylindricalCoordinate() for 3D.
	*	@see DegreeToRadian() for conversion from degrees to radians.
	*/
	template<typename T>
    void CartesianCoordinateToPolarCoordinate(  const T x, const T y,
                                                T& polarR, T& polarAzimuthInRadians);

    
	/// @}
} //namespace EGXMath

#include "CartesianCoordinateConversion.inl"
