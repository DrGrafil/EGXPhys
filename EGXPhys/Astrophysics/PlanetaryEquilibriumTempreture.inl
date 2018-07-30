/// @file EGXPhys/Astrophysics/PlanetaryEquilibriumTempreture.inl
///
/// @brief Implimentation of planetary equilibrium tempreture calculations
/// @author Elliot Grafil (Metex)
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
        return starEffectiveSurfaceTemperatureInK * std::pow( ((T)1.0 - planetBondAlbedo)/ planetEmissivity, 1.0 / 4.0) * std::sqrt(starRadiusInm / ((T)2.0 * planetDistanceFromStarInm))
    }

    /*
    The planetary equilibrium temperature is a theoretical temperature that the planet would be at when considered simply as if it were a black body being heated only by its parent star.
    In this model, the presence or absence of an atmosphere (and therefore any greenhouse effect) is not considered.
    https://en.wikipedia.org/wiki/Planetary_equilibrium_temperature
    http://www.astro.princeton.edu/~strauss/FRS113/writeup3/

    */

    
}//namespace EGXPhys
