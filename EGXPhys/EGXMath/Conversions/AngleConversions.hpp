/// @file EGXMath/Conversions/AngleConversions.hpp
///
/// @brief Converts angle measurements into various styles such as radians, degrees, DMS, HMS.
///
/// @author Elliot Grafil (Metex)
/// @date 3/20/18

/// @defgroup EGXMath-AngleConversions Angle Conversions
/// @ingroup EGXMath

/// @defgroup EGXMath-AngleConversions-Degree Degree
/// @ingroup EGXMath-AngleConversions

/// @defgroup EGXMath-AngleConversions-DecimalDegree Decimal Degree
/// @ingroup EGXMath-AngleConversions

/// @defgroup EGXMath-AngleConversions-Radian Radian 
/// @ingroup EGXMath-AngleConversions

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
	/// @addtogroup EGXMath-AngleConversions-Degree
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
	void DegreeToDegreesMinutesSeconds(const T& decimalDegree, T& degree, T& arcminute, T& arcsecond);

	template<typename T>
	void DegreeToDMS(const T& decimalDegree, T& degree, T& arcminute, T& arcsecond);

	template<typename T>
	void DegreeToHoursMinutesSeconds(const T& decimalDegree, T& hour, T& minute, T& second);

	template<typename T>
	void DegreeToHMS(const T& decimalDegree, T& hour, T& minute, T& second);

	template<typename T>
	T DegreeToGradian(const T& decimalDegree);

	template<typename T>
	T DegreeToGon(const T& decimalDegree);

	//https://en.wikipedia.org/wiki/Points_of_the_compass

	/**
	*   @brief Converts an angle in radians to a n-Wind compass point name.
	*
	*   @param decimalDegree \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*   @param abbreviate \f$abbreviate\ (bool)\f$ should the compass point name be abbreviated.
	*   @return \f$wind (dimensionless)\f$ is the name of the compass point.
	*	@see DegreeToCompass8Wind() for full explination of conversion.
	*/
	template<typename T>
	std::string DegreeToCompassWind(const T& decimalDegree, const unsigned int winds, const bool abbreviate);

	/// @}

	//// DECIMAL DEGREES (alias to degrees)




	//// RADIANS
	/// @addtogroup EGXMath-AngleConversions-Radian
	/// @{

	/**
	*   @brief Converts an angle in radians to radians.
	*		\f[\alpha_{rad}=\alpha_{rad}\f]
	*
	*	See https://en.wikipedia.org/wiki/Radian
	*   @param radian \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*   @return \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*	@see RadianToMilliradian() for conversion to milliradians.
	*	@see DegreeToRadian() for conversion from (decimal) degrees.
	*/
	template<typename T>
	T RadianToRadian(const T& radian);

	//
	/**
	*   @brief Converts an angle in radians to milliradians.
	*		\f[\alpha_{mrad}=\alpha_{rad}*10^3\f]
	*
	*	See https://en.wikipedia.org/wiki/Milliradian 
	*   @param radian \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*   @return \f$\alpha_{mrad}\ (mrad)\f$ is the angle in milliradians.
	*	@see RadianToRadian() for conversion to radians.
	*	@see DegreeToMilliradian() for conversion from (decimal) degrees.
	*/
	template<typename T>
	T RadianToMilliradian(const T& radian);

	//https://en.wikipedia.org/wiki/Degree_(angle)

	/**
	*   @brief Converts an angle in radians to (decimal) degree.
	*		\f[\alpha_{deg}=\alpha_{rad}\frac{180}{\pi}\f]
	*
	*	See https://en.wikipedia.org/wiki/Degree_(angle) and https://en.wikipedia.org/wiki/Decimal_degrees
	*   @param radian \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*   @return \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) degree.
	*	@see RadianToArcdegree() for alias.
	*	@see RadianToDegree() for alias.
	*/
	template<typename T>
	T RadianToDegree(const T& radian);
	//https://en.wikipedia.org/wiki/Degree_(angle)

	/**
	*   @brief Converts an angle in radians to decimal degree.
	*		\f[\alpha_{deg}=\alpha_{rad}\frac{180}{\pi}\f]
	*
	*	See https://en.wikipedia.org/wiki/Degree_(angle) and https://en.wikipedia.org/wiki/Decimal_degrees
	*   @param radian \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*   @return \f$\alpha_{deg}\ (deg)\f$ is the angle in decimal degree.
	*	@see RadianToDegree() for alias.
	*	@see RadianToArcdegree() for alias.
	*/
	template<typename T>
	T RadianToDecimalDegree(const T& radian);
	//https://en.wikipedia.org/wiki/Degree_(angle)

	/**
	*   @brief Converts an angle in radians to arcdegree (decimal degree).
	*		\f[\alpha_{deg}=\alpha_{rad}\frac{180}{\pi}\f]
	*
	*	See https://en.wikipedia.org/wiki/Degree_(angle) and https://en.wikipedia.org/wiki/Decimal_degrees
	*   @param radian \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*   @return \f$\alpha_{deg}\ (deg)\f$ is the angle in arcdegree (decimal degree).
	*	@see RadianToDegree() for alias.
	*	@see RadianToDecimalDegree() for alias.
	*/
	template<typename T>
	T RadianToArcdegree(const T& radian);

	/**
	*   @brief Converts an angle in radians to arcminute.
	*		\f[\alpha_{arcmin}=\alpha_{rad}\frac{180 * 60}{\pi}\f]
	*
	*	See https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	*   @param radian \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*   @return \f$\alpha_{arcmin}\ (arcmin)\f$ is the angle in arcminutes. Note that this is 1/60 of an degree. It is not equal to minutes.
	*	@see DegreeToArcminute() for conversion from (decimal) degrees.
	*/
	template<typename T>
	T RadianToArcminute(const T& radian);

	/**
	*   @brief Converts an angle in radians to arcsecond.
	*		\f[\alpha_{arcsec}=\alpha_{rad}\frac{180 * 60 * 60}{\pi}\f]
	*
	*	See https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	*   @param radian \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*   @return \f$\alpha_{arcsec}\ (arcsec)\f$ is the angle in arcseconds. Note that this is 1/60 of a arcminute, not minute. It is not equal to seconds.
	*	@see DegreeToArcsecond() for conversion from (decimal) degrees.
	*/
	template<typename T>
	T RadianToArcsecond(const T& radian);

	/**
	*   @brief Converts an angle in radians to milliarcsecond.
	*		\f[\alpha_{mas}=\alpha_{rad}\frac{180 * 60 * 60 * 10^3}{\pi}\f]
	*
	*	See https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	*   @param radian \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*   @return \f$\alpha_{mas}\ (mas)\f$ is the angle in milliarcseconds.
	*	@see DegreeToMilliarcsecond() for conversion from (decimal) degrees.
	*/
	template<typename T>
	T RadianToMilliarcsecond(const T& radian);

	/**
	*   @brief Converts an angle in radians to microarcsecond.
	*		\f[\alpha_{\mu as}=\alpha_{rad}\frac{180 * 60 * 60 * 10^6}{\pi}\f]
	*
	*	See https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	*   @param radian \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*   @return \f$\alpha_{\mu as}\ (\mu as)\f$ is the angle in microarcseconds.
	*	@see DegreeToMicroarcsecond() for conversion from (decimal) degrees.
	*/
	template<typename T>
	T RadianToMicroarcsecond(const T& radian);

	/**
	*   @brief Converts an angle in radians to degrees minutes seconds (DMS). \f${DD}^{\circ}{MM}'{SS.SS}''\f$ format.
	*
	*   @param radian \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*	@param degree \f$degree\ (deg)\f$ is the angle in degrees in whole numbers.
	*	@param arcminute \f$arcminute\ (arcmin)\f$ is the angle in arcminute in whole numbers. Note that this is 1/60 of an degree. It is not equal to minutes.
	*   @param arcsecond \f$arcsecond\ (arcsec)\f$ is the angle in arcsecond. Note that this is 1/60 of a arcminute, not minute. It is not equal to seconds.
	*	@see DegreeToDegreesMinutesSeconds() for conversion from (decimal) degrees and full explination.
	*	@see RadianToDMS() for alias.
	*/
	template<typename T>
	void RadianToDegreesMinutesSeconds(const T& radian, T& degree, T& arcminute, T& arcsecond);

	/**
	*   @brief Converts an angle in radians to degrees minutes seconds (DMS). \f${DD}^{\circ}{MM}'{SS.SS}''\f$ format.
	*
	*   @param radian \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*	@param degree \f$degree\ (deg)\f$ is the angle in degrees in whole numbers.
	*	@param arcminute \f$arcminute\ (arcmin)\f$ is the angle in arcminute in whole numbers. Note that this is 1/60 of an degree. It is not equal to minutes.
	*   @param arcsecond \f$arcsecond\ (arcsec)\f$ is the angle in arcsecond. Note that this is 1/60 of a arcminute, not minute. It is not equal to seconds.
	*	@see DegreeToDegreesMinutesSeconds() for conversion from (decimal) degrees and full explination.
	*	@see RadianToDegreesMinutesSeconds() for alias.
	*/
	template<typename T>
	void RadianToDMS(const T& radian, T& degree, T& arcminute, T& arcsecond);

	/**
	*   @brief Converts an angle in radians to hours minutes seconds (HMS). \f${HH}^h{MM}^m{SS.SS}^s\f$ format.
	*
	*   @param radian \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*	@param hour \f$hour\ (h)\f$ is the angle in hours in whole numbers.
	*	@param minute \f$minute\ (m)\f$ is the angle in minutes in whole numbers. Note that this is 1/60 of an hour. It is not equal to arcminutes.
	*   @param second \f$second\ (s)\f$ is the angle in seconds. Note that this is 1/60 of a minute. It is not equal to arcseconds.
	*	@see DegreeToHoursMinutesSeconds() for conversion from (decimal) degrees and full explination.
	*	@see RadianToHMS() for alias.
	*/
	template<typename T>
	void RadianToHoursMinutesSeconds(const T& radian, T& hour, T& minute, T& second);

	/**
	*   @brief Converts an angle in radians to hours minutes seconds (HMS). \f${HH}^h{MM}^m{SS.SS}^s\f$ format.
	*
	*   @param radian \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*	@param hour \f$hour\ (h)\f$ is the angle in hours in whole numbers.
	*	@param minute \f$minute\ (m)\f$ is the angle in minutes in whole numbers. Note that this is 1/60 of an hour. It is not equal to arcminutes.
	*   @param second \f$second\ (s)\f$ is the angle in seconds. Note that this is 1/60 of a minute. It is not equal to arcseconds.
	*	@see DegreeToHoursMinutesSeconds() for conversion from (decimal) degrees and full explination.
	*	@see RadianToHoursMinutesSeconds() for alias.
	*/
	template<typename T>
	void RadianToHMS(const T& radian, T& hour, T& minute, T& second);

	/**
	*   @brief Converts an angle in radians to gradians.
	*		\f[\alpha_{g}=\alpha_{rad}\frac{200}{\pi}\f]
	*
	*   @param radian \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*   @return \f$\alpha_{g}\ (g)\f$ is the angle in gradians.
	*	@see DegreeToGradian() for conversion from (decimal) degrees.
	*	@see RadianToGon() for alias.
	*/
	template<typename T>
	T RadianToGradian(const T& radian);

	/**
	*   @brief Converts an angle in radians to gradians.
	*		\f[\alpha_{g}=\alpha_{rad}\frac{200}{\pi}\f]
	*
	*   @param radian \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*   @return \f$\alpha_{g}\ (g)\f$ is the angle in gradians.
	*	@see DegreeToGradian() for conversion from (decimal) degrees.
	*	@see RadianToGradian() for alias.
	*/
	template<typename T>
	T RadianToGon(const T& radian);

	/**
	*   @brief Converts an angle in radians to a n-Wind compass point name.
	*
	*	See https://en.wikipedia.org/wiki/Points_of_the_compass
	*   @param radian \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*	@param winds \f$winds\ (int)\f$ The number of points(names) that the compass should have. Must be 2,4,8,16 or 32.
	*   @param abbreviate \f$abbreviate\ (bool)\f$ should the compass point name be abbreviated.
	*   @return \f$point\ name\ (dimensionless)\f$ is the name of the compass point.
	*	@see DegreeToCompassWind() for full explination of conversion.
	*/
	template<typename T>
	std::string RadianToCompassWind(const T& radian, const unsigned int winds, const bool abbreviate);


    /// @}
} //namespace EGXMath

#include "AngleConversions.inl"
