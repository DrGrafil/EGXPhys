/// @file EGXPhys/Astrophysics/StandardGravitationalParameter.hpp
///
/// @brief Calculates standard gravitational parameter of celestial bodies.
///
/// @author Elliot Grafil (Metex)
/// @date 4/19/18

/// @defgroup EGXPhys-Astrophysics-StandardGravitationalParameter Standard Gravitational Parameter
/// @ingroup EGXPhys-Astrophysics

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include "AstrophysicsConstants.hpp"
//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{
	/// @addtogroup EGXPhys-Astrophysics-StandardGravitationalParameter
	/// @{
	
	/**
	*   @brief Calculates the standard gravitational parameter, \f$\mu\f$, of a celestial body in meter cubed per second squared. The standard gravitational parameter is a product of the gravitational constant, \f$G\f$, and the mass, \f$M\f$, of the celestial body:
	*   		\f[\mu  = GM\f]
	*
	*   See https://en.wikipedia.org/wiki/Standard_gravitational_parameter
	*
	*   @param massInkg \f$M\ (kg)\f$ Mass of celestial body in kilograms.
	*   @return \f$\mu\ (\frac{m^3}{s^2})\f$ Standard gravitational parameter of celestial body in meter cubed per second squared.
	*/
	template<typename T>
	T StandardGravitationalParameter(const T massInkg);


    /// @}
} //namespace EGXPhys

#include "StandardGravitationalParameter.inl"
