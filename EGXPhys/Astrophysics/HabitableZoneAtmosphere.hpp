/// @file EGXPhys/Astrophysics/HabitableZoneAtmosphere.hpp
///
/// @brief Calculates habitable zone atmosphere of a planet
///
/// @author Elliot Grafil (Metex)
/// @date 7/30/18


/// @defgroup EGXPhys-Astrophysics-HabitableZoneAtmosphere Habitable Zone Atmosphere
/// @ingroup EGXPhys-Astrophysics

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <cmath>
//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{	
	/// @addtogroup EGXPhys-Astrophysics-HabitableZoneAtmosphere
	/// @{

    /** 
	*   @brief Calculates the Habitable Zone Atmosphere metric, \f$HZA\f$, of a planet. The Habitable Zone Atmosphere is a measure of the potential of an exoplanet to hold a habitable atmosphere.
	*	\f[ HZA= \dfrac{ 2\sqrt{ \dfrac{m_p}{m_{\oplus}} / \dfrac{r_p}{r_{\oplus}} } -v_{eH} - v_{eN} }{v_{eH} - v_{eN}} \f]
    *	\f[ v_{eH}=\sqrt{ \dfrac{z T_{eq}}{ M_wN } } \f]
    *	\f[ T_{eq}=\sqrt{ \dfrac{z T_{eq}}{ M_wH } } \f]
	*	
	*	Equations from http://phl.upr.edu/library/notes/habitablezoneatmospherehzaahabitabilitymetricforexoplanets 
	*
    *   @param planetMassInkg \f$m_{p}\ (kg)\f$ Mass of the planet in kilograms.
    *   @param planetMeanRadiusInm \f$r_{p}\ (m)\f$ Mean radius of the planet in meters.
    *   @param planetEquilibriumTemperatureInK \f$T_{eq}\ (K)\f$ Planetary equilibrium tempreture of a planet in kelvin.
    *   @return \f$HZA\ (dimensionless)\f$ Habitable Zone Atmosphere of a planet. Results between -1 and 1 means that the planet has the potential for a habitable atmospheric composition.
	*/    
    template<typename T>
    T HabitableZoneAtmosphere(const T planetMassInkg, const T planetMeanRadiusInm, const T planetEquilibriumTemperatureInK);
    /// @}
} //namespace EGXPhys

#include "HabitableZoneAtmosphere.inl"
