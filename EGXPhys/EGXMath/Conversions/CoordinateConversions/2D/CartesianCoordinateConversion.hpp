/// @file EGXMath/Conversions/CoordinateConversions/CartesianCoordinateConversion.hpp
///
/// @brief Converts a set of coordinates fom Cartesian into Spherical, Polar ect.
///
/// @author Elliot Grafil (Metex)
/// @date 5/18/18

/// @defgroup EGXMath-Conversions-CoordinateConversions-Cartesian Cartesian
/// @ingroup EGXMath-Conversions-CoordinateConversions

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <math.h>  
//=================================
// Forward declared dependencies

//=================================
//


namespace EGXMath
{
	/// @addtogroup EGXMath-Conversions-CoordinateConversions-Cartesian
	/// @{
	
	//// Degrees
	/**
	*   @brief Converts a point represented in the Cartesian coordinate system to a representation in the Polar/Cylindrical coordiante system.
	*		\f[\alpha_{rad}=\alpha_{deg}\frac{\pi}{180}\f]
	*
	*	See https://en.wikipedia.org/wiki/Radian
	*   @param decimalDegree \f$\alpha_{deg}\ (deg)\f$ is the angle in decimal degrees.
	*   @return \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*	@see DecimalDegreeToRadian() for alias.
	*	@see DegreeToMilliradian() for conversion to milliradians.
	*	@see DegreeToRadian() for conversion from (decimal) degrees.
	*/
	template<typename T>
    void CartesianCoordinateToPolarCoordinate(  const T x, const T y, const T z, const T& polarR,
                                                const T& polarAzimuthInRadians, const T& polarZ);


    template<typename T>
    void CartesianCoordinateToSphericalCoordinate(  const T x, const T y, const T z,
                                                    const T& sphericalR, const T& sphericalAzimuthInRadians, const T& sphericalZenithInRadians);
    
	/// @}
} //namespace EGXMath

#include "CartesianCoordinateConversion.inl"
