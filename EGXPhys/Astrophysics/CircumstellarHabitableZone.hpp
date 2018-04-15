/// @file EGXPhys/Astrophysics/CircumstellarHabitableZone.hpp
///
/// @brief Calculates Circumstellar Habitable Zone of a solar system
///
/// @author Elliot Grafil (Metex)
/// @date 8/2/17

/// @todo Add more models for Seff. https://en.wikipedia.org/wiki/Circumstellar_habitable_zone lists way more models

/// @defgroup EGXPhys-CircumstellarHabitableZoneLimit Circumstellar Habitable Zone Limit
/// @ingroup EGXPhys-Astrophysics

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{	
	/// @addtogroup EGXPhys-CircumstellarHabitableZoneLimit
	/// @{

    /** 
	*   @brief Calculates the Circumstellar Habitable Zone Limits, \f$d_{CHZL}\f$ of a star. Also known as Habitable Zone Limits. 
	*
	*	Circumstellar Habitable Zone Limit is used to calculations the inner and outer radius of the circumstellar habitable zone.
	*	\f[d_{CHZL}=1AU \sqrt{ \frac{L/L_\odot}{S_{eff}} }\f]
	*	
	*	See "Impacts of stellar evolution and dynamics on the habitable zone: The role of rotation and magnetic activity" (Gallet 2016) https://doi.org/10.1051/0004-6361/201629034 
	*
	*	Equation taken from "Habitable Zones around Main Sequence Stars" http://dx.doi.org/10.1006/icar.1993.1010
	*
	*   @param starLuminosityInW \f$L\ (W)\f$ Luminosity of the star in watts.
	*   @param stellarFluxEffective \f$S_{eff}\f$(dimensionless) Effective stellar flux. Estimation of the ratio of outgoing IR flux to incident IR flux of a planet with greenhouse effects folded in.
	*   @return \f$d_{CHZL}\f$(AU) Circumstellar Habitable Zone Limit. Either the inner or outer radius of the circumstellar habitable zone.
	*	@see CircumstellarHabitableZoneDistance() for circumstellar habitable zone distance, a habitability metric for planets.
	*	@see CircumstellarHabitableZoneInnerBoundary() for inner boundary of the circumstellar habitable zone.
	*	@see CircumstellarHabitableZoneOuterBoundary() for outer boundary of the circumstellar habitable zone.
	*	@see StellarFluxEffectiveKopparapu() for \f$S_{eff}\f$ using Kopparapu's approximation.
	*	@see StellarFluxEffectiveSelsis() for \f$S_{eff}\f$ using Selsis's approximation.
	*	@see StellarFluxEffectiveUnderwood() for \f$S_{eff}\f$ using Underwood's approximation.
	*/    
    template<typename T>
	T CircumstellarHabitableZoneLimit(const T starLuminosityInW, const T stellarFluxEffective);

   

    /** 
	*   @brief Calculates the effective stellar flux, \f$(S_{eff})\f$ of a star using Selsis estimation.
	*
	*	Effective stellar flux is used in circumstellar habitable zone calculations.
	*	\f[S_{eff}= \frac{1}{(S_{eff\odot}+a(T_{eff}-5700)+b(T_{eff}-5700)^2)^2}\f]
	*	
	*	See "Impacts of stellar evolution and dynamics on the habitable zone: The role of rotation and magnetic activity" (Gallet 2016) https://doi.org/10.1051/0004-6361/201629034 
	*
	*	Equation taken from "Habitable planets around the star Gl 581?" (Selsis 2007) https://doi.org/10.1051/0004-6361:20078091 
	*
	*	Example inputs for model parameters (recent Venus - early Mars criteria):
	*
	*	\f$S_{eff\odot,inner} = 0.72\f$, \f$a_{inner} = 2.7619 \times 10^{-5}\f$, \f$b_{inner} = 3.8095 \times 10^{-9}\f$
	*
	*	\f$S_{eff\odot,outer} = 1.77\f$, \f$a_{outer} = 1.3786 \times 10^{-4}\f$, \f$b_{outer} = 1.4286 \times 10^{-9}\f$
	*
	*   @param starEffectiveSurfaceTemperatureInK \f$T_{eff}\ (K)\f$ Effective surface temperature of the star (black body) in kelvin. See https://en.wikipedia.org/wiki/Effective_temperature.
	*   @param sunEffectiveStellarFlux \f$S_{eff\odot}\f$(dimensionless) Model parameter estimating the ratio of outgoing IR flux to incident IR flux of a planet with greenhouse effects folded in the presence of the sun.
	*	@param aModelParameter \f$a\f$(dimensionless) First order model fit parameter taking into account the change of star temperature from that of the Sun. 
	*	@param bModelParameter \f$b\f$(dimensionless) Second order model fit parameter taking into account the change of star temperature from that of the Sun. 
	*   @return \f$S_{eff}\f$(dimensionless) Effective Stellar Flux. Approximation used in circumstellar habitable zone calculations. 
	*	@see CircumstellarHabitableZoneDistance() for circumstellar habitable zone distance, a habitability metric for planets.
	*	@see CircumstellarHabitableZoneInnerBoundary() for inner boundary of the circumstellar habitable zone.
	*	@see CircumstellarHabitableZoneOuterBoundary() for outer boundary of the circumstellar habitable zone.
	*/ 
    template<typename T>
    T StellarFluxEffectiveSelsis(const T starEffectiveSurfaceTemperatureInK, const T sunEffectiveStellarFlux, const T aModelParameter, const T bModelParameter);
    
    	//http://phl.upr.edu/library/notes/habitablezonesdistancehzdahabitabilitymetricforexoplanets and 
    
    /** 
	*   @brief Calculates the effective stellar flux \f$(S_{eff})\f$ using Underwood estimation.
	*
	*	Effective stellar flux is used in circumstellar habitable zone calculations.
	*	\f[S_{eff}=S_{eff\odot}+aT_{eff}+bT^2_{eff}\f]
	*	
	*	See "Impacts of stellar evolution and dynamics on the habitable zone: The role of rotation and magnetic activity" (Underwood 2003) https://doi.org/10.1051/0004-6361/201629034 
	*
	*	Equation taken from "The evolution of habitable zones during stellar lifetimes and implications on the search for extraterrestrial life" (Underwood 2003) https://doi.org/10.1017/S1473550404001715
	*
	*	Example inputs for model parameters (recent Venus - early Mars criteria):
	*
	*	\f$S_{eff\odot,inner} = 1.786\f$, \f$a_{inner} = 1.349 \times 10^{-4}\f$, \f$b_{inner} = 2.286 \times 10^{-8}\f$
	*
	*	\f$S_{eff\odot,outer} = 0.2125\f$, \f$a_{outer} = 1.371 \times 10^{-5}\f$, \f$b_{outer} = 5.714 \times 10^{-9}\f$
	*
	*   @param starEffectiveSurfaceTemperatureInK \f$T_{eff}\ (K)\f$ Effective surface temperature of the star (black body) in kelvin. See https://en.wikipedia.org/wiki/Effective_temperature.
	*   @param sunEffectiveStellarFlux \f$S_{eff\odot}\f$(dimensionless) Model parameter representing the ratio of outgoing IR flux to incident IR flux with the effects of the greenhouse effect in the presence of the Sun.
	*	@param aModelParameter \f$a\f$(dimensionless) First order model fit parameter taking into account the change of star temperature from that of the Sun. 
	*	@param bModelParameter \f$b\f$(dimensionless) Second order model fit parameter taking into account the change of star temperature from that of the Sun. 
	*   @return \f$S_{eff}\f$(dimensionless) Effective Stellar Flux. Approximation used in circumstellar habitable zone calculations. 
	*	@see CircumstellarHabitableZoneDistance() for circumstellar habitable zone distance, a habitability metric for planets.
	*	@see CircumstellarHabitableZoneInnerBoundary() for inner boundary of the circumstellar habitable zone.
	*	@see CircumstellarHabitableZoneOuterBoundary() for outer boundary of the circumstellar habitable zone.
	*/ 
    template<typename T>
    T StellarFluxEffectiveUnderwood(const T starEffectiveSurfaceTemperatureInK, const T sunEffectiveStellarFlux, const T aModelParameter, const T bModelParameter);
    
    
    
    
    
    
    
        // Habital Zone Distance
// http://phl.upr.edu/library/notes/habitablezonesdistancehzdahabitabilitymetricforexoplanets
// http://xxx.lanl.gov/pdf/1301.6674v2.pdf Habitable Zones Around Main-Sequence Stars: New Estimates
// http://depts.washington.edu/naivpl/content/hz-calculator
// http://astro.unl.edu/naap/habitablezones/animations/stellarHabitableZone.html

	/** 
	*   @brief Calculates the inner boundary of the Habitable Zone of a solar system.
	*
	*	Habitable Zone is defined in astrophysics as the orbital area around a star where in which a rocky planet, with the right atmosphere, can maintain liquid water at the surface of the planet
The HZ of an exoplanet is generally defined as the area
(in terms of distance from its central star) 
	*	See "Impacts of stellar evolution and dynamics on the habitable zone: The role of rotation and magnetic activity" https://doi.org/10.1051/0004-6361/201629034 
	*	Equation taken from http://phl.upr.edu/library/notes/habitablezonesdistancehzdahabitabilitymetricforexoplanets and 
	*   @param starEffectiveSurfaceTemperatureInK \f$T_{eff}\ (K)\f$ Effective surface temperature of the star (black body) in kelvin. See https://en.wikipedia.org/wiki/Effective_temperature.
	*   @param starLuminosityInW \f$L\ (W)\f$ Luminosity of the star in watts.
	*   @return \f$r_{inner}\ (AU)\f$ the inner boundary of the Habitable Zone. 
	*	@see CircumstellarHabitableZoneDistance() for circumstellar habitable zone distance, a habitability metric for planets.
	*	@see CircumstellarHabitableZoneOuterBoundary() for outer boundary of the circumstellar habitable zone.
	*	@see CircumstellarHabitableZoneLimit() to calculate inner boundary using a diffrent model.
	*/  
	template<typename T>
	T CircumstellarHabitableZoneInnerBoundary( const T starEffectiveSurfaceTemperatureInK, const T starLuminosityInW);
	
	
	/** 
	*   @brief Calculates Circumstellar Habitable Zone Outer Boundary \f$(r_o)\f$ of a star.
	*
	*   @param starEffectiveSurfaceTemperatureInK \f$T_{eff}\ (K)\f$ Effective surface temperature of the star (black body) in kelvin. See https://en.wikipedia.org/wiki/Effective_temperature.
	*   @param starLuminosityInW \f$L\ (W)\f$ Luminosity of the star in watts.
	*   @return \f$ESI_S\f$(dimensionless) Surface Earth Similarity Index for a planet.
	*	@see CircumstellarHabitableZoneDistance() for circumstellar habitable zone distance, a habitability metric for planets.
	*	@see CircumstellarHabitableZoneInnerBoundary() for inner boundary of the circumstellar habitable zone.
	*	@see CircumstellarHabitableZoneLimit() to calculate outer boundary using a diffrent model.
	*/  
	template<typename T>
	T CircumstellarHabitableZoneOuterBoundary(const T starEffectiveSurfaceTemperatureInK, const T starLuminosityInW);
	
	/** 
	*   @brief Calculates Circumstellar Habitable Zone Distance \f$(CHZD)\f$ of a planet. Also known as Habitable Zone Distance.
	*
	*	Circumstellar Habitable Zone is the orbital area around a star where in which a rocky planet, with the right atmosphere, can maintain liquid water at the surface of the planet.
The HZ of an exoplanet is generally defined as the area
(in terms of distance from its central star) 
	*	See http://phl.upr.edu/library/notes/habitablezonesdistancehzdahabitabilitymetricforexoplanets and https://en.wikipedia.org/wiki/Circumstellar_habitable_zone
	*
	*	Equation from 
	*   @param distanceFromStar
	*   @param CHZOuterBoundary
	*   @param CHZInnerBoundary
	*   @return \f$CHZD\f$(HZU) circumstellar habitable zone distance, a habitability metric for planets. Between -1 and +1 HZU correspond to planets within the habitable zone.
	*	@see CircumstellarHabitableZoneOuterBoundary() for outer boundary of the circumstellar habitable zone.
	*	@see CircumstellarHabitableZoneInnerBoundary() for inner boundary of the circumstellar habitable zone. 
	*	@see CircumstellarHabitableZoneLimit() to calculate outer and inner boundary using diffrent models.
	*/  
	template<typename T>
	T CircumstellarHabitableZoneDistance(const T distanceFromStar, const T CHZOuterBoundary, const T CHZInnerBoundary);
	
	
    /// @}
} //namespace EGXPhys

#include "CircumstellarHabitableZone.inl"
