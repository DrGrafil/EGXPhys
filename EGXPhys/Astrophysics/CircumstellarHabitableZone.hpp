/// @file EGXPhys/Astrophysics/CircumstellarHabitableZone.hpp
///
/// @brief Calculates Circumstellar Habitable Zone of a solar system
///
/// @author Elliot Grafil (Metex)
/// @date 8/2/17
/// @bug No known bugs.

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
	/// @addtogroup Astrophysics
	/// @{

       
    
    

    template<typename T>
    T StellarFluxEffectiveKasting(const T& starEffectiveSurfaceTemperature, const T& sunEffectiveStellarFlux, const T& aModelParameter, const T& bModelParameter);
    
    /** 
	*   @brief Calculates the effective stellar flux (\f$S_{eff}\f$) using Underwood estimation.
	*
	*	Effective stellar flux is used in circumstellar habital zone calculations.
	*	\f[S_{eff}=S_{eff\odot}+aT_{eff}+bT^2_{eff}\f]
	*	
	*	See "Impacts of stellar evolution and dynamics on the habitable zone: The role of rotation and magnetic activity" https://doi.org/10.1051/0004-6361/201629034 
	*
	*	Equation taken from http://phl.upr.edu/library/notes/habitablezonesdistancehzdahabitabilitymetricforexoplanets and 
	*
	*   @param starEffectiveSurfaceTemperature \f$T_{eff}\f$(\f$K\f$) is the effective temperature of the star surface (black body). See https://en.wikipedia.org/wiki/Effective_temperature.
	*   @param sunEffectiveStellarFlux \f$S_{eff\odot}\f$(dimensionless) Model parameter representing the ratio of outgoing IR flux to incident IR flux with the effects of the greenhouse effect in the presence of the Sun.
	*	@param aModelParameter \f$a\f$(dimensionless) First order model fit parameter taking into account the change of star temperature from that of the Sun. 
	*	@param aModelParameter \f$b\f$(dimensionless) Second order model fit parameter taking into account the change of star temperature from that of the Sun. 
	*   @return \f$r_{inner}\f$(\f$AU\f$) the inner boundary of the Habitable Zone. 
	*	@see HabitalZoneDistance()
	*	@see HabitalZoneOuterRadius() for outer boundary of the Habital Zone
	*/ 
    template<typename T>
    T StellarFluxEffectiveUnderwood(const T& starEffectiveSurfaceTemperature, const T& sunEffectiveStellarFlux, const T& aModelParameter, const T& bModelParameter);
    
    /** 
	*   @brief Calculates the inner boundary of the Habitable Zone of a solar system.
	*
	*	Habitable Zone is defined in astrophysics as the orbital area around a star where in which a rocky planet, with the right atmosphere, can maintain liquid water at the surface of the planet
The HZ of an exoplanet is generally defined as the area
(in terms of distance from its central star) 
	*	See "Impacts of stellar evolution and dynamics on the habitable zone: The role of rotation and magnetic activity" https://doi.org/10.1051/0004-6361/201629034 
	*	Equation taken from http://phl.upr.edu/library/notes/habitablezonesdistancehzdahabitabilitymetricforexoplanets and 
	*   @param starEffectiveTemperature \f$T_{eff}\f$(\f$K\f$) is the effective temperature of the star (black body). See https://en.wikipedia.org/wiki/Effective_temperature.
	*   @param starLuminosity
	*   @return \f$r_{inner}\f$(\f$AU\f$) the inner boundary of the Habitable Zone. 
	*	@see HabitalZoneDistance()
	*	@see HabitalZoneOuterRadius() for outer boundary of the Habital Zone
	*/  
    template<typename T>
	T CircumstellarHabitableZoneLimits( const T& starEffectiveTemperature, const T& starLuminosity, const T& effectiveStellarFlux);
    
    
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
	*   @param starEffectiveTemperature \f$T_{eff}\f$(\f$K\f$) is the effective temperature of the star (black body). See https://en.wikipedia.org/wiki/Effective_temperature.
	*   @param starLuminosity
	*   @return \f$r_{inner}\f$(\f$AU\f$) the inner boundary of the Habitable Zone. 
	*	@see HabitalZoneDistance()
	*	@see HabitalZoneOuterRadius() for outer boundary of the Habital Zone
	*/  
	template<typename T>
	T CircumstellarHabitableZoneInnerBoundary( const T starEffectiveTemperature, const T starLuminosity);
	
	
	    /** 
	*   @brief Calculates Surface Earth Similarity Index (\f$ESI_S\f$) of a planet.
	*
	*   @param 
	*   @return \f$ESI_S\f$(dimensionless) Surface Earth Similarity Index for a planet.
	*	@see 
	*/  
	template<typename T>
	T CircumstellarHabitableZoneOuterRadius( const T starEffectiveTemperature, const T starLuminosity );
	
	    /** 
	*   @brief Calculates Surface Earth Similarity Index (\f$ESI_S\f$) of a planet.
	*
	*   @param 
	*   @return \f$ESI_S\f$(dimensionless) Surface Earth Similarity Index for a planet.
	*	@see 
	*/  
	template<typename T>
	T CircumstellarHabitableZoneDistance( const T distanceFromStar, const T starEffectiveTemperature, const T starLuminosity );
	
	
    /// @}
} //namespace EGXPhys

#include "CircumstellarHabitableZone.inl"
