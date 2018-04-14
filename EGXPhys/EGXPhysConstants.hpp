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

#include "EGXMath/EGXMath.hpp"

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{
	using namespace EGXMath;
    // Universal Constants
	const double AU = 149597870700.0;									/**< \f$au\ (au)\f$ Astronomical units in meters.*/

	// Time
	const double secondsInMinute = 60.0;								/**< \f$min\ (s)\f$ Amount of seconds inside a minute.*/
	const double secondsInHour = 60.0 * minute;							/**< \f$hr\ (s)\f$ Amount of seconds inside an hour.*/
	const double secondsInDay = 24.0 * hour;							/**< \f$min\ (s)\f$ Amount of seconds inside a day.*/
	const double secondsInYear = 365.25*day;							/**< \f$min\ (s)\f$ Amount of seconds inside a year (365.25 days).*/
} //namespace EGXPhys

