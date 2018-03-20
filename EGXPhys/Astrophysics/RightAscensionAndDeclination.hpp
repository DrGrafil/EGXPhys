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
	// Right Ascension to Radians. Right ascension is in Sidereal hour angle (360degrees = 24 hours)
	// See http://en.wikipedia.org/wiki/Right_ascension, http://en.wikipedia.org/wiki/Sidereal_hour_angle
	template<typename T>
	T RightAscensionToRadians(const T hours, const T minutes, const T seconds);

	
	// Declination to Radians. Delination is in Sexagesimal(traditional degrees) system.
	// !!!WARNING!! Will return with0.0 rads pointing up Z axis and pi/2 pointing at positive X-axis
	// Think Spherical Co-ordinate system http://en.wikipedia.org/wiki/Spherical_coordinate_system
	double DeclinationToRad(const double degrees, const double arcminutes, const double arcseconds)
	{
		return (degrees * pi / 180.0 + arcminutes * pi / 10800.0 + arcseconds * pi / 648000.0);
	}


    /// @}
} //namespace EGXPhys

#include "RightAscensionAndDeclination.inl"
