/// @file EGXMath/Conversions/AngleConversions/IntegerDegreeConversion.hpp
///
/// @brief Converts angle measurements from integer degree into various styles such as radians, degrees, DMS, HMS.
///
/// @author Elliot Grafil (Metex)
/// @date 3/28/18

/// @defgroup EGXMath-Conversions-AngleConversions-IntegerDegree Integer Degree
/// @ingroup EGXMath-Conversions-AngleConversions

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
	/// @addtogroup EGXMath-Conversions-AngleConversions-IntegerDegree
	/// @{

	/**
	*   @brief Converts an angle in integer degrees to radians.
	*		\f[\alpha_{rad}=\alpha_{deg\ int}\frac{\pi}{180}\f]
	*
	*	See https://en.wikipedia.org/wiki/Radian
	*   @param integerDegree \f$\alpha_{deg\ int}\ (deg\ int)\f$ is the angle in integer degrees.
	*   @return \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
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
	T IntegerDegreeToRadian(const T& integerDegree);

	/**
	*   @brief Converts an angle in integer degrees to milliradians.
	*		\f[\alpha_{mrad}=\alpha_{deg\ int}\frac{\pi}{180}*10^3\f]
	*
	*	See https://en.wikipedia.org/wiki/Milliradian
	*   @param integerDegree \f$\alpha_{deg\ int}\ (deg\ int)\f$ is the angle in integer degrees.
	*   @return \f$\alpha_{mrad}\ (mrad)\f$ is the angle in milliradians.
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
	T IntegerDegreeToMilliradian(const T& integerDegree);

	/**
	*   @brief Converts an angle in integer degrees to turn.
	*		\f[\alpha_{turn}=\alpha_{deg\ int}\frac{1}{360}\f]
	*
	*	See https://en.wikipedia.org/wiki/Turn_(geometry)
	*   @param integerDegree \f$\alpha_{deg\ int}\ (deg\ int)\f$ is the angle in integer degrees.
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
	T IntegerDegreeToTurn(const T& integerDegree);

	/**
	*   @brief Converts an angle in integer degree to (decimal) degree.
	*		\f[\alpha_{deg}=\alpha_{deg\ int}\f]
	*
	*	See https://en.wikipedia.org/wiki/Degree_(angle) and https://en.wikipedia.org/wiki/Decimal_degrees
	*   @param integerDegree \f$\alpha_{deg\ int}\ (deg\ int)\f$ is the angle in integer degree.
	*   @return \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) degree.
	*	@see IntegerDegreeToDecimalDegree() for alias.
	*	@see IntegerDegreeToArcdegree() for alias.
	*	@see DegreeToDegree() for conversion from (decimal) degrees.
	*	@see DecimalDegreeToDegree() for conversion from decimal degrees.
	*	@see RadianToDegree() for conversion from radians.
	*	@see IntegerDegreeToDegree() for conversion from integer degrees.
	*	@see BinaryDegreeToDegree() for conversion from binary degrees.
	*	@see TurnToDegree() for conversion from turns.
	*	@see GradianToDegree() for conversion from gradians.
	*	@see HoursMinutesSecondsToDegree() for conversion from hours minutes seconds.
	*	@see DegreesMinutesSecondsToDegree() for conversion from degrees minutes seconds.
	*	@see CompassWindToDegree() for conversion from compass wind.
	*/
	template<typename T>
	T IntegerDegreeToDegree(const T& integerDegree);

	/**
	*   @brief Converts an angle in integer degree to decimal degree.
	*		\f[\alpha_{deg}=\alpha_{deg\ int}\f]
	*
	*	See https://en.wikipedia.org/wiki/Degree_(angle) and https://en.wikipedia.org/wiki/Decimal_degrees
	*   @param integerDegree \f$\alpha_{deg\ int}\ (deg\ int)\f$ is the angle in integer degree.
	*   @return \f$\alpha_{deg}\ (deg)\f$ is the angle in decimal degree.
	*	@see IntegerDegreeToDegree() for alias.
	*	@see IntegerDegreeToArcdegree() for alias.
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
	T IntegerDegreeToDecimalDegree(const T& integerDegree);

	/**
	*   @brief Converts an angle in integer degree to (decimal) arc degree.
	*		\f[\alpha_{deg}=\alpha_{deg\ int}\f]
	*
	*	See https://en.wikipedia.org/wiki/Degree_(angle) and https://en.wikipedia.org/wiki/Decimal_degrees
	*   @param integerDegree \f$\alpha_{deg\ int}\ (deg\ int)\f$ is the angle in integer degrees.
	*   @return \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) arc degree.
	*	@see IntegerDegreeToDegree() for alias.
	*	@see IntegerDegreeToDecimalDegree() for alias.
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
	T IntegerDegreeToArcdegree(const T& integerDegree);

	/**
	*   @brief Converts an angle in integer degree to binary degree (brad).
	*		\f[\alpha_{deg\ bin}=round(\alpha_{deg\ int}\frac{2^{(n-1)}}{360})\f]
	*	Where \f$n\f$ is the number of bits avaliable to store the number. \f$n\f$ defaults to 8, the tradiational number for binary degrees.
	*
	*	See https://en.wikipedia.org/wiki/Binary_scaling#Binary_angles and https://www.globalspec.com/reference/14722/160210/Chapter-7-5-3-Binary-Angular-Measure
	*   @param integerDegree \f$\alpha_{deg\ int}\ (deg\ int)\f$ is the angle in integer degrees.
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
	T IntegerDegreeToBinaryDegree(const T& integerDegree, const T2& bits = 8);

	/**
	*   @brief Converts an angle in integer degree to arcminute. Note that arcminutes are not equal to minutes.
	*		\f[\alpha_{arcmin}= 60 * \alpha_{deg\ int}\f]
	*
	*	See https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	*   @param integerDegree \f$\alpha_{deg\ int}\ (deg\ int)\f$ is the angle in integer degrees.
	*   @return \f$\alpha_{arcmin}\ (arcmin)\f$ is the angle in arcminutes. Note that this is 1/60 of an degree. It is not equal to minutes.
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
	T IntegerDegreeToArcminute(const T& integerDegree);

	/**
	*   @brief Converts an angle in integer degree to arcsecond. Note that arcsecond are not equal to seconds.
	*		\f[\alpha_{arcsec}=60 * 60 * \alpha_{deg\ int}\f]
	*
	*	See https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	*   @param integerDegree \f$\alpha_{deg\ int}\ (deg\ int)\f$ is the angle in integer degrees.
	*   @return \f$\alpha_{arcsec}\ (arcsec)\f$ is the angle in arcseconds. Note that this is 1/60 of a arcminute, not minute. It is not equal to seconds.
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
	T IntegerDegreeToArcsecond(const T& integerDegree);

	/**
	*   @brief Converts an angle in integer degree to milliarcsecond.
	*		\f[\alpha_{mas}=60 * 60 * 10^3 * \alpha_{deg\ int} \f]
	*
	*	See https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	*   @param integerDegree \f$\alpha_{deg\ int}\ (deg\ int)\f$ is the angle in integer degrees.
	*   @return \f$\alpha_{mas}\ (mas)\f$ is the angle in milliarcseconds.
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
	T IntegerDegreeToMilliarcsecond(const T& integerDegree);


	/**
	*   @brief Converts an angle in integer degree to microarcsecond.
	*		\f[\alpha_{\mu as}=60 * 60 * 10^6 * \alpha_{deg\ int}\f]
	*
	*	See https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	*   @param integerDegree \f$\alpha_{deg\ int}\ (deg\ int)\f$ is the angle in integer degrees.
	*   @return \f$\alpha_{\mu as}\ (\mu as)\f$ is the angle in microarcseconds.
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
	T IntegerDegreeToMicroarcsecond(const T& integerDegree);

	/**
	*   @brief Converts an angle in integer degree to degrees minutes seconds (DMS). \f${DD}^{\circ}{MM}'{SS.SS}''\f$ format.
	*		\f[degree=\alpha_{deg\ int}\f]
	*		\f[arcminute= 0\f]
	*		\f[arcsecond= 0\f]
	*
	*	See https://en.wikipedia.org/wiki/Geographic_coordinate_conversion and https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	*   @param integerDegree \f$\alpha_{deg\ int}\ (deg\ int)\f$ is the angle in integer degrees.
	*	@param degree \f$degree\ (deg\ int)\f$ is the angle in integer degrees.
	*	@param arcminute \f$arcminute\ (arcmin)\f$ is the angle in arcminutes in whole numbers. Note that this is 1/60 of an degree. It is not equal to minutes.
	*   @param arcsecond \f$arcsecond\ (arcsec)\f$ is the angle in arcseconds. Note that this is 1/60 of a arcminute, not minute. It is not equal to seconds.
	*	@see IntegerDegreeToDMS() for alias.
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
	void IntegerDegreeToDegreesMinutesSeconds(const T& integerDegree, T& degree, T& arcminute, T& arcsecond);

	/**
	*   @brief Converts an angle in integer degree to degrees minutes seconds (DMS). \f${DD}^{\circ}{MM}'{SS.SS}''\f$ format.
	*		\f[degree=\alpha_{deg\ int}\f]
	*		\f[arcminute= 0\f]
	*		\f[arcsecond= 0\f]
	*
	*	See https://en.wikipedia.org/wiki/Geographic_coordinate_conversion and https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	*   @param integerDegree \f$\alpha_{deg\ int}\ (deg\ int)\f$ is the angle in integer degrees.
	*	@param degree \f$degree\ (deg int)\f$ is the angle in integer degrees.
	*	@param arcminute \f$arcminute\ (arcmin)\f$ is the angle in arcminutes in whole numbers. Note that this is 1/60 of an degree. It is not equal to minutes.
	*   @param arcsecond \f$arcsecond\ (arcsec)\f$ is the angle in arcseconds. Note that this is 1/60 of a arcminute, not minute. It is not equal to seconds.
	*	@see IntegerDegreeToDegreesMinutesSeconds() for alias.
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
	void IntegerDegreeToDMS(const T& integerDegree, T& degree, T& arcminute, T& arcsecond);

	/**
	*   @brief Converts an angle in integer degree to hours minutes seconds (HMS). \f${HH}^{h}{MM}^{m}{SS.SS}^{s}\f$ format.
	*		\f[hour=trun(\frac{\alpha_{deg\ int}}{15})\f]
	*		\f[minute=trun(60 * |\frac{\alpha_{deg\ int}}{15} - hour|)\f]
	*		\f[second=60 * ((60 * |\frac{\alpha_{deg\ int}}{15} - hour|)-minute)\f]
	*
	*	See and https://en.wikipedia.org/wiki/Right_ascension and https://en.wikipedia.org/wiki/Hour_angle
	*   @param integerDegree \f$\alpha_{deg\ int}\ (deg\ int)\f$ is the angle in integer degrees.
	*	@param hour \f$hour\ (hour)\f$ is the angle in hours.
	*	@param minute \f$minute\ (min)\f$ is the angle in minutes in whole numbers. Note that this is 1/60 of an hour. It is not equal to arcminutes.
	*   @param second \f$second\ (sec)\f$ is the angle in seconds. Note that this is 1/60 of a minute, not arcminute. It is not equal to arcseconds.
	*	@see IntegerDegreeToHMS() for alias.
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
	void IntegerDegreeToHoursMinutesSeconds(const T& integerDegree, T& hour, T& minute, T& second);


	/**
	*   @brief Converts an angle in integer degree to hours minutes seconds (HMS). \f${HH}^{h}{MM}^{m}{SS.SS}^{s}\f$ format.
	*		\f[hour=trun(\frac{\alpha_{deg\ int}}{15})\f]
	*		\f[minute=trun(60 * |\frac{\alpha_{deg\ int}}{15} - hour|)\f]
	*		\f[second=60 * ((60 * |\frac{\alpha_{deg\ int}}{15} - hour|)-minute)\f]
	*
	*	See and https://en.wikipedia.org/wiki/Right_ascension and https://en.wikipedia.org/wiki/Hour_angle
	*   @param integerDegree \f$\alpha_{deg\ int}\ (deg\ int)\f$ is the angle in integer degrees.
	*	@param hour \f$hour\ (hour)\f$ is the angle in hours.
	*	@param minute \f$minute\ (min)\f$ is the angle in minutes in whole numbers. Note that this is 1/60 of an hour. It is not equal to arcminutes.
	*   @param second \f$second\ (sec)\f$ is the angle in seconds. Note that this is 1/60 of a minute, not arcminute. It is not equal to arcseconds.
	*	@see IntegerDegreeToHoursMinutesSeconds() for alias.
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
	void IntegerDegreeToHMS(const T& integerDegree, T& hour, T& minute, T& second);

	/**
	*   @brief Converts an angle in integer degree to gradian.
	*		\f[\alpha_{g}=\alpha_{deg\ int}\frac{10}{9}\f]
	*
	*	See https://en.wikipedia.org/wiki/Gradian
	*   @param integerDegree \f$\alpha_{deg\ int}\ (deg\ int)\f$ is the angle in integer degrees.
	*   @return \f$\alpha_{g}\ (g)\f$ is the angle in gradians.
	*	@see IntegerDegreeToGon() for alias.
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
	T IntegerDegreeToGradian(const T& integerDegree);

	/**
	*   @brief Converts an angle in integer to gradians.
	*		\f[\alpha_{g}=\alpha_{deg\ int}\frac{10}{9}\f]
	*
	*	See https://en.wikipedia.org/wiki/Gradian
	*   @param integerDegree \f$\alpha_{deg\ int}\ (deg\ int)\f$ is the angle in integer degrees.
	*   @return \f$\alpha_{g}\ (g)\f$ is the angle in gradians.
	*	@see IntegerDegreeToGradian() for alias.
	*	@see DegreeToGon() for conversion from decimal degrees.
	*	@see DecimalDegreeToGon() for conversion from decimal degrees.
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
	T IntegerDegreeToGon(const T& integerDegree);


	/**
	*   @brief Converts an angle in integer degree to a n-Wind compass point name.
	*
	*	See https://en.wikipedia.org/wiki/Points_of_the_compass
	*   @param integerDegree \f$\alpha_{deg\ int}\ (deg\ int)\f$ is the angle in integer degrees.
	*	@param winds \f$winds\ (int)\f$ The number of points(names) that the compass should have. Must be 2,4,8,16 or 32.
	*   @param abbreviate \f$abbreviate\ (bool)\f$ should the compass point name be abbreviated.
	*   @return \f$point\ name\ (dimensionless)\f$ is the name of the compass point.
	*	@see DegreeToCompassWind() for full explination of conversion and conversion from decimal degrees.
	*	@see DecimalDegreeToCompassWind() for conversion from decimal degrees.
	*	@see RadianDegreeToCompassWind() for conversion from radians.
	*	@see IntegerDegreeToCompassWind() for conversion from integer degrees.
	*	@see BinaryDegreeToCompassWind() for conversion from binary degrees.
	*	@see TurnToCompassWind() for conversion from binary degrees.
	*	@see GradianToCompassWind() for conversion from gradians.
	*	@see HoursMinutesSecondsToCompassWind() for conversion from hours minutes seconds.
	*	@see DegreesMinutesSecondsToCompassWind() for conversion from degrees minutes seconds.
	*	@see CompassWindToCompassWind() for conversion from degrees minutes seconds.
	*/
	template<typename T>
	std::string IntegerDegreeToCompassWind(const T& integerDegree, const unsigned int winds, const bool abbreviate);

	/// @}
} //namespace EGXMath

#include "IntegerDegreeConversion.inl"
