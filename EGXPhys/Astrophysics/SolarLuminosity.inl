/// @file EGXPhys/Astrophysics/SolarLuminosity.inl
///
/// @brief Implimentation of solar luminosity calculations
/// @author Elliot Grafil (Metex)
/// @date 7/25/17


namespace EGXPhys{
	    
    template<typename T>
    T solarLuminosity(const T starLuminosityInW){
    	
    	return starLuminosityInW/solarLuminosity;
	}
    
    template<typename T>
    T solarLuminosityRatio(const T starLuminosityInW){
    	return starLuminosityInW / solarLuminosity;
	}
    
    template<typename T>
    T solarBolometricLuminosity(const T starBolometricLuminosityInW) {

        return starBolometricLuminosityInW / solarBolometricLuminosity;
    }

    template<typename T>
    T solarBolometricLuminosityRatio(const T starBolometricLuminosityInW) {
        return starBolometricLuminosityInW / solarBolometricLuminosity;
    }
}//namespace EGXPhys
