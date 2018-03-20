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
} //namespace EGXPhys

