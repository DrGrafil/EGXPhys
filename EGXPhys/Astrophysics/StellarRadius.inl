/// @file EGXPhys/Astrophysics/StellarRadius.inl
///
/// @brief Implimentation of stellar radius calculations
/// @author Elliot Grafil (Metex)
/// @date 3/19/18


namespace EGXPhys{
	
    template<typename T>
    T StellarRadius(const T starEffectiveSurfaceTemperatureInK, const T starLuminosityInW) {
        return StellarRadiusFromLuminosityInWatts(starEffectiveSurfaceTemperatureInK, starLuminosityInW);
    }

    template<typename T>
    T StellarRadiusFromLuminosityInWatts(const T starEffectiveSurfaceTemperatureInK, const T starLuminosityInW) {
        return std::sqrt(starLuminosityInW / ((T)4.0 * (T)EGXMath::pi * (T)NISTConst::sigma * starEffectiveSurfaceTemperatureInK * starEffectiveSurfaceTemperatureInK * starEffectiveSurfaceTemperatureInK * starEffectiveSurfaceTemperatureInK));
    }

    template<typename T>
    T StellarRadiusFromLuminosityInSolarLuminosity(const T starEffectiveSurfaceTemperatureInK, const T starLuminosityInSolarLuminosity) {
        return StellarRadiusFromLuminosityInWatts(starEffectiveSurfaceTemperatureInK, starLuminosityInSolarLuminosity * (T)solarLuminosity);
    }


}//namespace EGXPhys
