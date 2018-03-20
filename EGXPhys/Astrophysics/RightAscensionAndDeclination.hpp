/// @file EGXPhys/Astrophysics/RightAscensionAndDeclination.hpp
///
/// @brief Calculates co-ordinate transformations of Right Ascension and Declination.
///
/// @author Elliot Grafil (Metex)
/// @date 3/19/18

/// @defgroup RightAscensionAndDeclination Right Ascension And Declination
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
	/// @addtogroup RightAscensionAndDeclination
	/// @{
	


	/**
	*   @brief Converts right ascensions \f$(\alpha)\f$ from hours \f$(RA_h)\f$, minutes \f$(RA_m)\f$ and seconds\f$(RA_s)\f$ to radians.
	*   		\f[\alpha=\frac{pi}{180.0}(15 RA_h + \frac{RA_m}{4.0} + \frac{RA_s}{240.0})\f]
	*   See http://en.wikipedia.org/wiki/Right_ascension, http://en.wikipedia.org/wiki/Sidereal_hour_angle
	*
	*   @param starMass \f$m_{star}\ (kg)\f$ is the mass of the star.
	*	@param referenceMass \f$m_{ref}\ (kg)\f$ is the mass of the reference star.
	*   @return \f$M\f$(dimensionless) Stellar mass. Mass ratio of a star compared to a reference star.
	*	@see PlanetaryMass() for \f$M\f$ equation used for planets size objects.
	*	@see StellarMass() for \f$M\f$ equation using a star as a reference.
	*	@see SolarMass() for \f$M\f$ equation using the Sun as a reference.
	*/
	template<typename T>
	T RightAscensionToRadians(const T hours, const T minutes, const T seconds);

	
	template<typename T>
	void RadiansToRightAscension(const T radians, T& hours, T& minutes, T& seconds);

	// Declination to Radians. Delination is in Sexagesimal(traditional degrees) system.
	// !!!WARNING!! Will return with0.0 rads pointing up Z axis and pi/2 pointing at positive X-axis
	// Think Spherical Co-ordinate system http://en.wikipedia.org/wiki/Spherical_coordinate_system
	template<typename T>
	T DeclinationToRadians(const T degrees, const T arcminutes, const T arcseconds);

	template<typename T>
	void DeclinationToRadians(const T& radians, T& degrees, T& arcminutes, T& arcseconds);


    /// @}
} //namespace EGXPhys

#include "RightAscensionAndDeclination.inl"
