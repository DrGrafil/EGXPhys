/// @file EGXMath/EGXMath.hpp
///
/// @brief EGXMath main include file. 
///
/// @author Elliot Grafil (Metex)
/// @date 7/25/17
///
/// @defgroup EGXMath EGXMath Library
/// @brief Math library to be used in a variety of physics and chemistry programs.

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <cmath>

#ifdef EGXMATH_GLM // Useing GLM
#include <glm/glm.hpp>
#endif // EGXMATH_GLM

//=================================
// Forward declared dependencies

//=================================
//

#include "EGXMathConstants.hpp"

#include "./Conversions/Conversions.hpp"
#include "./Functions/Functions.hpp"
#include "./Geometry/Geometry.hpp"
#include "./Random/Random.hpp"

