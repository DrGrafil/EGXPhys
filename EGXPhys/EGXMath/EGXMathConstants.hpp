/// @file EGXMath/EGXMath.hpp
///
/// @brief Link to all header files that includes constants.
///
/// @author Elliot Grafil (Metex)
/// @date 3/19/18


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
	//Only works for C++14 + should figure out a way to check for it.
	//template<typename T> constexpr T pi = T(3.141592653589793238462643383L);
	const double pi = 3.141592653589793238462643383;
// Time
	const double minute = 60.0;											/**< \f$t_{min}\ (s)\f$ Seconds in a minute in seconds.*/
	const double secondsInMinute = minute;								/**< \f$t_{min}\ (s)\f$ Seconds in a minute in seconds.*/
	const double hour = 60.0*minute;										/**< \f$t_{h}\ (s)\f$ Seconds in an hour in seconds.*/
	const double secondsInHour = hour;									/**< \f$t_{h}\ (s)\f$ Seconds in an hour in seconds.*/
	const double day = 24.0*hour;											/**< \f$t_{day}\ (s)\f$ Seconds in a day in seconds.*/
	const double secondsInDay = day;									/**< \f$t_{day}\ (s)\f$ Seconds in a day in seconds.*/
	const double year = 365.25*day;										/**< \f$t_{year}\ (s)\f$ Seconds in a year in seconds.*/
	const double secondsInYear = year;									/**< \f$t_{year}\ (s)\f$ Seconds in a year in seconds.*/

} //namespace EGXMath

