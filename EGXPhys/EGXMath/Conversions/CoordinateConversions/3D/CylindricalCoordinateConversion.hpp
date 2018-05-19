/// @file EGXMath/Conversions/CoordinateConversions/PolarCoordinateConversion.hpp
///
/// @brief Converts a set of coordinates fom Polar into Spherical, Caresian ect.
///
/// @author Elliot Grafil (Metex)
/// @date 5/18/18

/// @defgroup EGXMath-Conversions-CoordinateConversions-Polar Polar
/// @ingroup EGXMath-Conversions-CoordinateConversions

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
	/// @addtogroup  EGXMath-Conversions-CoordinateConversions-Polar Polar
	/// @{
	
	//// Degrees
	/**
	*   @brief Converts an angle in (decimal) degrees to radians.
	*		\f[\alpha_{rad}=\alpha_{deg}\frac{\pi}{180}\f]
	*
	*	See https://en.wikipedia.org/wiki/Radian
	*   @param decimalDegree \f$\alpha_{deg}\ (deg)\f$ is the angle in decimal degrees.
	*   @return \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*	@see DecimalDegreeToRadian() for alias.
	*	@see DegreeToMilliradian() for conversion to milliradians.
	*	@see DegreeToRadian() for conversion from (decimal) degrees.
	*	@see DecimalDegreeToRadian() for conversion from decimal degrees.
	*	@see RadianToRadian() for conversion from radians.
	*	@see IntegerDegreeToRadian() for conversion from integer degrees.
	*	@see BinaryDegreeToRadian() for conversion from binary degrees.
	*	@see TurnToRadian() for conversion from turns.
	*	@see GradianToRadian() for conversion from gradians.
	*	@see HoursMinutesSecondsToRadian() for conversion from hours minutes seconds.
	*	@see DegreesMinutesSecondsToRadian() for conversion from degrees minutes seconds.
	*	@see CompassWindToRadian() for conversion from compass wind.
	*/
	template<typename T>
	T DegreeToRadian(const T& decimalDegree);



    template<typename T>
    void PolarCoordinateToCartesianCoordinate(      const T polarR, const T polarAzimuthInRadians, const T polarZ,
                                                    const T& x, const T& y, const T& z);


    template<typename T>
    void PolarCoordinateToSphericalCoordinate(      const T polarR, const T polarAzimuthInRadians, const T polarZ,
                                                    const T& sphericalR, const T& sphericalAzimuthInRadians, const T& sphericalZenithInRadians);

	/// @}
} //namespace EGXMath

#include "PolarCoordinateConversion.inl"