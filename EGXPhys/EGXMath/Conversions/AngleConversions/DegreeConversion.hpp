/// @file EGXMath/Conversions/AngleConversions/DecimalDegreeConversion.hpp
///
/// @brief Converts angle measurements fom degrees into various styles such as radians, degrees, DMS, HMS.
///
/// @author Elliot Grafil (Metex)
/// @date 3/28/18

/// @defgroup EGXMath-AngleConversions-Degree Degree
/// @ingroup EGXMath-AngleConversions

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
	/// @addtogroup EGXMath-AngleConversions-Degree
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

	/**
	*   @brief Converts an angle in (decimal) degrees to milliradians.
	*		\f[\alpha_{mrad}=\alpha_{deg}\frac{\pi}{180}*10^3\f]
	*
	*	See https://en.wikipedia.org/wiki/Milliradian
	*   @param decimalDegree \f$\alpha_{deg}\ (deg)\f$ is the angle in decimal degrees.
	*   @return \f$\alpha_{mrad}\ (mrad)\f$ is the angle in milliradians.
	*	@see DecimalDegreeToMilliradian() for alias.
	*	@see DegreeToRadian() for conversion to radians.
	*	@see DegreeToMilliradian() for conversion from (decimal) degrees.
	*	@see DecimalDegreeToMilliradian() for conversion from decimal degrees.
	*	@see RadianToMilliradian() for conversion from radians.
	*	@see IntegerDegreeToMilliradian() for conversion from integer degrees.
	*	@see BinaryDegreeToMilliradian() for conversion from binary degrees.
	*	@see TurnToMilliradian() for conversion from turns.
	*	@see GradianToMilliradian() for conversion from gradians.
	*	@see HoursMinutesSecondsToMilliradian() for conversion from hours minutes seconds.
	*	@see DegreesMinutesSecondsToMilliradian() for conversion from degrees minutes seconds.
	*	@see CompassWindToMilliradian() for conversion from compass wind.
	*/
	template<typename T>
	T DegreeToMilliradian(const T& decimalDegree);

	/**
	*   @brief Converts an angle in (decimal) degree to turn.
	*		\f[\alpha_{turn}=\alpha_{deg}\frac{1}{360}\f]
	*
	*	See https://en.wikipedia.org/wiki/Turn_(geometry)
	*   @param decimalDegree \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) degree.
	*   @return \f$\alpha_{turn}\ (turn)\f$ is the angle in turns.
	*	@see DegreeToTurn() for conversion from (decimal) degrees.
	*	@see DecimalDegreeToTurn() for conversion from decimal degrees.
	*	@see RadianToTurn() for conversion from radians.
	*	@see IntegerDegreeToTurn() for conversion from integer degrees.
	*	@see BinaryDegreeToTurn() for conversion from binary degrees.
	*	@see TurnToTurn() for conversion from turns.
	*	@see GradianToTurn() for conversion from gradians.
	*	@see HoursMinutesSecondsToTurn() for conversion from hours minutes seconds.
	*	@see DegreesMinutesSecondsToTurn() for conversion from degrees minutes seconds.
	*	@see CompassWindToTurn() for conversion from compass wind.
	*/
	template<typename T>
	T DegreeToTurn(const T& decimalDegree);

	/**
	*   @brief Converts an angle in (decimal) degree to decimal degree.
	*		\f[\alpha_{deg}=\alpha_{deg}\f]
	*
	*	See https://en.wikipedia.org/wiki/Degree_(angle) and https://en.wikipedia.org/wiki/Decimal_degrees
	*   @param decimalDegree \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) degree.
	*   @return \f$\alpha_{deg}\ (deg)\f$ is the angle in decimal degree.
	*	@see DegreeToDegree() for alias.
	*	@see DegreeToArcdegree() for alias.
	*	@see DecimalDegreeToDegree() for alias.
	*	@see DecimalDegreeToArcdegree() for alias.

	*	@see DegreeToDecimalDegree() for conversion from (decimal) degrees.
	*	@see DecimalDegreeToDecimalDegree() for conversion from decimal degrees.
	*	@see RadianToDecimalDegree() for conversion from radians.
	*	@see IntegerDegreeToDecimalDegree() for conversion from integer degrees.
	*	@see BinaryDegreeToDecimalDegree() for conversion from binary degrees.
	*	@see TurnToDecimalDegree() for conversion from turns.
	*	@see GradianToDecimalDegree() for conversion from gradians.
	*	@see HoursMinutesSecondsToDecimalDegree() for conversion from hours minutes seconds.
	*	@see DegreesMinutesSecondsToDecimalDegree() for conversion from degrees minutes seconds.
	*	@see CompassWindToDecimalDegree() for conversion from compass wind.
	*/
	template<typename T>
	T DegreeToDecimalDegree(const T& decimalDegree);

	/**
	*   @brief Converts an angle in (decimal) degree to (decimal) arc degree.
	*		\f[\alpha_{deg}=\alpha_{deg}\f]
	*
	*	See https://en.wikipedia.org/wiki/Degree_(angle) and https://en.wikipedia.org/wiki/Decimal_degrees
	*   @param decimalDegree \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) degrees.
	*   @return \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) arc degree.
	*	@see DegreeToDecimalDegree() for alias.
	*	@see DecimalDegreeToDegree() for alias.
	*	@see DecimalDegreeToArcdegree() for alias.
	*	@see DegreeToArcdegree() for conversion from (decimal) degrees.
	*	@see DecimalDegreeToArcdegree() for conversion from decimal degrees.
	*	@see RadianToArcdegree() for conversion from radians.
	*	@see IntegerDegreeToArcdegree() for conversion from integer degrees.
	*	@see BinaryDegreeToArcdegree() for conversion from binary degrees.
	*	@see TurnToArcdegree() for conversion from turns.
	*	@see GradianToArcdegree() for conversion from gradians.
	*	@see HoursMinutesSecondsToArcdegree() for conversion from hours minutes seconds.
	*	@see DegreesMinutesSecondsToArcdegree() for conversion from degrees minutes seconds.
	*	@see CompassWindToArcdegree() for conversion from compass wind.
	*/
	template<typename T>
	T DegreeToArcdegree(const T& decimalDegree);

	/**
	*   @brief Converts an angle in (decimal) degree to integer degree. This rounds to the nearest integer.
	*		\f[\alpha_{deg int}=round(\alpha_{deg})\f]
	*
	*	See https://en.wikipedia.org/wiki/Degree_(angle) and https://en.wikipedia.org/wiki/Decimal_degrees
	*   @param decimalDegree \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) degree.
	*   @return \f$\alpha_{deg int}\ (deg int)\f$ is the angle in integer degree.
	*	@see DecimalDegreeIntegerDegree() for alias.
	*	@see DegreeToIntegerDegree() for conversion from (decimal) degrees.
	*	@see DecimalDegreeToIntegerDegree() for conversion from decimal degrees.
	*	@see RadianToIntegerDegree() for conversion from radians.
	*	@see IntegerDegreeToIntegerDegree() for conversion from integer degrees.
	*	@see BinaryDegreeToIntegerDegree() for conversion from binary degrees.
	*	@see TurnToIntegerDegree() for conversion from turns.
	*	@see GradianToIntegerDegree() for conversion from gradians.
	*	@see HoursMinutesSecondsToIntegerDegree() for conversion from hours minutes seconds.
	*	@see DegreesMinutesSecondsToIntegerDegree() for conversion from degrees minutes seconds.
	*	@see CompassWindToIntegerDegree() for conversion from compass wind.
	*/
	template<typename T>
	T DegreeToIntegerDegree(const T& decimalDegree);

	/**
	*   @brief Converts an angle in (decimal) degree to binary degree (brad).
	*		\f[\alpha_{deg\ bin}=round(\alpha_{deg}\frac{2^{(n-1)}}{360})\f]
	*	Where \f$n\f$ is the number of bits avaliable to store the number. \f$n\f$ defaults to 8, the tradiational number for binary degrees.
	*
	*	See https://en.wikipedia.org/wiki/Binary_scaling#Binary_angles and https://www.globalspec.com/reference/14722/160210/Chapter-7-5-3-Binary-Angular-Measure
	*   @param decimalDegree \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) degrees.
	*	@param bits \f$n\ (bit)\f$ is the number of bits avaliable to store the number. Defaults to 8.
	*   @return \f$\alpha_{deg\ bin}\ (brad)\f$ is the angle in binary degrees.
	*	@see DegreeToBinaryDegree() for conversion from (decimal) degrees.
	*	@see DecimalDegreeToBinaryDegree() for conversion from decimal degrees.
	*	@see RadianToBinaryDegree() for conversion from radians.
	*	@see IntegerDegreeToBinaryDegree() for conversion from integer degrees.
	*	@see BinaryDegreeToBinaryDegree() for conversion from binary degrees.
	*	@see TurnToBinaryDegree() for conversion from turns.
	*	@see GradianToBinaryDegree() for conversion from gradians.
	*	@see HoursMinutesSecondsToBinaryDegree() for conversion from hours minutes seconds.
	*	@see DegreesMinutesSecondsToBinaryDegree() for conversion from degrees minutes seconds.
	*	@see CompassWindToBinaryDegree() for conversion from compass wind.
	*/
	template<typename T, typename T2>
	T DegreeToBinaryDegree(const T& decimalDegree, const T2& bits = 8);

	/**
	*   @brief Converts an angle in (decimal) degree to arcminute. Note that arcminutes are not equal to minutes.
	*		\f[\alpha_{arcmin}= 60 * \alpha_{deg}\f]
	*
	*	See https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	*   @param decimalDegree \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) degrees.
	*   @return \f$\alpha_{arcmin}\ (arcmin)\f$ is the angle in arcminutes. Note that this is 1/60 of an degree. It is not equal to minutes.
	*	@see DecimalDegreeToArcminute() for alias.
	*	@see DegreeToArcminute() for conversion from (decimal) degrees.
	*	@see DecimalDegreeToArcminute() for conversion from decimal degrees.
	*	@see RadianToArcminute() for conversion from radians.
	*	@see IntegerDegreeToArcminute() for conversion from integer degrees.
	*	@see BinaryDegreeToArcminute() for conversion from binary degrees.
	*	@see TurnToArcminute() for conversion from turns.
	*	@see GradianToArcminute() for conversion from gradians.
	*	@see HoursMinutesSecondsToArcminute() for conversion from hours minutes seconds.
	*	@see DegreesMinutesSecondsToArcminute() for conversion from degrees minutes seconds.
	*	@see CompassWindToArcminute() for conversion from compass wind.
	*/
	template<typename T>
	T DegreeToArcminute(const T& decimalDegree);

	/**
	*   @brief Converts an angle in (decimal) degree to arcsecond. Note that arcsecond are not equal to seconds.
	*		\f[\alpha_{arcsec}=60 * 60 * \alpha_{deg}\f]
	*
	*	See https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	*   @param decimalDegree \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) degrees.
	*   @return \f$\alpha_{arcsec}\ (arcsec)\f$ is the angle in arcseconds. Note that this is 1/60 of a arcminute, not minute. It is not equal to seconds.
	*	@see DecimalDegreeToArcsecond() for alias.
	*	@see DegreeToArcsecond() for conversion from (decimal) degrees.
	*	@see DecimalDegreeToArcsecond() for conversion from decimal degrees.
	*	@see RadianToArcsecond() for conversion from radians.
	*	@see IntegerDegreeToArcsecond() for conversion from integer degrees.
	*	@see BinaryDegreeToArcsecond() for conversion from binary degrees.
	*	@see TurnToArcsecond() for conversion from turns.
	*	@see GradianToArcsecond() for conversion from gradians.
	*	@see HoursMinutesSecondsToArcsecond() for conversion from hours minutes seconds.
	*	@see DegreesMinutesSecondsToArcsecond() for conversion from degrees minutes seconds.
	*	@see CompassWindToArcsecond() for conversion from compass wind.
	*/
	template<typename T>
	T DegreeToArcsecond(const T& decimalDegree);

	/**
	*   @brief Converts an angle in (decimal) degree to milliarcsecond.
	*		\f[\alpha_{mas}=60 * 60 * 10^3 * \alpha_{deg} \f]
	*
	*	See https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	*   @param decimalDegree \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) degrees.
	*   @return \f$\alpha_{mas}\ (mas)\f$ is the angle in milliarcseconds.
	*	@see DecimalDegreeToMilliarcsecond() for alias.
	*	@see DegreeToMilliarcsecond() for conversion from (decimal) degrees.
	*	@see DecimalDegreeToMilliarcsecond() for conversion from decimal degrees.
	*	@see RadianToMilliarcsecond() for conversion from radians.
	*	@see IntegerDegreeToMilliarcsecond() for conversion from integer degrees.
	*	@see BinaryDegreeToMilliarcsecond() for conversion from binary degrees.
	*	@see TurnToMilliarcsecond() for conversion from turns.
	*	@see GradianToMilliarcsecond() for conversion from gradians.
	*	@see HoursMinutesSecondsToMilliarcsecond() for conversion from hours minutes seconds.
	*	@see DegreesMinutesSecondsToMilliarcsecond() for conversion from degrees minutes seconds.
	*	@see CompassWindToMilliarcsecond() for conversion from compass wind.
	*/
	template<typename T>
	T DegreeToMilliarcsecond(const T& decimalDegree);


	/**
	*   @brief Converts an angle in (decimal) degree to microarcsecond.
	*		\f[\alpha_{\mu as}=60 * 60 * 10^6 * \alpha_{deg}\f]
	*
	*	See https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	*   @param decimalDegree \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) degrees.
	*   @return \f$\alpha_{\mu as}\ (\mu as)\f$ is the angle in microarcseconds.
	*	@see DecimalDegreeToMicroarcsecond() for alias.
	*	@see DegreeToMicroarcsecond() for conversion from (decimal) degrees.
	*	@see DecimalDegreeToMicroarcsecond() for conversion from decimal degrees.
	*	@see RadianToMicroarcsecond() for conversion from radians.
	*	@see IntegerDegreeToMicroarcsecond() for conversion from integer degrees.
	*	@see BinaryDegreeToMicroarcsecond() for conversion from binary degrees.
	*	@see TurnToMicroarcsecond() for conversion from turns.
	*	@see GradianToMicroarcsecond() for conversion from gradians.
	*	@see HoursMinutesSecondsToMicroarcsecond() for conversion from hours minutes seconds.
	*	@see DegreesMinutesSecondsToMicroarcsecond() for conversion from degrees minutes seconds.
	*	@see CompassWindToMicroarcsecond() for conversion from compass wind.
	*/
	template<typename T>
	T DegreeToMicroarcsecond(const T& decimalDegree);

	/**
	*   @brief Converts an angle in (decimal) degree to degrees minutes seconds (DMS). \f${DD}^{\circ}{MM}'{SS.SS}''\f$ format.
	*		\f[degree=trun(\alpha_{deg})\f]
	*		\f[arcminute=trun(60 * |\alpha_{deg} - degree|)\f]
	*		\f[arcsecond=60 * ((60 * |\alpha_{deg} - degree|)-arcminute)\f]
	*
	*	Where trunc is the integer truncation command.
	*
	*	See https://en.wikipedia.org/wiki/Geographic_coordinate_conversion and https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	*   @param decimalDegree \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) degrees.
	*	@param integerDegree \f$degree\ (deg int)\f$ is the angle in integer degrees.
	*	@param arcminute \f$arcminute\ (arcmin)\f$ is the angle in arcminutes in whole numbers. Note that this is 1/60 of an degree. It is not equal to minutes.
	*   @param arcsecond \f$arcsecond\ (arcsec)\f$ is the angle in arcseconds. Note that this is 1/60 of a arcminute, not minute. It is not equal to seconds.
	*	@see DegreeToDMS() for alias.
	*	@see DecimalDegreeToDegreesMinutesSeconds() for alias.
	*	@see DecimalDegreeToDMS() for alias.
	*	@see DegreeToDegreesMinutesSeconds() for conversion from (decimal) degrees and full explination.
	*	@see DecimalDegreeToDegreesMinutesSeconds() for conversion from decimal degrees.
	*	@see RadianToDegreesMinutesSeconds() for conversion from radians.
	*	@see IntegerDegreeToDegreesMinutesSeconds() for conversion from integer degrees.
	*	@see BinaryDegreeToDegreesMinutesSeconds() for conversion from binary degrees.
	*	@see TurnToDegreesMinutesSeconds() for conversion from turns.
	*	@see GradianToDegreesMinutesSeconds() for conversion from gradians.
	*	@see HoursMinutesSecondsToDegreesMinutesSeconds() for conversion from hours minutes seconds.
	*	@see DegreesMinutesSecondsToDegreesMinutesSecondsS() for conversion from degrees minutes seconds.
	*	@see CompassWindToDegreesMinutesSeconds() for conversion from compass wind.
	*/
	template<typename T>
	void DegreeToDegreesMinutesSeconds(const T& decimalDegree, T& integerDegree, T& arcminute, T& arcsecond);

	/**
	*   @brief Converts an angle in (decimal) degree to degrees minutes seconds (DMS). \f${DD}^{\circ}{MM}'{SS.SS}''\f$ format.
	*		\f[degree=trun(\alpha_{deg})\f]
	*		\f[arcminute=trun(60 * |\alpha_{deg} - degree|)\f]
	*		\f[arcsecond=60 * ((60 * |\alpha_{deg} - degree|)-arcminute)\f]
	*
	*	See https://en.wikipedia.org/wiki/Geographic_coordinate_conversion and https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	*	Where trunc is the integer truncation command.
	*   @param decimalDegree \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) degrees.
	*	@param integerDegree \f$degree\ (deg int)\f$ is the angle in integer degrees.
	*	@param arcminute \f$arcminute\ (arcmin)\f$ is the angle in arcminutes in whole numbers. Note that this is 1/60 of an degree. It is not equal to minutes.
	*   @param arcsecond \f$arcsecond\ (arcsec)\f$ is the angle in arcseconds. Note that this is 1/60 of a arcminute, not minute. It is not equal to seconds.
	*	@see DegreeToDegreesMinutesSeconds() for alias.
	*	@see DecimalDegreeToDegreesMinutesSeconds() for alias.
	*	@see DecimalDegreeToDMS() for alias.
	*	@see DegreeToDMS() for conversion from (decimal) degrees and full explination.
	*	@see DecimalDegreeToDMS() for conversion from decimal degrees.
	*	@see RadianToDMS() for conversion from radians.
	*	@see IntegerDegreeToDMS() for conversion from integer degrees.
	*	@see BinaryDegreeToDMS() for conversion from binary degrees.
	*	@see TurnToDMS() for conversion from turns.
	*	@see GradianToDMS() for conversion from gradians.
	*	@see HoursMinutesSecondsToDMS() for conversion from hours minutes seconds.
	*	@see DegreesMinutesSecondsToDMS() for conversion from degrees minutes seconds.
	*	@see CompassWindToDMS() for conversion from compass wind.
	*/
	template<typename T>
	void DegreeToDMS(const T& decimalDegree, T& integerDegree, T& arcminute, T& arcsecond);

	/**
	*   @brief Converts an angle in (decimal) degree to hours minutes seconds (DMS). \f${HH}^{h}{MM}^{m}{SS.SS}^{s}\f$ format.
	*		\f[hour=trun(\frac{\alpha_{deg}}{15})\f]
	*		\f[minute=trun(60 * |\frac{\alpha_{deg}}{15} - hour|)\f]
	*		\f[second=60 * ((60 * |\frac{\alpha_{deg}}{15} - hour|)-minute)\f]
	*
	*	See and https://en.wikipedia.org/wiki/Right_ascension and https://en.wikipedia.org/wiki/Hour_angle
	*   @param decimalDegree \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) degrees.
	*	@param hour \f$hour\ (hour)\f$ is the angle in hours.
	*	@param minute \f$minute\ (min)\f$ is the angle in minutes in whole numbers. Note that this is 1/60 of an hour. It is not equal to arcminutes.
	*   @param second \f$second\ (sec)\f$ is the angle in seconds. Note that this is 1/60 of a minute, not arcminute. It is not equal to arcseconds.
	*	@see DegreeToHoursMinutesSeconds() for conversion from (decimal) degrees.
	*	@see DegreeToHMS() for alias.
	*	@see DecimalDegreeToHoursMinutesSeconds() for alias.
	*	@see DecimalDegreeToHMS() for alias.
	*	@see DegreeToHoursMinutesSeconds() for conversion from (decimal) degrees and full explination.
	*	@see DecimalDegreeToHoursMinutesSeconds() for conversion from decimal degrees.
	*	@see RadianToHoursMinutesSeconds() for conversion from radians.
	*	@see IntegerDegreeToHoursMinutesSeconds() for conversion from integer degrees.
	*	@see BinaryDegreeToHoursMinutesSeconds() for conversion from binary degrees.
	*	@see TurnToHoursMinutesSeconds() for conversion from turns.
	*	@see GradianToHoursMinutesSeconds() for conversion from gradians.
	*	@see HoursMinutesSecondsToHoursMinutesSeconds() for conversion from hours minutes seconds.
	*	@see DegreesMinutesSecondsToHoursMinutesSeconds() for conversion from degrees minutes seconds.
	*	@see CompassWindToHoursMinutesSeconds() for conversion from compass wind.
	*/
	template<typename T>
	void DegreeToHoursMinutesSeconds(const T& decimalDegree, T& hour, T& minute, T& second);


	/**
	*   @brief Converts an angle in (decimal) degree to hours minutes seconds (DMS). \f${HH}^{h}{MM}^{m}{SS.SS}^{s}\f$ format.
	*		\f[hour=trun(\frac{\alpha_{deg}}{15})\f]
	*		\f[minute=trun(60 * |\frac{\alpha_{deg}}{15} - hour|)\f]
	*		\f[second=60 * ((60 * |\frac{\alpha_{deg}}{15} - hour|)-minute)\f]
	*
	*	See and https://en.wikipedia.org/wiki/Right_ascension and https://en.wikipedia.org/wiki/Hour_angle
	*   @param decimalDegree \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) degrees.
	*	@param hour \f$hour\ (hour)\f$ is the angle in hours.
	*	@param minute \f$minute\ (min)\f$ is the angle in minutes in whole numbers. Note that this is 1/60 of an hour. It is not equal to arcminutes.
	*   @param second \f$second\ (sec)\f$ is the angle in seconds. Note that this is 1/60 of a minute, not arcminute. It is not equal to arcseconds.
	*	@see DegreeToHoursMinutesSeconds() for alias.
	*	@see DecimalDegreeToHoursMinutesSeconds() for alias.
	*	@see DecimalDegreeToHMS() for alias.
	*	@see DegreeToHMS() for conversion from (decimal) degrees and full explination.
	*	@see DecimalDegreeToHMS() for conversion from decimal degrees.
	*	@see RadianToHMS() for conversion from radians.
	*	@see IntegerDegreeToHMS() for conversion from integer degrees.
	*	@see BinaryDegreeToHMS() for conversion from binary degrees.
	*	@see TurnToHMS() for conversion from turns.
	*	@see GradianToHMS() for conversion from gradians.
	*	@see HoursMinutesSecondsToHMS() for conversion from hours minutes seconds.
	*	@see DegreesMinutesSecondsToHMS() for conversion from degrees minutes seconds.
	*	@see CompassWindToHMS() for conversion from compass wind.
	*/
	template<typename T>
	void DegreeToHMS(const T& decimalDegree, T& hour, T& minute, T& second);

	/**
	*   @brief Converts an angle in (decimal) degree to gradian.
	*		\f[\alpha_{g}=\alpha_{deg}\frac{10}{9}\f]
	*
	*	See https://en.wikipedia.org/wiki/Gradian
	*   @param decimalDegree \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) degrees.
	*   @return \f$\alpha_{g}\ (g)\f$ is the angle in gradians.
	*	@see DegreeToGon() for alias.
	*	@see DecimalDegreeToGradian() for alias.
	*	@see DecimalDegreeToGon() for alias.
	*	@see DegreeToGradian() for conversion from (decimal) degrees.
	*	@see DecimalDegreeToGradian() for conversion from decimal degrees.
	*	@see RadianToGradian() for conversion from radians.
	*	@see IntegerDegreeToGradian() for conversion from integer degrees.
	*	@see BinaryDegreeToGradian() for conversion from binary degrees.
	*	@see TurnToGradian() for conversion from turns.
	*	@see GradianToGradian() for conversion from gradians.
	*	@see HoursMinutesSecondsToGradian() for conversion from hours minutes seconds.
	*	@see DegreesMinutesSecondsToGradian() for conversion from degrees minutes seconds.
	*	@see CompassWindToGradian() for conversion from compass wind.
	*/
	template<typename T>
	T DegreeToGradian(const T& decimalDegree);

	/**
	*   @brief Converts an angle in (decimal) degree to gradians.
	*		\f[\alpha_{g}=\alpha_{deg}\frac{10}{9}\f]
	*
	*	See https://en.wikipedia.org/wiki/Gradian
	*   @param decimalDegree \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) degrees.
	*   @return \f$\alpha_{g}\ (g)\f$ is the angle in gradians.
	*	@see DegreeToGradian() for alias.
	*	@see DecimalDegreeToGradian() for alias.
	*	@see DecimalDegreeToGon() for alias.
	*	@see DegreeToGon() for conversion from (decimal) degrees.
	*	@see DecimalDegreeToGon() for conversion from decimal degrees.
	*	@see RadianToGon() for conversion from radians.
	*	@see IntegerDegreeToGon() for conversion from integer degrees.
	*	@see BinaryDegreeToGon() for conversion from binary degrees.
	*	@see TurnToGon() for conversion from turns.
	*	@see GradianToGon() for conversion from gradians.
	*	@see HoursMinutesSecondsToGon() for conversion from hours minutes seconds.
	*	@see DegreesMinutesSecondsToGon() for conversion from degrees minutes seconds.
	*	@see CompassWindToGon() for conversion from compass wind.
	*/
	template<typename T>
	T DegreeToGon(const T& decimalDegree);


	/**
	*   @brief Converts an angle in (decimal) degree to a n-Wind compass point name.
	*
	*	See https://en.wikipedia.org/wiki/Points_of_the_compass
	*   @param decimalDegree \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) degrees.
	*	@param winds \f$winds\ (int)\f$ The number of points(names) that the compass should have. Must be 2,4,8,16 or 32.
	*   @param abbreviate \f$abbreviate\ (bool)\f$ should the compass point name be abbreviated.
	*   @return \f$point\ name\ (dimensionless)\f$ is the name of the compass point.
	*	@see DecimalDegreeToCompassWind() for alias.
	*	@see RadianToCompassWind() for conversion from radians.
	*	@see IntegerDegreeToCompassWind() for conversion from integer degrees.
	*	@see BinaryDegreeToCompassWind() for conversion from binary degrees.
	*	@see TurnToCompassWind() for conversion from binary degrees.
	*	@see GradianToCompassWind() for conversion from gradians.
	*	@see HoursMinutesSecondsToCompassWind() for conversion from hours minutes seconds.
	*	@see DegreesMinutesSecondsToCompassWind() for conversion from degrees minutes seconds.
	*/
	template<typename T>
	std::string DegreeToCompassWind(const T& decimalDegree, const unsigned int winds, const bool abbreviate);

	/// @}
} //namespace EGXMath

#include "DegreeConversion.inl"
