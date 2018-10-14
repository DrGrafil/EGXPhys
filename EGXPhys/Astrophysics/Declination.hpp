/// @file EGXPhys/Astrophysics/Declination.hpp
///
/// @brief Calculates co-ordinate transformations of Declination.
///
/// @author Elliot Grafil (Metex)
/// @date 3/29/18

/// @defgroup EGXPhys-Astrophysics-Declination Declination
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
	/// @addtogroup EGXPhys-Astrophysics-Declination
	/// @{
	
		/**
		*   @brief Converts declination \f$(\alpha_{DE})\f$ from degrees \f$(DE_{deg})\f$, arcminutes \f$(DE_{arcmin})\f$ and arcseconds\f$(DE_{arcsec})\f$ to (decimal) degrees.
		*   		\f[\alpha_{deg}=DE_{deg} + \frac{DE_{arcmin}}{60} + \frac{DE_{arcsec}}{3600} \f]
		*	See https://en.wikipedia.org/wiki/Declination, https://en.wikipedia.org/wiki/Geographic_coordinate_conversion and https://en.wikipedia.org/wiki/Minute_and_second_of_arc
		*
		*	@param integerDegree \f$degree\ (deg)\f$ is the angle in degrees in whole numbers.
		*	@param arcminute \f$arcminute\ (arcmin)\f$ is the angle in arcminute in whole numbers. Note that this is 1/60 of an degree. It is not equal to minutes.
		*   @param arcsecond \f$arcsecond\ (arcsec)\f$ is the angle in arcsecond. Note that this is 1/60 of a arcminute, not minute. It is not equal to seconds.
		*	@return \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) degrees.
		*	@see DegreesMinutesSecondsToDegree() for alias.
		*	@see DMSToDegree() for alias.
		*	@see DeclinationToRadian() for conversion from radians.
		*/
	template<typename T>
	T DeclinationToDegree(const T integerDegree, const T arcminute, const T arcsecond);


	/**
	*   @brief Converts an angle in (decimal) degree to declination in degrees \f$(DE_{deg})\f$, arcminutes \f$(DE_{arcmin})\f$ and arcseconds\f$(DE_{arcsec})\f$ (DMS). \f${DD}^{\circ}{MM}'{SS.SS}''\f$ format.
	*		\f[DE_{deg}=trun(\alpha_{deg})\f]
	*		\f[DE_{arcmin}=trun(60 * |\alpha_{deg} - degree|)\f]
	*		\f[DE_{arcsec}=60 * ((60 * |\alpha_{deg} - degree|)-arcminute)\f]
	*
	*	Where trunc is the integer truncation command.
	*
	*	See https://en.wikipedia.org/wiki/Declination, https://en.wikipedia.org/wiki/Geographic_coordinate_conversion and https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	*   @param decimalDegree \f$\alpha_{deg}\ (deg)\f$ is the angle in (decimal) degrees.
	*	@param integerDegree \f$degree\ (deg int)\f$ is the angle in integer degrees.
	*	@param arcminute \f$arcminute\ (arcmin)\f$ is the angle in arcminutes in whole numbers. Note that this is 1/60 of an degree. It is not equal to minutes.
	*   @param arcsecond \f$arcsecond\ (arcsec)\f$ is the angle in arcseconds. Note that this is 1/60 of a arcminute, not minute. It is not equal to seconds.
		@see DegreeToDegreesMinutesSeconds() for alias.
	*	@see DegreeToDMS() for alias.
	*	@see DecimalDegreeToDegreesMinutesSeconds() for alias.
	*	@see DecimalDegreeToDMS() for alias.
	*	@see RadianToDeclination() for conversion from radians.
	*/
	template<typename T>
	void DegreeToDeclination(const T decimalDegree, T& integerDegree, T& arcminute, T& arcsecond);

	/**
	*   @brief Converts declination \f$(\alpha_{DE})\f$ from degrees \f$(DE_{deg})\f$, arcminutes \f$(DE_{arcmin})\f$ and arcseconds\f$(DE_{arcsec})\f$ to radians.
	*   		\f[\alpha_{rad}=\frac{\pi}{180}(DE_{deg} + \frac{DE_{arcmin}}{60} + \frac{DE_{arcsec}}{3600})\f]
	*	See https://en.wikipedia.org/wiki/Declination, https://en.wikipedia.org/wiki/Geographic_coordinate_conversion and https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	*
	*	@param integerDegree \f$degree\ (deg)\f$ is the angle in degrees in whole numbers.
	*	@param arcminute \f$arcminute\ (arcmin)\f$ is the angle in arcminute in whole numbers. Note that this is 1/60 of an degree. It is not equal to minutes.
	*   @param arcsecond \f$arcsecond\ (arcsec)\f$ is the angle in arcsecond. Note that this is 1/60 of a arcminute, not minute. It is not equal to seconds.
	*	@return \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*	@see DegreesMinutesSecondsToRadian() for alias.
	*	@see DMSToRadian() for alias.
	*	@see DeclinationToDegree() for conversion from (decimal) degrees.
	*/
	template<typename T>
	T DeclinationToRadian(const T integerDegree, const T arcminute, const T arcsecond);

	/**
	*   @brief Converts an angle in radian to declination in degrees \f$(DE_{deg})\f$, arcminutes \f$(DE_{arcmin})\f$ and arcseconds\f$(DE_{arcsec})\f$ (DMS). \f${DD}^{\circ}{MM}'{SS.SS}''\f$ format.
	*		\f[DE_{deg}=trun(\frac{180}{\pi}\alpha_{rad})\f]
	*		\f[DE_{arcmin}=trun(60 * |\frac{180}{\pi}\alpha_{rad} - degree|)\f]
	*		\f[DE_{arcsec}=60 * ((60 * |\frac{180}{\pi}\alpha_{rad} - degree|)-arcminute)\f]

	*	See https://en.wikipedia.org/wiki/Declination, https://en.wikipedia.org/wiki/Geographic_coordinate_conversion and https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	*   @param radian \f$\alpha_{rad}\ (rad)\f$ is the angle in radians.
	*	@param integerDegree \f$degree\ (deg)\f$ is the angle in degrees in whole numbers.
	*	@param arcminute \f$arcminute\ (arcmin)\f$ is the angle in arcminute in whole numbers. Note that this is 1/60 of an degree. It is not equal to minutes.
	*   @param arcsecond \f$arcsecond\ (arcsec)\f$ is the angle in arcsecond. Note that this is 1/60 of a arcminute, not minute. It is not equal to seconds.
	*	@see RadianToDegreesMinutesSeconds() for alias.
	*	@see RadianToDMS() for alias.
	*	@see DegreeToDeclination() for conversion from (decimal) degrees.
	*/
	template<typename T>
	void RadianToDeclination(const T radian, T& integerDegree, T& arcminute, T& arcsecond);


    /// @}
} //namespace EGXPhys

#include "Declination.inl"
