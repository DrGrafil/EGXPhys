/// @file EGXMath/Conversions/DistanceConversions/MileConversion.hpp
///
/// @brief Converts distance measurements from mile units into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 5/31/18

/// @defgroup EGXMath-Conversions-DistanceConversions-Mile Mile
/// @ingroup EGXMath-Conversions-DistanceConversions

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
    /// @addtogroup EGXMath-Conversions-DistanceConversions-Mile
    /// @{

    /**
    *   @brief Converts an angle in decimal degrees to radians.
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
    T DecimalDegreeToRadian(const T& decimalDegree);


    /// @}
} //namespace EGXMath

#include "MileConversion.inl"
