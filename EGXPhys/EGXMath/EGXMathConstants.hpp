/// @file EGXMath/EGXMath.hpp
///
/// @brief Link to all header files that includes constants.
///
/// @author Elliot Grafil 
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

/// @addtogroup EGXPhys-Constants-Macros
/// @{
/**
*   \def EGXPHYS_CONSTANT
*   @brief Changes constant variable definition depending upon what version of C/C++ is used to compile the code.
*/

#ifdef __cplusplus  //Check if C++
#ifdef EGXMATH_PRECXX11
#define EGXMATH_CONSTANT static const double
#else
#define EGXMATH_CONSTANT static constexpr double
#endif
#else   //For C
#define EGXMATH_CONSTANT static const double
#endif

/// @}

namespace EGXMath
{
	//Only works for C++14 + should figure out a way to check for it.
	//template<typename T> constexpr T pi = T(3.141592653589793238462643383L);
    EGXMATH_CONSTANT pi = 3.141592653589793238462643383;
// Time
    EGXMATH_CONSTANT minute = 60.0;											/**< \f$t_{min}\ (s)\f$ Seconds in a minute in seconds.*/
	EGXMATH_CONSTANT secondsInMinute = minute;								/**< \f$t_{min}\ (s)\f$ Seconds in a minute in seconds.*/
	EGXMATH_CONSTANT hour = 60.0*minute;										/**< \f$t_{h}\ (s)\f$ Seconds in an hour in seconds.*/
	EGXMATH_CONSTANT secondsInHour = hour;									/**< \f$t_{h}\ (s)\f$ Seconds in an hour in seconds.*/
	EGXMATH_CONSTANT day = 24.0*hour;											/**< \f$t_{day}\ (s)\f$ Seconds in a day in seconds.*/
	EGXMATH_CONSTANT secondsInDay = day;									/**< \f$t_{day}\ (s)\f$ Seconds in a day in seconds.*/
	EGXMATH_CONSTANT year = 365.25*day;										/**< \f$t_{year}\ (s)\f$ Seconds in a year in seconds.*/
	EGXMATH_CONSTANT secondsInYear = year;									/**< \f$t_{year}\ (s)\f$ Seconds in a year in seconds.*/

} //namespace EGXMath

