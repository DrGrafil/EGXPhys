/// @file EGXPhys/Astrophysics/PlanetCriteria.inl
///
/// @brief Implimentation of planet criteria calculations
/// @author Elliot Grafil (Metex)
/// @date 7/31/17
/// @bug No known bugs.

namespace EGXPhys{
	
	
	template<typename T>
    T PlanetSimilarityIndex( const T& planetMeanRadius, const T& referenceMeanRadius, const T& planetBulkDensity, const T& referenceBulkDensity, const T& planetEscapeVelocity, const T& referenceEscapeVelocity, const T& planetSurfaceTemperature, const T& referenceSurfaceTemperature ){
    	return sqrt( 
			PlanetSimilarityIndexInterior(planetMeanRadius, referenceMeanRadius, planetBulkDensity, referenceBulkDensity)
			*
			PlanetSimilarityIndexSurface(planetEscapeVelocity, referenceEscapeVelocity, planetSurfaceTemperature, referenceSurfaceTemperature)
		);
	}
	
	template<typename T>
    T EarthSimilarityIndex( const T& planetMeanRadius, const T& planetBulkDensity, const T& planetEscapeVelocity, const T& planetSurfaceTemperature){
    	return PlanetSimilarityIndex( planetMeanRadius, RadiusOfEarth, planetBulkDensity, DensityOfEarth, planetEscapeVelocity, EscapeVelocityOfEarth, planetSurfaceTemperature, SurfaceTempretureOfEarth);
	}
	
	#include <iostream>
	template<typename T>
    T PlanetSimilarityIndexInterior( const T& planetMeanRadius, const T& referenceMeanRadius, const T& planetBulkDensity, const T& referenceBulkDensity ){
		return sqrt( 
			pow(1.0 - fabs( (planetMeanRadius - referenceMeanRadius) / (planetMeanRadius + referenceMeanRadius) ), 0.57) 
			*
			pow(1.0 - fabs( (planetBulkDensity - referenceBulkDensity) / (planetBulkDensity + referenceBulkDensity) ), 1.07)
		); 	
	}
	
	template<typename T>
    T EarthSimilarityIndexInterior( const T& planetMeanRadius, const T& planetBulkDensity){
    	return PlanetSimilarityIndexInterior(planetMeanRadius, RadiusOfEarth, planetBulkDensity, DensityOfEarth);
	}
	
	
	template<typename T>
    T PlanetSimilarityIndexSurface(const T& planetEscapeVelocity, const T& referenceEscapeVelocity, const T& planetSurfaceTemperature, const T& referenceSurfaceTemperature ){
    	return sqrt( 
			pow(1.0 - fabs( (planetEscapeVelocity - referenceEscapeVelocity) / (planetEscapeVelocity + referenceEscapeVelocity) ), 0.70) 
			*
			pow(1.0 - fabs( (planetSurfaceTemperature - referenceSurfaceTemperature) / (planetSurfaceTemperature + referenceSurfaceTemperature) ), 5.58)
		); 
	}
	
	template<typename T>
    T EarthSimilarityIndexSurface(const T& planetEscapeVelocity, const T& planetSurfaceTemperature){
    	return PlanetSimilarityIndexSurface(planetEscapeVelocity, EscapeVelocityOfEarth, planetSurfaceTemperature, SurfaceTempretureOfEarth);
	}
    
    



    template<typename T>
	T HabitalZoneInnerRadius( const T  starEffectiveTemperature, const T starLuminosity){
		const T ai = 2.7619e-5;
		const T bi = 3.8095e-9;
		const T ris = 0.72;
		const T Ts = 5700; 
		return ( ris - ai * ( starEffectiveTemperature - Ts ) - starEffectiveTemperature* pow( starEffectiveTemperature - Ts, 2.0 ) ) * sqrt( starLuminosity/SunLuminocity );
	}
	
	template<typename T>
	T HabitalZoneOuterRadius( const T starEffectiveTemperature, const T starLuminosity ){
		const T ao = 1.3786e-4;
		const T bo = 1.4286e-9;
		const T ros = 1.77;
		const T Ts = 5700; 
		return ( ros - ao * ( starEffectiveTemperature - Ts ) - bo* pow( starEffectiveTemperature - Ts, 2.0 ) ) * sqrt( starLuminosity/SunLuminocity );
	}
	

	template<typename T>
	T HabitalZoneDistance( const T distanceFromStar, const T starEffectiveTemperature, const T starLuminosity ){
		T ro = HabitalZoneOuterRadius( starEffectiveTemperature, starLuminosity );
		T ri = HabitalZoneInnerRadius( starEffectiveTemperature, starLuminosity );
		return ( 2.0*distanceFromStar - ro - ri ) / ( ro - ri );
	}
	
    
    

}//namespace EGXPhys
