/// @file EGXPhys/Astrophysics/RightAscension.hpp
///
/// @brief Calculates co-ordinate transformations of Right Ascension and Declination.
///
/// @author Elliot Grafil (Metex)
/// @date 3/29/18

/// @defgroup EGXPhys-Astrophysics-RightAscension Right Ascension
/// @ingroup EGXPhys-Astrophysics

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <cmath>  

#include "AstrophysicsConstants.hpp"
#include "./../EGXMath/EGXMath.hpp"
//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{
	/// @addtogroup EGXPhys-Astrophysics-RightAscension
	/// @{
	
	/**
	*   @brief Converts right ascensions \f$(\alpha_{RA})\f$ from hours \f$(RA_h)\f$, minutes \f$(RA_m)\f$ and seconds\f$(RA_s)\f$ to degrees.
	*   		\f[\alpha_{deg}=(15 RA_h + \frac{RA_m}{4} + \frac{RA_s}{240})\f]
	*
	*   See http://en.wikipedia.org/wiki/Right_ascension, http://en.wikipedia.org/wiki/Sidereal_hour_angle
	*	@param hour \f$RA_h\ (h)\f$ is the angle in hours in whole numbers.
	*	@param minute \f$RA_m\ (m)\f$ is the angle in minutes in whole numbers. Note that this is 1/60 of an hour. It is not equal to arcminutes.
	*   @param second \f$RA_s\ (s)\f$ is the angle in seconds. Note that this is 1/60 of a minute. It is not equal to arcseconds.
	*	@return \f$\alpha_{deg}\ (deg)\f$ is the angle in degrees.
	*	@see HoursMinutesSecondsToDegree() for alias.
	*	@see HMSToDegree() for alias.
	*	@see RightAscensionToRadian() for conversion from radians.
	*/
	template<typename T>
	T RightAscensionToDegree(const T hour, const T minute, const T second);

	/**
	*   @brief Converts right ascensions \f$(\alpha_{RA})\f$ from hours \f$(RA_h)\f$, minutes \f$(RA_m)\f$ and seconds\f$(RA_s)\f$ to radians.
	*   		\f[\alpha_{rad}=\frac{\pi}{180.0}(15 RA_h + \frac{RA_m}{4} + \frac{RA_s}{240})\f]
	*   See http://en.wikipedia.org/wiki/Right_ascension, http://en.wikipedia.org/wiki/Sidereal_hour_angle
	*
	*	@param hour \f$RA_h\ (h)\f$ is the angle in hours in whole numbers.
	*	@param minute \f$RA_m\ (m)\f$ is the angle in minutes in whole numbers. Note that this is 1/60 of an hour. It is not equal to arcminutes.
	*   @param second \f$RA_s\ (s)\f$ is the angle in seconds. Note that this is 1/60 of a minute. It is not equal to arcseconds.
	*	@return \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*	@see HoursMinutesSecondsToRadian() for alias.
	*	@see HMSToRadian() for alias.
	*	@see RightAscensionToDegree() for conversion from (decimal) degrees.
	*/
	template<typename T>
	T RightAscensionToRadian(const T hour, const T minute, const T second);

	/**
	*   @brief Converts an angle in (decimal) degree to hours minutes seconds (HMS). \f${HH}^{h}{MM}^{m}{SS.SS}^{s}\f$ format.
	*		\f[hour=trun(\frac{\alpha_{deg}}{15})\f]
	*		\f[minute=trun(60 * |\frac{\alpha_{deg}}{15} - hour|)\f]
	*		\f[second=60 * ((60 * |\frac{\alpha_{deg}}{15} - hour|)-minute)\f]
	*
	*	See and https://en.wikipedia.org/wiki/Right_ascension and https://en.wikipedia.org/wiki/Hour_angle
	*   @param decimalDegree \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) degrees.
	*	@param hour \f$RA_h\ (hour)\f$ is the angle in hours.
	*	@param minute \f$RA_m\ (min)\f$ is the angle in minutes in whole numbers. Note that this is 1/60 of an hour. It is not equal to arcminutes.
	*   @param second \f$RA_s\ (sec)\f$ is the angle in seconds. Note that this is 1/60 of a minute, not arcminute. It is not equal to arcseconds.
	*	@see DegreeToHoursMinutesSeconds() for alias.
	*	@see DegreeToHMS() for alias.
	*	@see RadianToRightAscension() for conversion from radians.
	*/
	template<typename T>
	void DegreeToRightAscension(const T decimalDegree, T& hour, T& minute, T& second);

	/**
	*   @brief Converts an angle in radian to hours minutes seconds (HMS). \f${HH}^h{MM}^m{SS.SS}^s\f$ format.
	*
	*	See and https://en.wikipedia.org/wiki/Right_ascension and https://en.wikipedia.org/wiki/Hour_angle
	*   @param radian \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*	@param hour \f$RA_h\ (h)\f$ is the angle in hours in whole numbers.
	*	@param minute \f$RA_m\ (m)\f$ is the angle in minutes in whole numbers. Note that this is 1/60 of an hour. It is not equal to arcminutes.
	*   @param second \f$RA_s\ (s)\f$ is the angle in seconds. Note that this is 1/60 of a minute. It is not equal to arcseconds.
	*	@see RadianToHoursMinutesSeconds() for alias.
	*	@see RadianToHMS() for alias.
	*	@see DegreeToRightAscension() for conversion from degrees.
	*/
	template<typename T>
	void RadianToRightAscension(const T radian, T& hour, T& minute, T& second);

    /// @}
} //namespace EGXPhys

#include "RightAscension.inl"
