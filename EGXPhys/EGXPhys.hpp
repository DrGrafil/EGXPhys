/// @file EGXPhys/EGXPhys.hpp
///
/// @brief EGXPhys main include file. 
///
/// @author Elliot Grafil 
/// @date 7/25/17
///
/// @defgroup EGXPhys EGXPhys Library
/// @brief Physics library to be used in a variety of physics and chemistry programs.

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <cmath>

#define NISTCONST_COMMON_SYMBOLS_NAMES
#include "NISTConst/NISTConst.hpp"

#ifdef EGXPHYS_GLM
    #include <glm/glm.hpp>
    #define EGXMATH_GLM // Useing GLM
#endif // EGXPHYS_GLM

#include "EGXMath/EGXMath.hpp"
//=================================
// Forward declared dependencies


//=================================
//



#include "EGXPhysConstants.hpp"

#include "Acoustics/Acoustics.hpp"
#include "Astrophysics/Astrophysics.hpp"
#include "Atomic/Atomic.hpp"
#include "Kinematics/Kinematics.hpp"
#include "Kinetics/Kinetics.hpp"
#include "Electrodynamics/Electrodynamics.hpp"
#include "Optics/Optics.hpp"
#include "Plasma/Plasma.hpp"
#include "Quantum/Quantum.hpp"
#include "Relativity/Relativity.hpp"
#include "Thermodynamics/Thermodynamics.hpp"
