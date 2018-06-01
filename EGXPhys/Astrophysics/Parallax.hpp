/// @file EGXPhys/Astrophysics/Parallax.hpp
///
/// @brief Calculates parallax and distance based on parallax.
///
/// @author Elliot Grafil (Metex)
/// @date 3/19/18

/// @defgroup EGXPhys-Astrophysic-Parallax Parallax
/// @ingroup EGXPhys-Astrophysics

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <math.h>  

#include "AstrophysicsConstants.hpp"

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{
	/// @addtogroup EGXPhys-Astrophysic-Parallax
	/// @{

    ParallaxToParsec(parallaxInArcseconds);
    ParallaxToAU(parallaxInArcseconds);
    ParallaxToLightYear(parallaxInArcseconds);
    ParallaxToMeters(parallaxInArcseconds);
    /// @}
} //namespace EGXPhys

#include "Parallax.inl"
