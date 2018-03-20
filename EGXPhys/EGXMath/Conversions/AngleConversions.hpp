/// @file EGXMath/Conversions/AngleConversions.hpp
///
/// @brief Converts angle measurements into various styles such as radians, degrees, DMS, HMS.
///
/// @author Elliot Grafil (Metex)
/// @date 3/20/18

/// @defgroup AngleConversions Angle Conversions
/// @ingroup Conversions

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <math.h>  
#include <string>
#include "../EGXMathConstants.hpp"

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXMath
{
	/// @addtogroup AngleConversions
	/// @{
	
	/**
	*   @brief Converts an angle \f$(\alpha)\f$ in radians to (decimal) degrees.
	*   		\f[\alpha_{Deg}=\alpha_{Rad}\frac{180}{\pi}\f]
	*   See https://en.wikipedia.org/wiki/Stellar_mass
	*
	*   @param radians \f$\alpha_{Rad}\ (rad)\f$ is the angle in radians.
	*   @return \f$\alpha_{Deg} ({^{\circ}})\f$ is the angle in decimal degrees.
	*	@see RadiansToDegrees() for (decimal) degrees.
	*	@see RadiansToDecimalDegrees() for decimal degrees.
	*	@see RadiansToMilliradian() for milliradians.
	*	@see RadiansToDegreesMinutesSeconds() to convert to DMS.
	*	@see RadiansToHoursMinutesSeconds() to convert to HMS.
	*/

	template<typename T>
	T RadianToRadian(const T& radians);

	//https://en.wikipedia.org/wiki/Milliradian
	template<typename T>
	T RadianToMilliradian(const T& radians);

	//https://en.wikipedia.org/wiki/Degree_(angle)

	template<typename T>
	T RadianToDegree(const T& radians);
	//https://en.wikipedia.org/wiki/Degree_(angle)

	template<typename T>
	T RadianToDecimalDegree(const T& radians);
	//https://en.wikipedia.org/wiki/Degree_(angle)

	template<typename T>
	T RadianToArcdegree(const T& radians);

	//https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	template<typename T>
	T RadianToArcminute(const T& radians);

	//https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	template<typename T>
	T RadianToArcsecond(const T& radians);

	template<typename T>
	T RadianToMilliarcsecond(const T& radians);

	template<typename T>
	T RadianToMicroarcsecond(const T& radians);

	template<typename T>
	void RadianToDegreesMinutesSeconds(const T& starMass);

	template<typename T>
	void RadianToDMS(const T& starMass);

	template<typename T>
	void RadianToHoursMinutesSeconds(const T& starMass);

	template<typename T>
	void RadianToHMS(const T& starMass);

	template<typename T>
	void RadianToGradian(const T& starMass);

	//https://en.wikipedia.org/wiki/Points_of_the_compass
	template<typename T>
	std::string RadianToCompass8Wind(const T& starMass);
	//https://en.wikipedia.org/wiki/Points_of_the_compass
	template<typename T>
	std::string RadianToCompass16Wind(const T& starMass);
	//https://en.wikipedia.org/wiki/Points_of_the_compass
	template<typename T>
	std::string RadianToCompass32Wind(const T& starMass);

    /// @}
} //namespace EGXMath

#include "AngleConversions.inl"
