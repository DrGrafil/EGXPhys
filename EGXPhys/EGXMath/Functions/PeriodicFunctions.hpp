/// @file EGXMath/Conversions/AngleConversions/HMSConversion.hpp
///
/// @brief Defines functions relating to the periodic functions.
///
/// @author Elliot Grafil (Metex)
/// @date 4/9/18

/// @defgroup EGXMath-Functions-Periodic Periodic
/// @ingroup EGXMath-Functions


//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <math.h>  
#include <string>
#include "../../EGXMathConstants.hpp"

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXMath
{
	/// @addtogroup EGXMath-Functions-Periodic
	/// @{

	/**
	*   @brief Converts an angle in hours minutes seconds to radian.
	*		\f[\alpha_{rad}=\alpha_{rad}\f]
	*
	*	See https://en.wikipedia.org/wiki/Radian
	*	@param hour \f$hour\ (h)\f$ is the angle in hours in whole numbers.
	*	@param minute \f$minute\ (m)\f$ is the angle in minutes in whole numbers. Note that this is 1/60 of an hour. It is not equal to arcminutes.
	*   @param second \f$second\ (s)\f$ is the angle in seconds. Note that this is 1/60 of a minute. It is not equal to arcseconds.
	*   @return \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*	@see HMSToMilliradian() for conversion to milliradians.
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
	T HMSToRadian(const T& hour, const T& minute, const T& second);
	/*Sawtooth wave, -1,1 with a period of period*/
	template <typename T>
	T SawtoothWave(T x, T period)
	{
		return 2.0*(x / period - floor(x / period + 0.5));
	}
	/*Square wave, -1,1 with a period of period*/
	template <typename T>
	T SquareWave(T x, T period)
	{
		return QuickSign(sin(2.0 * pi * x / period));
	}

	/*Triangle wave, -1,1 with a period of period*/
	template <typename T>
	T TriangleWave(T x, T period)
	{
		return 2.0 * fabs(SawtoothWave(x + (period / 4.0), period)) + 1.0;
	}

	template <typename T>
	T HeavisideStep(T x)
	{
		return (x >= 0);
	}

    /// @}
} //namespace EGXMath

#include "HMSConversion.inl"
