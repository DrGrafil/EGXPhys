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
	
	//// Degrees
	template<typename T>
	T DegreeToRadian(const T& decimalDegree);

	//https://en.wikipedia.org/wiki/Milliradian
	template<typename T>
	T DegreeToMilliradian(const T& decimalDegree);

	//https://en.wikipedia.org/wiki/Degree_(angle)

	template<typename T>
	T DegreeToDegree(const T& decimalDegree);
	//https://en.wikipedia.org/wiki/Degree_(angle)

	template<typename T>
	T DegreeToDecimalDegree(const T& decimalDegree);
	//https://en.wikipedia.org/wiki/Degree_(angle)

	template<typename T>
	T DegreeToArcdegree(const T& decimalDegree);

	//https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	template<typename T>
	T DegreeToArcminute(const T& decimalDegree);

	//https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	template<typename T>
	T DegreeToArcsecond(const T& decimalDegree);

	template<typename T>
	T DegreeToMilliarcsecond(const T& decimalDegree);

	template<typename T>
	T DegreeToMicroarcsecond(const T& decimalDegree);

	template<typename T>
	void DegreeToDegreesMinutesSeconds(const T& decimalDegree, T& degree, T& minute, T& second);

	template<typename T>
	void DegreeToDMS(const T& decimalDegree, T& degree, T& minute, T& second);

	template<typename T>
	void DegreeToHoursMinutesSeconds(const T& decimalDegree, T& hour, T& minute, T& second);

	template<typename T>
	void DegreeToHMS(const T& decimalDegree, T& hour, T& minute, T& second);

	template<typename T>
	T DegreeToGradian(const T& decimalDegree);

	template<typename T>
	T DegreeToGon(const T& decimalDegree);

	//https://en.wikipedia.org/wiki/Points_of_the_compass
	template<typename T>
	std::string DegreeToCompass8Wind(const T& decimalDegree);
	//https://en.wikipedia.org/wiki/Points_of_the_compass
	template<typename T>
	std::string DegreeToCompass16Wind(const T& decimalDegree);
	//https://en.wikipedia.org/wiki/Points_of_the_compass
	template<typename T>
	std::string DegreeToCompass32Wind(const T& decimalDegree);



	//// DECIMAL DEGREES (they are bounded unlike normal degrees

	template<typename T>
	T DegreeToRadian(const T& decimalDegree);

	//https://en.wikipedia.org/wiki/Milliradian
	template<typename T>
	T DegreeToMilliradian(const T& decimalDegree);

	//https://en.wikipedia.org/wiki/Degree_(angle)

	template<typename T>
	T DegreeToDegree(const T& decimalDegree);
	//https://en.wikipedia.org/wiki/Degree_(angle)

	template<typename T>
	T DegreeToDecimalDegree(const T& decimalDegree);
	//https://en.wikipedia.org/wiki/Degree_(angle)

	template<typename T>
	T DegreeToArcdegree(const T& decimalDegree);

	//https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	template<typename T>
	T DegreeToArcminute(const T& decimalDegree);

	//https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	template<typename T>
	T DegreeToArcsecond(const T& decimalDegree);

	template<typename T>
	T DegreeToMilliarcsecond(const T& decimalDegree);

	template<typename T>
	T DegreeToMicroarcsecond(const T& decimalDegree);

	template<typename T>
	void DegreeToDegreesMinutesSeconds(const T& decimalDegree, T& degree, T& minute, T& second);

	template<typename T>
	void DegreeToDMS(const T& decimalDegree, T& degree, T& minute, T& second);

	template<typename T>
	void DegreeToHoursMinutesSeconds(const T& decimalDegree, T& hour, T& minute, T& second);

	template<typename T>
	void DegreeToHMS(const T& decimalDegree, T& hour, T& minute, T& second);

	template<typename T>
	void DegreeToGradian(const T& decimalDegree);

	//https://en.wikipedia.org/wiki/Points_of_the_compass
	template<typename T>
	std::string DegreeToCompass8Wind(const T& decimalDegree);
	//https://en.wikipedia.org/wiki/Points_of_the_compass
	template<typename T>
	std::string DegreeToCompass16Wind(const T& decimalDegree);
	//https://en.wikipedia.org/wiki/Points_of_the_compass
	template<typename T>
	std::string DegreeToCompass32Wind(const T& decimalDegree);






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

	//// RADIANS
	template<typename T>
	T RadianToRadian(const T& radian);

	//https://en.wikipedia.org/wiki/Milliradian
	template<typename T>
	T RadianToMilliradian(const T& radian);

	//https://en.wikipedia.org/wiki/Degree_(angle)

	template<typename T>
	T RadianToDegree(const T& radian);
	//https://en.wikipedia.org/wiki/Degree_(angle)

	template<typename T>
	T RadianToDecimalDegree(const T& radian);
	//https://en.wikipedia.org/wiki/Degree_(angle)

	template<typename T>
	T RadianToArcdegree(const T& radian);

	//https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	template<typename T>
	T RadianToArcminute(const T& radian);

	//https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	template<typename T>
	T RadianToArcsecond(const T& radian);

	template<typename T>
	T RadianToMilliarcsecond(const T& radian);

	template<typename T>
	T RadianToMicroarcsecond(const T& radian);

	template<typename T>
	void RadianToDegreesMinutesSeconds(const T& radian, T& degree, T& minute, T& second);

	template<typename T>
	void RadianToDMS(const T& radian, T& degree, T& minute, T& second);

	template<typename T>
	void RadianToHoursMinutesSeconds(const T& radian, T& hour, T& minute, T& second);

	template<typename T>
	void RadianToHMS(const T& radian, T& hour, T& minute, T& second);

	template<typename T>
	T RadianToGradian(const T& radian);

	template<typename T>
	T RadianToGon(const T& radian);

	//https://en.wikipedia.org/wiki/Points_of_the_compass
	template<typename T>
	std::string RadianToCompass8Wind(const T& radian);
	//https://en.wikipedia.org/wiki/Points_of_the_compass
	template<typename T>
	std::string RadianToCompass16Wind(const T& radian);
	//https://en.wikipedia.org/wiki/Points_of_the_compass
	template<typename T>
	std::string RadianToCompass32Wind(const T& radian);

    /// @}
} //namespace EGXMath

#include "AngleConversions.inl"
