/// @file EGXMath/Conversions/AngleConversions.hpp
///
/// @brief Converts angle measurements into various styles such as radians, degrees, DMS, HMS.
///
/// @author Elliot Grafil (Metex)
/// @date 3/20/18

/// @defgroup EGXMath-Conversions-AngleConversions Angle Conversions
/// @ingroup EGXMath-Conversions


//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <cmath>  
#include <string>
#include "../../EGXMathConstants.hpp"

//=================================
// Forward declared dependencies

//=================================
//
#include "DegreeConversion.hpp"

#include "DecimalDegreeConversion.hpp"
#include "DegreesMinutesSecondsConversion.hpp"
#include "DMSConversion.hpp"
#include "GonConversion.hpp"
#include "GradianConversion.hpp"
#include "HMSConversion.hpp"
#include "HoursMinutesSecondsConversion.hpp"
#include "IntegerDegreeConversion.hpp"
#include "RadianConversion.hpp"
#include "TurnConversion.hpp"
