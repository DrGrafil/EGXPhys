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

#include "EGXMath/EGXMath.hpp"

//=================================
// Forward declared dependencies

//=================================
//

/// @defgroup EGXPhys-Constants-Macros Macros
/// @ingroup EGXPhys-Constants

/// @defgroup EGXPhys-Constants Constants
/// @ingroup EGXPhys

//=================================
// MACRO Definitions

/// @addtogroup EGXPhys-Constants-Macros
/// @{
/**
*   \def EGXPHYS_CONSTANT
*   @brief Changes constant variable definition depending upon what version of C/C++ is used to compile the code.
*/

#ifdef __cplusplus  //Check if C++
#ifdef EGXPHYS_PRECXX11
#define EGXPHYS_CONSTANT static const double
#else
#define EGXPHYS_CONSTANT static constexpr double
#endif
#else   //For C
#define EGXPHYS_CONSTANT static const double
#endif

/// @}





namespace EGXPhys
{
	using namespace EGXMath;
    // Universal Constants
    EGXPHYS_CONSTANT AU = 149597870700.0;									/**< \f$au\ (au)\f$ Astronomical units in meters.*/

	// Time
    EGXPHYS_CONSTANT secondsInMinute = 60.0;								/**< \f$min\ (s)\f$ Amount of seconds inside a minute.*/
    EGXPHYS_CONSTANT secondsInHour = 60.0 * minute;							/**< \f$hr\ (s)\f$ Amount of seconds inside an hour.*/
    EGXPHYS_CONSTANT secondsInDay = 24.0 * hour;							/**< \f$min\ (s)\f$ Amount of seconds inside a day.*/
    EGXPHYS_CONSTANT secondsInYear = 365.25*day;							/**< \f$min\ (s)\f$ Amount of seconds inside a year (365.25 days). See https://www.iau.org/static/publications/stylemanual1989.pdf */
} //namespace EGXPhys

