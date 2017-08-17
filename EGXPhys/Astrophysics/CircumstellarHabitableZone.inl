/// @file EGXPhys/Astrophysics/CircumstellarHabitableZone.inl
///
/// @brief Implimentation of Circumstellar Habitable Zone calculations
/// @author Elliot Grafil (Metex)
/// @date 8/2/17


namespace EGXPhys{
	
	template<typename T>
	T CircumstellarHabitableZoneLimit(const T& starLuminosity, const T& stellarFluxEffective){
		return sqrt((starLuminosity/SunLuminocity)/stellarFluxEffective);
	}

	template<typename T>
	T StellarFluxEffectiveSelsis(const T& starEffectiveSurfaceTemperature, const T& sunEffectiveStellarFlux, const T& aModelParameter, const T& bModelParameter){
		const T TempStar = starEffectiveSurfaceTemperature - 5700.0;
		return 1.0 / pow( sunEffectiveStellarFlux - aModelParameter * TempStar - bModelParameter * TempStar * TempStar  ,2.0);
	}	
	
	template<typename T>
	T StellarFluxEffectiveUnderwood(const T& starEffectiveSurfaceTemperature, const T& sunEffectiveStellarFlux, const T& aModelParameter, const T& bModelParameter){
		return 1.0;
	}
	
    template<typename T>
	T CircumstellarHabitableZoneInnerRadius( const T& starEffectiveSurfaceTemperature, const T& starLuminosity){
		return CircumstellarHabitableZoneLimit(starLuminosity, StellarFluxEffectiveSelsis(starEffectiveSurfaceTemperature, 0.72, 2.7619e-5, 3.8095e-9) );
	}
	
	template<typename T>
	T CircumstellarHabitableZoneZoneOuterRadius( const T& starEffectiveSurfaceTemperature, const T& starLuminosity ){
		return CircumstellarHabitableZoneLimit(starLuminosity, StellarFluxEffectiveSelsis(starEffectiveSurfaceTemperature, 1.77, 1.3786e-4, 1.4286e-9) );
	}
	

	template<typename T>
	T CircumstellarHabitableZoneDistance(const T& distanceFromStar, const T& CHZOuterBoundary, const T& CHZInnerBoundary){
		return (2.0 * distanceFromStar - CHZOuterBoundary - CHZInnerBoundary )/(CHZOuterBoundary - CHZInnerBoundary);
	}
    
}//namespace EGXPhys
