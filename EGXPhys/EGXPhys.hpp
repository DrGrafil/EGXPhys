/// @file EGXPhys/EGXPhys.hpp
///
/// @brief EGXPhys main include file. 
///
/// @author Elliot Grafil (Metex)
/// @date 7/25/17
///
/// @defgroup EGXPhys EGXPhys Library
/// @brief Physics library to be used in a variety of physics and chemistry programs.

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <math.h>

#ifdef EGXPHYS_GLM
#define EGXMATH_GLM // Useing GLM
#endif // EGXPHYS_GLM
#include "EGXMath/EGXMath.hpp"
//=================================
// Forward declared dependencies
#ifdef EGXPHYS_GLM
#include <glm/fwd.hpp>
#endif // EGXPHYS_GLM
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
