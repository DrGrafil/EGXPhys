/// @file EGXMath/Conversions/AngleConversions.hpp
///
/// @brief Converts angle measurements into various styles such as radians, degrees, DMS, HMS.
///
/// @author Elliot Grafil (Metex)
/// @date 3/20/18

/// @defgroup EGXMath-AngleConversions Angle Conversions
/// @ingroup EGXMath


//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <math.h>  
#include <string>
#include "../EGXMathConstants.hpp"

//=================================
// Forward declared dependencies

//=================================
//
#include "./AngleConversions/DegreeConversion.hpp"

#include "./AngleConversions/DecimalDegreeConversion.hpp"
#include "./AngleConversions/DegreesMinutesSecondsConversion.hpp"
#include "./AngleConversions/DMSConversion.hpp"
#include "./AngleConversions/GonConversion.hpp"
#include "./AngleConversions/GradianConversion.hpp"
#include "./AngleConversions/HMSConversion.hpp"
#include "./AngleConversions/HoursMinutesSecondsConversion.hpp"
#include "./AngleConversions/IntegerDegreeConversion.hpp"
#include "./AngleConversions/RadianConversion.hpp"
#include "./AngleConversions/TurnConversion.hpp"
