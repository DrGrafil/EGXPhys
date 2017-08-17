/// @file EGXPhys/EGXPhysConstants.hpp
///
/// @brief Link to all header files that includes constants.
///
/// @author Elliot Grafil (Metex)
/// @date 7/25/17


//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#define NISTCONST_COMMON_SYMBOLS_NAMES
#include "NISTConst/NISTConst.hpp"
//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{
// Time
	const double minute = 60;											/**< \f$t_{min}\ (s)\f$ Seconds in a minute in seconds.*/
	const double secondsInMinute = minute;								/**< \f$t_{min}\ (s)\f$ Seconds in a minute in seconds.*/
	const double hour = 60*minute;										/**< \f$t_{h}\ (s)\f$ Seconds in an hour in seconds.*/
	const double secondsInHour = hour;									/**< \f$t_{h}\ (s)\f$ Seconds in an hour in seconds.*/
	const double day = 24*hour;											/**< \f$t_{day}\ (s)\f$ Seconds in a day in seconds.*/
	const double secondsInDay = day;									/**< \f$t_{day}\ (s)\f$ Seconds in a day in seconds.*/
	const double year = 365.25*day;										/**< \f$t_{year}\ (s)\f$ Seconds in a year in seconds.*/
	const double secondsInYear = year;									/**< \f$t_{year}\ (s)\f$ Seconds in a year in seconds.*/
    // Universal Constants
	const double AU = 149597870700.0;									/**< \f$au\ (au)\f$ Astronomical units in meters.*/
} //namespace EGXPhys

