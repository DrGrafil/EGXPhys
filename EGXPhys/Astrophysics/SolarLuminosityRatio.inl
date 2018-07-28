/// @file EGXPhys/Astrophysics/SolarLuminosityRatio.inl
///
/// @brief Implimentation of solar luminosity ratio calculations
/// @author Elliot Grafil (Metex)
/// @date 7/25/17


namespace EGXPhys{
	    

    
    template<typename T>
    T SolarLuminosityRatio(const T starLuminosityInW){
    	return starLuminosityInW / solarLuminosity;
	}
    
    template<typename T>
    T SolarBolometricLuminosityRatio(const T starBolometricLuminosityInW) {
        return starBolometricLuminosityInW / solarBolometricLuminosity;
    }
}//namespace EGXPhys
