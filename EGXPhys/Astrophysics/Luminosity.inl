/// @file EGXPhys/Astrophysics/Luminosity.inl
///
/// @brief Implimentation of luminosity calculations
/// @author Elliot Grafil 
/// @date 7/25/17


namespace EGXPhys{
	
	template<typename T>
    T blackbodyLuminosity(const T& area, const T& tempreture){
    	
    	return NISTConst::sigma * area * pow(tempreture,4.0);
	}
    
    template<typename T>
    T radioLuminosity(const T& fluxDensity, const T& luminosityDistance, const T& redshift, const T& spectralIndex){
    	return 	((fluxDensity * 4.0 * luminosityDistance * luminosityDistance) 
				/
				pow(1.0 + redshift, 1.0+spectralIndex) );
	}
        
}//namespace EGXPhys
