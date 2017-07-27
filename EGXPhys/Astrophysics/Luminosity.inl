/// @file Astrophysics/Luminosity.inl
///
/// @brief Implimentation of luminosity calculations
/// @author Elliot Grafil (Metex)
/// @date 7/25/17
/// @bug No known bugs.

namespace EGXPhys{
	
	template<typename T>
    T blackbodyLuminosity(const T& area, const T& tempreture);
    
    template<typename T>
    T radioLuminosity(const T& fluxDensity, const T& luminosityDistance, const T& redshift, const T& spectralIndex){
    	return 	(fluxDensity * 4.0 * luminosityDistance * luminosityDistance) 
				/
				std::pow(1.0 + redshift, 1.0+spectralIndex) );
	}
    
    template<typename T>
    T solarLuminosity(const T& area, const T& tempreture);
    
    template<typename T>
    T solarLuminosityRatio(const T& area, const T& tempreture);
    
    template<typename T>
    T getBigger(const T& a, const T& b)
    {
        return a>b?a:b;
    }
}//namespace EGXPhys
