/// @file EGXPhys/Astrophysics/HabitableZoneComposition.hpp
///
/// @brief Calculates habitable zone composition metric of a planet
///
/// @author Elliot Grafil (Metex)
/// @date 7/30/18


/// @defgroup EGXPhys-Astrophysics-HabitableZoneComposition Habitable Zone Composition
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
	/// @addtogroup EGXPhys-Astrophysics-HabitableZoneComposition
	/// @{

    /** 
	*   @brief Calculates the Habitable Zone Composition metric, \f$HZC\f$, of a planet. The Habitable Zone Composition(HZC) measures how compatible for life is the bulk composition of an exoplanet within the habitable zone. It estimates both the iron and water content of the planet.
	*	\f[ HZC= \dfrac{ 2\dfrac{m_p}{m_{\oplus}} - r_w - r_i } { r_w - r_i } \f]
	*	\f[ r_w= 4.43\ 10^{ -0.209396 + \dfrac{1}{3}\log \left ( \dfrac{m_p}{5.52 m_\oplus} \right ) - 0.0807 \left ( \dfrac{m_p}{5.52 m_\oplus} \right )^{0.375}} \f]
    *	\f[ r_i= 2.52\ 10^{ -0.209490 + \dfrac{1}{3}\log \left ( \dfrac{m_p}{5.80 m_\oplus} \right ) - 0.0804 \left ( \dfrac{m_p}{5.80 m_\oplus} \right )^{0.394}} \f]  
    *
	*	See http://phl.upr.edu/library/notes/habitablezonecompositionhzcahabitabilitymetricforexoplanets
	*
    *   @param planetMassInkg \f$m_{p}\ (kg)\f$ Mass of the planet in kilograms.
    *   @param planetMeanRadiusInm \f$r_{p}\ (m)\f$ Mean radius of the planet in meters.
    *   @return \f$HZC\ (dimensionless)\f$ Habitable Zone Composition metric of a planet. Results between -1 and 1 means that the planet has the potential for a habitable bulk material composition.
	*/    
    template<typename T>
    T HabitableZoneComposition(const T planetMassInkg, const T planetMeanRadiusInm);

    /// @}
} //namespace EGXPhys

#include "HabitableZoneComposition.inl"
