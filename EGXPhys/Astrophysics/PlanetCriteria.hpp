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
	*
	*	Equations taken from "A Two-Tiered Approach to Assessing the Habitability of Exoplanets" https://doi.org/10.1089/ast.2010.0592.
    *
	*   @param  planetMeanRadius \f$r\f$(\f$m\f$) is the mean radius of a planet.
	*	@param  referenceMeanRadius \f$r_{ref}\f$(\f$m\f$) is the mean radius of the reference planet.
	*   @param  planetBulkDensity \f$\rho\f$(\f$\frac{kg}{m^3}\f$) is the bulk density of the planet.
	*	@param  referenceBulkDensity \f$\rho\f$(\f$\frac{kg}{m^3}\f$) is the bulk density of the reference planet.
	*   @param  planetEscapeVelocity \f$v_e\f$(\f$\frac{m}{s}\f$) is the escape velocity needed to escape the planet's gravitational pull.
	*	@param  referenceEscapeVelocity \f$v_{e,ref}\f$(\f$\frac{m}{s}\f$) is the escape velocity needed to escape the reference planet's gravitational pull.
	*   @param  planetSurfaceTemperature \f$T\f$(\f$K\f$) is the average surface temperature of the planet.
	*   @param  referenceSurfaceTemperature \f$T_{ref}\f$(\f$K\f$) is the average surface temperature of the reference planet.
	*   @return \f$PSI\f$(dimensionless) Planet Similarity Index for a planet when comparing it to a reference planet.
	*	@see EarthSimilarityIndex()  for \f$PSI\f$ equation using earth as reference.
	*	@see PlanetSimilarityIndexInterior() for \f$PSI_I\f$ equation.
	*	@see PlanetSimilarityIndexSurface() for \f$PSI_S\f$ equation.
	*/ 
    template<typename T>
    T PlanetSimilarityIndex(const T& planetMeanRadius, const T& referenceMeanRadius, const T& planetBulkDensity, const T& referenceBulkDensity, const T& planetEscapeVelocity, const T& referenceEscapeVelocity, const T& planetSurfaceTemperature, const T& referenceSurfaceTemperature );
	  
    /** 
	*   @brief Calculates Earth Similarity Index (\f$ESI\f$) of a planet.
    *
    *	The earth similarity index is a number that denotes how similar a planet is to that of earth. 1 is being exactly earth like.
    *   		\f[ESI=\sqrt{ESI_I ESI_S}\f]
	*   See http://phl.upr.edu/projects/earth-similarity-index-esi and https://en.wikipedia.org/wiki/Earth_Similarity_Index.
	*
	*	Equations taken from "A Two-Tiered Approach to Assessing the Habitability of Exoplanets" https://doi.org/10.1089/ast.2010.0592.
    * 
	*   @param  planetMeanRadius \f$r\f$(\f$m\f$) is the mean radius of a planet.
	*   @param  planetBulkDensity \f$\rho\f$(\f$\frac{kg}{m^3}\f$) is the bulk density of the planet.
	*   @param  planetEscapeVelocity \f$v_e\f$(\f$\frac{m}{s}\f$) is the escape velocity. The velocity needed to escape the planet's gravitational pull.
	*   @param  planetSurfaceTemperature \f$T\f$(\f$K\f$) is the average surface temperature of the planet.
	*   @return \f$ESI\f$(dimensionless) Earth Similarity Index for a planet.
	*	@see PlanetSimilarityIndex() for \f$ESI\f$ equation using any planet as reference.
	*	@see EarthSimilarityIndexInterior() for \f$ESI_I\f$ equation.
	*	@see EarthSimilarityIndexSurface() for \f$ESI_S\f$ equation.
	*/ 
    template<typename T>
    T EarthSimilarityIndex( const T& planetMeanRadius, const T& planetBulkDensity, const T& planetEscapeVelocity, const T& planetSurfaceTemperature );

    
	  
    /** 
	*   @brief Calculates Interior Planet Similarity Index (\f$PSI_I\f$) of a planet when comparing it to a reference planet.
    *
    *	The interior planet similarity index is a number that denotes how similar the interior of the planet is to that of the reference. 1 is being exactly like the reference. 
    *   		\f[PSI_I=\sqrt{PSI_r PSI_\rho}\f]
    *			\f[PSI_I=\sqrt{\left ( 1 - \left | \frac{r-r_{ref}}{r+r_{ref}} \right | \right )^{0.57} \left ( 1 - \left | \frac{\rho-\rho_{ref}}{\rho+\rho_{ref}} \right | \right )^{1.07}}\f]
	*   See http://phl.upr.edu/projects/earth-similarity-index-esi and https://en.wikipedia.org/wiki/Earth_Similarity_Index.
	*
	*	Equations taken from "A Two-Tiered Approach to Assessing the Habitability of Exoplanets" https://doi.org/10.1089/ast.2010.0592.
    *
	*   @param  planetMeanRadius \f$r\f$(\f$m\f$) is the mean radius of a planet.
	*	@param  referenceMeanRadius \f$r_{ref}\f$(\f$m\f$) is the mean radius of the reference planet.
	*   @param  planetBulkDensity \f$\rho\f$(\f$\frac{kg}{m^3}\f$) is the bulk density of the planet.
	*	@param  referenceBulkDensity \f$\rho_{ref}\f$(\f$\frac{kg}{m^3}\f$) is the bulk density of the reference planet.
	*   @return \f$PSI_I\f$(dimensionless) Interior Planet Similarity Index for a planet when comparing it to a reference planet.
	*	@see PlanetSimilarityIndex() Uses \f$PSI_I\f$ for calculations.
	*	@see EarthSimilarityIndexInterior() for \f$PSI_I\f$ equation using earth as reference.
	*	@see PlanetSimilarityIndexSurface() for \f$PSI_S\f$ equation.
	*/  
    template<typename T>
    T PlanetSimilarityIndexInterior(const T& planetMeanRadius, const T& referenceMeanRadius, const T& planetBulkDensity, const T& referenceBulkDensity);
    	  
	  
    /** 
	*   @brief Calculates Interior Earth Similarity Index (\f$ESI_I\f$) of a planet.
    *
    *	The interior earth similarity index is a number that denotes how similar the interior of a planet is to the earth. 1 is being exactly earth like.
    *   		\f[ESI_I=\sqrt{ESI_r ESI_\rho}\f]
    *			\f[ESI_I=\sqrt{\left ( 1 - \left | \frac{r-r_\oplus}{r+r_\oplus} \right | \right )^{0.57} \left ( 1 - \left | \frac{\rho-\rho_\oplus}{\rho+\rho_\oplus} \right | \right )^{1.07}}\f]
	*   See http://phl.upr.edu/projects/earth-similarity-index-esi and https://en.wikipedia.org/wiki/Earth_Similarity_Index.
	*
	*	Equations taken from "A Two-Tiered Approach to Assessing the Habitability of Exoplanets" https://doi.org/10.1089/ast.2010.0592.
    *
	*   @param  planetMeanRadius \f$r\f$(\f$m\f$) is the mean radius of a planet.
	*   @param  planetBulkDensity \f$\rho\f$(\f$\frac{kg}{m^3}\f$) is the bulk density of the planet.
	*   @return \f$ESI_I\f$(dimensionless) Interior Earth Similarity Index for a planet when comparing it to a reference planet.
	*	@see EarthSimilarityIndex() Uses \f$ESI_S\f$ for calculations.
	*	@see PlanetSimilarityIndexInterior() for \f$ESI_I\f$ equation using any planet as reference.
	*	@see EarthSimilarityIndexSurface() for \f$ESI_S\f$ equation.
	*/  
    template<typename T>
    T EarthSimilarityIndexInterior(const T& planetMeanRadius, const T& planetBulkDensity);
    
    
    
    
    /** 
	*   @brief Calculates Surface Planet Similarity Index (\f$PSI_S\f$) of a planet when comparing it to a reference planet.
    *
    *	The interior planet similarity index is a number that denotes how similar the interior of the planet is to that of the reference. 1 is being exactly like the reference. 
    *   		\f[PSI_S=\sqrt{PSI_{v_e} PSI_T}\f]
    *			\f[PSI_S=\sqrt{\left ( 1 - \left | \frac{v_e-v_{e,ref}}{v_e+v_{e,ref}} \right | \right )^{0.70} \left ( 1 - \left | \frac{T-T_{ref}}{T+T_{ref}} \right | \right )^{5.58}}\f]
	*   See http://phl.upr.edu/projects/earth-similarity-index-esi and https://en.wikipedia.org/wiki/Earth_Similarity_Index.
	*
	*	Equations taken from "A Two-Tiered Approach to Assessing the Habitability of Exoplanets" https://doi.org/10.1089/ast.2010.0592.
    *
	*   @param  planetEscapeVelocity \f$v_e\f$(\f$\frac{m}{s}\f$) is the escape velocity needed to escape the planet's gravitational pull.
	*	@param  referenceEscapeVelocity \f$v_{e,ref}\f$(\f$\frac{m}{s}\f$) is the escape velocity needed to escape the reference planet's gravitational pull.
	*   @param  planetSurfaceTemperature \f$T\f$(\f$K\f$) is the average surface temperature of the planet.
	*   @param  referenceSurfaceTemperature \f$T_{ref}\f$(\f$K\f$) is the average surface temperature of the reference planet.
	*   @return \f$PSI_S\f$(dimensionless) Surface Planet Similarity Index for a planet when comparing it to a reference planet.
	*	@see PlanetSimilarityIndex() Uses \f$PSI_S\f$ for calculations.
	*	@see EarthSimilarityIndexSurface() for \f$PSI_S\f$ equation using earth as reference.
	*	@see PlanetSimilarityIndexInterior() for \f$PSI_I\f$ equation.
	*/  
    template<typename T>
    T PlanetSimilarityIndexSurface(const T& planetEscapeVelocity, const T& referenceEscapeVelocity, const T& planetSurfaceTemperature, const T& referenceSurfaceTemperature);

    /** 
	*   @brief Calculates Surface Earth Similarity Index (\f$ESI_S\f$) of a planet.
    *
    *	The interior planet similarity index is a number that denotes how similar the surface of a planet is to the earth. 1 is being exactly earth like.
    *   		\f[PSI_S=\sqrt{PSI_{v_e} PSI_T}\f]
    *			\f[PSI_S=\sqrt{\left ( 1 - \left | \frac{v_e-v_{e,\oplus}}{v_e+v_{e,\oplus}} \right | \right )^{0.70} \left ( 1 - \left | \frac{T-T_{\oplus}}{T+T_{\oplus}} \right | \right )^{5.58}}\f]
	*   See http://phl.upr.edu/projects/earth-similarity-index-esi and https://en.wikipedia.org/wiki/Earth_Similarity_Index.
	*
	*	Equations taken from "A Two-Tiered Approach to Assessing the Habitability of Exoplanets" https://doi.org/10.1089/ast.2010.0592.
    *
	*   @param  planetEscapeVelocity \f$v_e\f$(\f$\frac{m}{s}\f$) is the escape velocity needed to escape the planet's gravitational pull.
	*   @param  planetSurfaceTemperature \f$T\f$(\f$K\f$) is the average surface temperature of the planet.
	*   @return \f$ESI_S\f$(dimensionless) Surface Earth Similarity Index for a planet.
	*	@see EarthSimilarityIndex() Uses \f$ESI_S\f$ for calculations.
	*	@see PlanetSimilarityIndexSurface() for \f$ESI_S\f$ equation using any planet as reference.
	*	@see EarthSimilarityIndexInterior() for \f$ESI_I\f$ equation.
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
