/// @file EGXPhys/Astrophysics/PlanetaryMass.hpp
///
/// @brief Calculates the mass of a planet
///
/// @author Elliot Grafil (Metex)
/// @date 3/19/18

/// @defgroup EGXPhys-PlanetaryMass Planetary Mass
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
	/// @addtogroup EGXPhys-PlanetaryMass
	/// @{
	
	/** 
	*   @brief Calculates the planetary mass \f$(M)\f$ of a planet when comparing it to the mass of a reference planet \f$(m_{ref})\f$.
    *   		\f[M=\frac{m_{planet}}{m_{ref}}\f]
	*   See https://en.wikipedia.org/wiki/Planetary_mass
    *
	*   @param  planetMass \f$m_{planet}\ (kg)\f$ is the mass of the planet.
	*	@param  referenceMass \f$m_{ref}\ (kg)\f$ is the mass of the reference planet.
	*   @return \f$M\f$(dimensionless) Planetary mass. Mass ratio of a planet compared to a reference planet.
	*	@see PlanetaryEarthMass()  for \f$M\f$ equation using earth as a reference.
	*	@see PlanetaryLunarMass()  for \f$M\f$ equation using moon as a reference.
	*	@see PlanetaryJupiterMass() for \f$M\f$ equation using Jupiter as a reference.
	*	@see PlanetaryJovianMass() for \f$M\f$ equation using Jupiter as a reference.
	*	@see StellarMass() for \f$M\f$ equation used for star like objects.
	*/ 
    template<typename T>
    T PlanetaryMass(const T& planetMass, const T& referenceMass);
	  
	/**
	*   @brief Calculates the planetary mass \f$(M)\f$ of a planet when comparing it to the mass of Earth \f$(M_\oplus)\f$. Also known as Earth Mass.
	*   		\f[M=\frac{m_{planet}}{M_\oplus}\f]
	*   See https://en.wikipedia.org/wiki/Earth_mass
	*
	*   @param  planetMass \f$m_{planet}\ (kg)\f$ is the mass of the planet.
	*   @return \f$M\f$(dimensionless) Planetary mass. Mass ratio of a planet compared to Earth.
	*	@see PlanetaryMass() for \f$M\f$ equation using any planet as a reference.
	*	@see PlanetaryLunarMass()  for \f$M\f$ equation using moon as a reference.
	*	@see PlanetaryJupiterMass() for \f$M\f$ equation using Jupiter as a reference.
	*	@see PlanetaryJovianMass() for \f$M\f$ equation using Jupiter as a reference.
	*	@see StellarMass() for \f$M\f$ equation used for star like objects.
	*/
	template<typename T>
	T PlanetaryEarthMass(const T& planetMass);

	/**
	*   @brief Calculates the planetary mass \f$(M)\f$ of a planet when comparing it to the mass of the Moon \f$(M_L)\f$. Also known as Lunar Mass.
	*   		\f[M=\frac{m_{planet}}{M_L}\f]
	*   See https://en.wikipedia.org/wiki/Planetary_mass
	*
	*   @param  planetMass \f$m_{planet}\ (kg)\f$ is the mass of the planet.
	*   @return \f$M\f$(dimensionless) Planetary mass. Mass ratio of a planet compared to the Moon.
	*	@see PlanetaryMass() for \f$M\f$ equation using any planet as a reference.
	*	@see PlanetaryEarthMass() for \f$M\f$ equation using earth as a reference.
	*	@see PlanetaryJupiterMass() for \f$M\f$ equation using Jupiter as a reference.
	*	@see PlanetaryJovianMass() for \f$M\f$ equation using Jupiter as a reference.
	*	@see StellarMass() for \f$M\f$ equation used for star like objects.
	*/
	template<typename T>
	T PlanetaryLunarMass(const T& planetMass);

	/**
	*   @brief Calculates the planetary mass \f$(M)\f$ of a planet when comparing it to the mass of Jupiter \f$(M_J)\f$. Also known as Jupiter Mass.
	*   		\f[M=\frac{m_{planet}}{M_J}\f]
	*   See https://en.wikipedia.org/wiki/Jupiter_mass
	*
	*   @param  planetMass \f$m_{planet}\ (kg)\f$ is the mass of the planet.
	*   @return \f$M\f$(dimensionless) Planetary mass. Mass ratio of a planet compared to Jupiter.
	*	@see PlanetaryMass() for \f$M\f$ equation using any planet as a reference.
	*	@see PlanetaryEarthMass() for \f$M\f$ equation using earth as a reference.
	*	@see PlanetaryLunarMass() for \f$M\f$ equation using moon as a reference.
	*	@see PlanetaryJovianMass() for \f$M\f$ equation using Jupiter as a reference.
	*	@see StellarMass() for \f$M\f$ equation used for star like objects.
	*/
	template<typename T>
	T PlanetaryJupiterMass(const T& planetMass);

	/**
	*   @brief Calculates the planetary mass \f$(M)\f$ of a planet when comparing it to the mass of Jupiter \f$(M_J)\f$. Also known as Jovian Mass.
	*   		\f[M=\frac{m_{planet}}{M_J}\f]
	*   See https://en.wikipedia.org/wiki/Jupiter_mass
	*
	*   @param  planetMass \f$m_{planet}\ (kg)\f$ is the mass of the planet.
	*   @return \f$M\f$(dimensionless) Planetary mass. Mass ratio of a planet compared to Jupiter.
	*	@see PlanetaryMass() for \f$M\f$ equation using any planet as a reference.
	*	@see PlanetaryEarthMass()  for \f$M\f$ equation using earth as a reference.
	*	@see PlanetaryLunarMass()  for \f$M\f$ equation using moon as a reference.
	*	@see PlanetaryJupiterMass() for \f$M\f$ equation using Jupiter as a reference.
	*	@see StellarMass() for \f$M\f$ equation used for star like objects.
	*/
	template<typename T>
	T PlanetaryJovianMass(const T& planetMass);
    
    /// @}
} //namespace EGXPhys

#include "PlanetaryMass.inl"
