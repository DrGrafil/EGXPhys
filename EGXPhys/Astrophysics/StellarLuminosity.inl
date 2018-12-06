/// @file EGXPhys/Astrophysics/SolarLuminosityRatio.inl
///
/// @brief Implimentation of solar luminosity ratio calculations
/// @author Elliot Grafil 
/// @date 7/25/17


namespace EGXPhys{
	    
    template<typename T>
    T StellarLuminosity(const T starAbsoluteBolometricMagnitude){
        
    	return (T)zeroPointLuminosity * std::pow((T)10.0, (T)-0.4 *starAbsoluteBolometricMagnitude);
	}
    
}//namespace EGXPhys
