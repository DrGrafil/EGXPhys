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
	*   @brief Calculates Earth Similarity Index (ESI) of a planet.
    *
    *	The earth similarity index is a number that denotes how similar a planet is to that of earth. 1 is being exactly earth like.
    *   		\f[ESI=(ESI_I ESI_S)^(\frac{1}{2}\f]
	*   See http://phl.upr.edu/projects/earth-similarity-index-esi and https://en.wikipedia.org/wiki/Earth_Similarity_Index.
	*	Equations taken from "A Two-Tiered Approach to Assessing the Habitability of Exoplanets" https://doi.org/10.1089/ast.2010.0592.
    * 
	*   @param  planetMeanRadius r(m) is the mean radius of a planet.
	*   @param  planetBulkDensity \f$\rho\f$(kg/m^3) is the bulk density of the planet.
	*   @param  planetEscapeVelocity \f$v_e\f$(m/s) is the escape velocity needed to escape the planets gravitational pull.
	*   @param  planetSurfaceTemperature T(K) is the average surface temperature of the planet.
	*   @return Earth Similarity Index ESI(dimensionless) for a planet.
	*	@see PlanetSimiarityIndex() to calculate using R_\Earth and M_\Earth instead of SI units or to use other planets as the basis for comparison.
	*	@see EarthSimilarityIndexInterior() for \f$EDI_I\f$ equation.
	*	@see EarthSimilarityIndexSurface() for \f$ESI_S\f$ equation.
	*/ 
    template<typename T>
    T EarthSimilarityIndex( const T& planetMeanRadius, const T& planetBulkDensity, const T& planetEscapeVelocity, const T& planetSurfaceTemperature )

    /** 
	*   @brief Calculates Planet Similarity Index (PSI) of a planet when comparing it to a reference planet.
    *
    *	The planet similarity index is a number that denotes how similar a planet is to that of the reference. 1 is being exactly like the reference.
    *   		\f[PSI=(PSI_I PSI_S)^(\frac{1}{2}\f]
	*   See http://phl.upr.edu/projects/earth-similarity-index-esi and https://en.wikipedia.org/wiki/Earth_Similarity_Index.
	*	Equations taken from "A Two-Tiered Approach to Assessing the Habitability of Exoplanets" https://doi.org/10.1089/ast.2010.0592.
    *
	*   @param  planetMeanRadius r(m) is the mean radius of a planet.
	*	@param  referenceMeanRadius r(m) is the mean radius of a planet.
	*   @param  planetBulkDensity \f$\rho\f$(kg/m^3) is the bulk density of the planet.
	*	@param  referenceBulkDensity \f$\rho\f$(kg/m^3) is the bulk density of the planet.
	*   @param  planetEscapeVelocity \f$v_e\f$(m/s) is the escape velocity needed to escape the planets gravitational pull.
	*	@param  referenceEscapeVelocity \f$v_e\f$(m/s) is the escape velocity needed to escape the planets gravitational pull.
	*   @param  planetSurfaceTemperature T(K) is the average surface temperature of the planet.
	*   @param  referenceSurfaceTemperature T(K) is the average surface temperature of the planet.
	*   @return Planet Similarity Index PSI(dimensionless) for a planet when comparing it to a reference planet.
	*	@see PlanetSimiarityIndex() to calculate using R_\Earth and M_\Earth or to use other planets as the basis for comparison.
	*	@see EarthSimilarityIndexInterior() for \f$EDI_I\f$ equation.
	*	@see EarthSimilarityIndexSurface() for \f$ESI_S\f$ equation.
	*/ 
    template<typename T>
    T PlanetSimilarityIndex( const T& planetMeanRadius, const T& referenceMeanRadius, const T& planetBulkDensity, const T& referenceBulkDensity, const T& planetEscapeVelocity, const T& referenceEscapeVelocity, const T& planetSurfaceTemperature, const T& referenceSurfaceTemperature )
	  
      /** 
	*   @brief Calculates Earth Similarity Index of a planet. 
    *
    *   The periapsis is the distance at which an orbiting object is farthest away from the body it is orbiting.
	*			\f[r=a(1-e)\f]
	*   See http://phl.upr.edu/projects/earth-similarity-index-esi and https://en.wikipedia.org/wiki/Earth_Similarity_Index
    * 
	*   @param  planetMeanRadius e(m) is the amount by which its orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
	*   @param  planetBulkDensity a(m) is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
	*   @param  planetEscapeVelocity e(dimensionless) is the amount by which its orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
	*   @param  planetSurfaceTemperature a(m) is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
	*   @return Periapsis r(m) for an orbiting body.
	*/ 
    template<typename T>
    T EarthSimilarityIndexInterior( const T& planetMeanRadius, const T& planetBulkDensity, const T& planetEscapeVelocity, const T& planetSurfaceTemperature )
    
        /** 
	*   @brief Calculates Earth Similarity Index of a planet. 
    *
    *   The periapsis is the distance at which an orbiting object is farthest away from the body it is orbiting.
	*			\f[r=a(1-e)\f]
	*   See http://phl.upr.edu/projects/earth-similarity-index-esi and https://en.wikipedia.org/wiki/Earth_Similarity_Index
    * 
	*   @param  planetMeanRadius e(m) is the amount by which its orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
	*   @param  planetBulkDensity a(m) is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
	*   @param  planetEscapeVelocity e(dimensionless) is the amount by which its orbit around another body deviates from a perfect circle. e=0 is circular, 0<e<1 is elliptical and e>1 is hyperbola. See https://en.wikipedia.org/wiki/Orbital_eccentricity.
	*   @param  planetSurfaceTemperature a(m) is the line segment from the center of the orbit to the widest point in the perimiter. See https://en.wikipedia.org/wiki/Semi-major_and_semi-minor_axes.
	*   @return Periapsis r(m) for an orbiting body.
	*/ 
    template<typename T>
    T EarthSimilarityIndexSurface( const T& planetMeanRadius, const T& planetBulkDensity, const T& planetEscapeVelocity, const T& planetSurfaceTemperature )
    
    
  // meanRadius in m
	// bulkDensity = kg
	// escapeVelocity in m/s
	// Surface Temperature in K	 
	
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
