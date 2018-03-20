/// @file EGXPhys/Astrophysics/PlanetaryMass.hpp
///
/// @brief Calculates the mass of a planet
///
/// @author Elliot Grafil (Metex)
/// @date 3/19/18

/// @defgroup PlanetaryMass Planetary Mass
/// @ingroup Astrophysics

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
	/// @addtogroup PlanetaryMass
	/// @{
	
	/** 
	*   @brief Calculates the planetary mass \f$(M)\f$ of a planet when comparing it to the mass of a reference planet \f$(m_{ref})\f$.
    *   		\f[M=\frac{m_{planet}}{m_{ref}}\f]
	*   See https://en.wikipedia.org/wiki/Planetary_mass
    *
	*   @param  planetMass \f$m_{planet}\ (kg)\f$ is the mass of the planet.
	*	@param  referenceMass \f$m_{ref}\ (kg)\f$ is the mass of the reference planet.
	*   @return \f$M\f$(dimensionless) M of planet in  for a planet when comparing it to a reference planet.
	*	@see PlanetaryEarthMass()  for \f$M\f$ equation using earth as reference.
	*	@see PlanetaryLunarMass()  for \f$M\f$ equation using moon as reference.
	*	@see PlanetaryJupiterMass() for \f$M\f$ equation using Jupiter as a reference.
	*	@see PlanetaryJovianMass() for \f$M\f$ equation using Jupiter as a reference.
	*	@see StellarMass() for \f$M\f$ equation used for star like objects.
	*/ 
    template<typename T>
    T PlanetaryMass(const T& planetMass, const T& referenceMass);
	  
	/**
	*   @brief Calculates the planetary mass \f$(M)\f$ of a planet when comparing it to the mass of Earth \f$(M_\oplus)\f$.
	*   		\f[M=\frac{m_{planet}}{M_\oplus}\f]
	*   See https://en.wikipedia.org/wiki/Earth_mass
	*
	*   @param  planetMass \f$m_{planet}\ (kg)\f$ is the mass of the planet.
	*   @return \f$M\f$(dimensionless) M of planet in  for a planet when comparing it to Earth.
	*	@see PlanetaryMass() for \f$M\f$ equation using any planet as reference.
	*	@see PlanetaryLunarMass()  for \f$M\f$ equation using moon as reference.
	*	@see PlanetaryJupiterMass() for \f$M\f$ equation using Jupiter as a reference.
	*	@see PlanetaryJovianMass() for \f$M\f$ equation using Jupiter as a reference.
	*	@see StellarMass() for \f$M\f$ equation used for star like objects.
	*/
	template<typename T>
	T PlanetaryEarthMass(const T& planetMass);

	/**
	*   @brief Calculates the planetary mass \f$(M)\f$ of a planet when comparing it to the mass of the Moon \f$(M_L)\f$.
	*   		\f[M=\frac{m_{planet}}{M_L}\f]
	*   See https://en.wikipedia.org/wiki/Planetary_mass
	*
	*   @param  planetMass \f$m_{planet}\ (kg)\f$ is the mass of the planet.
	*   @return \f$M\f$(dimensionless) M of planet in  for a planet when comparing it to the Moon.
	*	@see PlanetaryMass() for \f$M\f$ equation using any planet as reference.
	*	@see PlanetaryEarthMass()  for \f$M\f$ equation using earth as reference.
	*	@see PlanetaryJupiterMass() for \f$M\f$ equation using Jupiter as a reference.
	*	@see PlanetaryJovianMass() for \f$M\f$ equation using Jupiter as a reference.
	*	@see StellarMass() for \f$M\f$ equation used for star like objects.
	*/
	template<typename T>
	T PlanetaryLunarMass(const T& planetMass);

	/**
	*   @brief Calculates the planetary mass \f$(M)\f$ of a planet when comparing it to the mass of Jupiter \f$(M_J)\f$.
	*   		\f[M=\frac{m_{planet}}{M_J}\f]
	*   See https://en.wikipedia.org/wiki/Jupiter_mass
	*
	*   @param  planetMass \f$m_{planet}\ (kg)\f$ is the mass of the planet.
	*   @return \f$M\f$(dimensionless) M of planet in  for a planet when comparing it to Jupiter.
	*	@see PlanetaryMass() for \f$M\f$ equation using any planet as reference.
	*	@see PlanetaryEarthMass()  for \f$M\f$ equation using earth as reference.
	*	@see PlanetaryLunarMass()  for \f$M\f$ equation using moon as reference.
	*	@see PlanetaryJovianMass() for \f$M\f$ equation using Jupiter as a reference.
	*	@see StellarMass() for \f$M\f$ equation used for star like objects.
	*/
	template<typename T>
	T PlanetaryJupiterMass(const T& planetMass);

	/**
	*   @brief Calculates the planetary mass \f$(M)\f$ of a planet when comparing it to the mass of Jupiter \f$(M_J)\f$.
	*   		\f[M=\frac{m_{planet}}{M_J}\f]
	*   See https://en.wikipedia.org/wiki/Jupiter_mass
	*
	*   @param  planetMass \f$m_{planet}\ (kg)\f$ is the mass of the planet.
	*   @return \f$M\f$(dimensionless) M of planet in  for a planet when comparing it to Jupiter.
	*	@see PlanetaryMass() for \f$M\f$ equation using any planet as reference.
	*	@see PlanetaryEarthMass()  for \f$M\f$ equation using earth as reference.
	*	@see PlanetaryLunarMass()  for \f$M\f$ equation using moon as reference.
	*	@see PlanetaryJupiterMass() for \f$M\f$ equation using Jupiter as a reference.
	*	@see StellarMass() for \f$M\f$ equation used for star like objects.
	*/
	template<typename T>
	T PlanetaryJovianMass(const T& planetMass);
    
    /// @}
} //namespace EGXPhys

#include "PlanetaryMass.inl"
