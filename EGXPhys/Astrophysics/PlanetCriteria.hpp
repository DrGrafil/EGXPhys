/// @file EGXPhys/Astrophysics/PlanetCriteria.hpp
///
/// @brief Calculates various criteria for planets including habitability.
///
/// @author Elliot Grafil (Metex)
/// @date 7/31/17
/// @bug No known bugs.

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
	/// @addtogroup Astrophysics
	/// @{
	
	/** 
	*   @brief Calculates Planet Similarity Index (\f$PSI\f$) of a planet when comparing it to a reference planet.
    *
    *	The planet similarity index is a number that denotes how similar a planet is to that of the reference. 1 is being exactly like the reference.
    *   		\f[PSI=\sqrt{PSI_I PSI_S}\f]
	*   See http://phl.upr.edu/projects/earth-similarity-index-esi and https://en.wikipedia.org/wiki/Earth_Similarity_Index.
	*	Equations taken from "A Two-Tiered Approach to Assessing the Habitability of Exoplanets" https://doi.org/10.1089/ast.2010.0592.
    *
	*   @param  planetMeanRadius \f$r\f$(\f$m\f$) is the mean radius of a planet.
	*	@param  referenceMeanRadius \f$r_{ref}\f$(\f$m\f$) is the mean radius of the reference planet.
	*   @param  planetBulkDensity \f$\rho\f$(\f$\frac{kg}{m^3}\f$) is the bulk density of the planet.
	*	@param  referenceBulkDensity \f$\rho\f$(kg/m^3) is the bulk density of the reference planet.
	*   @param  planetEscapeVelocity \f$v_e\f$(\f$\frac{m}{s}\f$) is the escape velocity needed to escape the planet's gravitational pull.
	*	@param  referenceEscapeVelocity \f$v_{e,ref}\f$(\f$\frac{m}{s}\f$) is the escape velocity needed to escape the reference planet's gravitational pull.
	*   @param  planetSurfaceTemperature \f$T\f$(\f$K\f$) is the average surface temperature of the planet.
	*   @param  referenceSurfaceTemperature \f$T_{ref}\f$(\f$K\f$) is the average surface temperature of the reference planet.
	*   @return Planet Similarity Index PSI(dimensionless) for a planet when comparing it to a reference planet.
	*	@see EarthSimilarityIndex() Earth based planet comparison.
	*	@see PlanetSimilarityIndexInterior() for \f$PSI_I\f$ equation.
	*	@see PlanetSimilarityIndexSurface() for \f$PSI_S\f$ equation.
	*/ 
    template<typename T>
    T PlanetSimilarityIndex(const T& planetMeanRadius, const T& referenceMeanRadius, const T& planetBulkDensity, const T& referenceBulkDensity, const T& planetEscapeVelocity, const T& referenceEscapeVelocity, const T& planetSurfaceTemperature, const T& referenceSurfaceTemperature );
	  
    /** 
	*   @brief Calculates Earth Similarity Index (\f$ESI\f$) of a planet.
    *
    *	The earth similarity index is a number that denotes how similar a planet is to that of earth. 1 is being exactly earth like.
    *   		\f[ESI=(ESI_I ESI_S)^(\frac{1}{2}\f]
	*   See http://phl.upr.edu/projects/earth-similarity-index-esi and https://en.wikipedia.org/wiki/Earth_Similarity_Index.
	*	Equations taken from "A Two-Tiered Approach to Assessing the Habitability of Exoplanets" https://doi.org/10.1089/ast.2010.0592.
    * 
	*   @param  planetMeanRadius \f$r\f$(\f$m\f$) is the mean radius of a planet.
	*   @param  planetBulkDensity \f$\rho\f$(\f$\frac{kg}{m^3}\f$) is the bulk density of the planet.
	*   @param  planetEscapeVelocity \f$v_e\f$(\f$\frac{m}{s}\f$) is the escape velocity needed to escape the planet's gravitational pull.
	*   @param  planetSurfaceTemperature \f$T\f$(\f$K\f$) is the average surface temperature of the planet.
	*   @return Earth Similarity Index ESI(dimensionless) for a planet.
	*	@see PlanetSimilarityIndex() to calculate using R_\oplus and M_\oplus instead of SI units or to use other planets as the basis for comparison.
	*	@see EarthSimilarityIndexInterior() for \f$ESI_I\f$ equation.
	*	@see EarthSimilarityIndexSurface() for \f$ESI_S\f$ equation.
	*/ 
    template<typename T>
    T EarthSimilarityIndex( const T& planetMeanRadius, const T& planetBulkDensity, const T& planetEscapeVelocity, const T& planetSurfaceTemperature );

    
	  
    /** 
	*   @brief Calculates Interior Planet Similarity Index (\f$PSI_I\f$) of a planet when comparing it to a reference planet.
    *
    *	The interior earth similarity index is a number that denotes how similar the interior of a planet is to the earth. 1 is being exactly earth like.
    *   		\f[ESI_I=\sqrt{ESI_r ESI_\rho}\f]
    *			\f[ESI_I=\sqrt{\left ( 1 - \left | \frac{r-r_{ref}}{r+r_{ref}} \right | \right )^{0.57} \left ( 1 - \left | \frac{\rho-\rho_{ref}}{\rho+\rho_{ref}} \right | \right )^{1.07}}\f]
	*   See http://phl.upr.edu/projects/earth-similarity-index-esi and https://en.wikipedia.org/wiki/Earth_Similarity_Index.
	*	Equations taken from "A Two-Tiered Approach to Assessing the Habitability of Exoplanets" https://doi.org/10.1089/ast.2010.0592.
    *
	*   @param  planetMeanRadius \f$r\f$(\f$m\f$) is the mean radius of a planet.
	*	@param  referenceMeanRadius \f$r_{ref}\f$(\f$m\f$) is the mean radius of the reference planet.
	*   @param  planetBulkDensity \f$\rho\f$(\f$\frac{kg}{m^3}\f$) is the bulk density of the planet.
	*	@param  referenceBulkDensity \f$\rho_{ref}\f$(\f$\frac{kg}{m^3}\f$) is the bulk density of the reference planet.
	*   @return Planet Similarity Index PSI(dimensionless) for a planet when comparing it to a reference planet.
	*	@see PlanetSimilarityIndex() Earth based planet comparison.
	*	@see EarthSimilarityIndexInterior() for \f$PSI_I\f$ equation using earth as reference.
	*	@see PlanetSimilarityIndexSurface() for \f$PSI_S\f$ equation.
	*/  
    template<typename T>
    T PlanetSimilarityIndexInterior(const T& planetMeanRadius, const T& referenceMeanRadius, const T& planetBulkDensity, const T& referenceBulkDensity);
    	  
	  
    /** 
	*   @brief Calculates Interior Earth Similarity Index (\f$ESI_I\f$) of a planet when comparing it to a reference planet.
    *
    *	The interior earth similarity index is a number that denotes how similar the interior of a planet is to the earth. 1 is being exactly earth like.
    *   		\f[ESI_I=\sqrt{ESI_r ESI_\rho}\f]
    *			\f[ESI_I=\sqrt{\left ( 1 - \left | \frac{r-r_\oplus}{r+r_\oplus} \right | \right )^{0.57} \left ( 1 - \left | \frac{\rho-\rho_\oplus}{\rho+\rho_\oplus} \right | \right )^{1.07}}\f]
	*   See http://phl.upr.edu/projects/earth-similarity-index-esi and https://en.wikipedia.org/wiki/Earth_Similarity_Index.
	*	Equations taken from "A Two-Tiered Approach to Assessing the Habitability of Exoplanets" https://doi.org/10.1089/ast.2010.0592.
    *
	*   @param  planetMeanRadius r(m) is the mean radius of a planet.
	*   @param  planetBulkDensity \f$\rho\f$(kg/m^3) is the bulk density of the planet.
	*   @return Planet Similarity Index PSI(dimensionless) for a planet when comparing it to a reference planet.
	*	@see PlanetSimiarityIndex() Earth based planet comparison.
	*	@see PlanetSimilarityIndexInterior() for \f$PSI_I\f$ equation.
	*	@see PlanetSimilarityIndexSurface() for \f$PSI_S\f$ equation.
	*/  
    template<typename T>
    T EarthSimilarityIndexInterior(const T& planetMeanRadius, const T& planetBulkDensity);
    
    
    
    
    /** 
	*   @brief Calculates Surface Planet Similarity Index of a planet. 
    *
	*/ 
    template<typename T>
    T PlanetSimilarityIndexSurface(const T& planetEscapeVelocity, const T& referenceEscapeVelocity, const T& planetSurfaceTemperature, const T& referenceSurfaceTemperature);

 	/** 
	*   @brief Calculates Surface Earth Similarity Index of a planet. 
	*/ 
    template<typename T>
    T EarthSimilarityIndexSurface(const T& planetEscapeVelocity, const T& planetSurfaceTemperature);

    	
	template<typename T>
	double HabitalZoneInnerRadius( const double starSurfaceTemp, const double starLuminosity);
	
	template<typename T>
	double HabitalZoneOuterRadius( const double starSurfaceTemp, const double starLuminosity );
	
	template<typename T>
	double HabitalZoneDistance( const double planetSemimajorAxis, const double starSurfaceTemp, const double starLuminosity );
	
	template<typename T>
	double PlanetaryEquilibriumTempreture( const double planetAlbedo, const double planetDistance, const double starLuminosity );
	
	template<typename T>
	double PlanetaryEquilibriumTempreture( const double planetAlbedo,  const double planetDistance, const double starSurfaceTemp, const double starRadius );
	
	double HabitableZoneAtmosphere( const double planetMass, const double planetRadius, const double planetEquilibriumTemp );
	
	double HabitableZoneComposition( const double planetMass, const double planetRadius );
    
    /// @}
} //namespace EGXPhys

#include "PlanetCriteria.inl"
