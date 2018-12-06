/// @file EGXPhys/Astrophysics/PlanetaryEquilibriumTempreture.inl
///
/// @brief Implimentation of planetary equilibrium tempreture calculations
/// @author Elliot Grafil 
/// @date 7/29/18


namespace EGXPhys{
	
	template<typename T>
	T PlanetaryEquilibriumTempreture(const T planetBondAlbedo, const T planetDistanceFromStarInm, const T starLuminosityInW, const T planetEmissivity){
		return std::pow(
            (starLuminosityInW * ((T)1.0 - planetBondAlbedo))
            / 
            ((T)16.0 * planetEmissivity * NISTConst::sigma * EGXMath::pi * planetDistanceFromStarInm * planetDistanceFromStarInm),
            1.0 / 4.0);
	}

    template<typename T>
    T PlanetaryEquilibriumTempreture(const T planetBondAlbedo, const T planetDistanceFromStarInm, const T starEffectiveSurfaceTemperatureInK, const T starRadiusInm, const T planetEmissivity) {
        return starEffectiveSurfaceTemperatureInK * std::pow(((T)1.0 - planetBondAlbedo) / planetEmissivity, 1.0 / 4.0) * std::sqrt(starRadiusInm / ((T)2.0 * planetDistanceFromStarInm));
    }
    
}//namespace EGXPhys
