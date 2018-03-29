/// @file EGXPhys/Astrophysics/BVColor.hpp
///
/// @brief Calculates B-V Color of stars and related information derived from it.
///
/// @author Elliot Grafil (Metex)
/// @date 3/19/18

/// @defgroup EGXPhys-BVColor B-V Color
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
	/// @addtogroup EGXPhys-BVColor
	/// @{
	
	/**
	*   @brief Calculates the stellar mass \f$(M)\f$ of a star when comparing it to the mass of a reference star \f$(m_{ref})\f$.
	*   		\f[M=\frac{m_{star}}{m_{ref}}\f]
	*   See https://en.wikipedia.org/wiki/Stellar_mass
	*
	*   @param starMass \f$m_{star}\ (kg)\f$ is the mass of the star.
	*	@param referenceMass \f$m_{ref}\ (kg)\f$ is the mass of the reference star.
	*   @return \f$M\f$(dimensionless) Stellar mass. Mass ratio of a star compared to a reference star.
	*	@see PlanetaryMass() for \f$M\f$ equation used for planets size objects.
	*	@see StellarMass() for \f$M\f$ equation using a star as a reference.
	*	@see SolarMass() for \f$M\f$ equation using the Sun as a reference.
	*/
	//template<typename T>
	//T StellarMass(const T& starMass, const T& referenceMass);
	  
	/**
	*   @brief Calculates the solar mass \f$(M)\f$ of a star when comparing it to the mass of the sun \f$(m_\odot)\f$.
	*   		\f[M=\frac{m_{star}}{m_\odot}\f]
	*   See https://en.wikipedia.org/wiki/Solar_mass
	*
	*   @param starMass \f$m_{star}\ (kg)\f$ is the mass of the star.
	*   @return \f$M\f$(dimensionless) Solar mass. Mass ratio of a star compared to the sun.
	*	@see PlanetaryMass() for \f$M\f$ equation used for planets size objects.
	*	@see StellarMass() for \f$M\f$ equation using a star as a reference.
	*	@see SolarMass() for \f$M\f$ equation using the Sun as a reference.
	*/
	//template<typename T>
	//T SolarMass(const T& starMass);

    /// @}
} //namespace EGXPhys

#include "BVColor.inl"
