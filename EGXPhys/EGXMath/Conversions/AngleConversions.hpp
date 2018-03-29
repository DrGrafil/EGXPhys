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

#include "./AngularConversions/DegreeConversion.hpp"
#include "./AngularConversions/DecimalDegreeConversion.hpp"
#include "./AngularConversions/IntegerDegreeConversion.hpp"
#include "./AngularConversions/RadianConversion.hpp"
#include "./AngularConversions/TurnConversion.hpp"
