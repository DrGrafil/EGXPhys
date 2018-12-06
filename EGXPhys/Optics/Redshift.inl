/// @file EGXPhys/Optics/Redshift.inl
///
/// @brief Implimentation of redshift calculations
/// @author Elliot Grafil 
/// @date 7/28/17


namespace EGXPhys{
	
	template<typename T>
    T redshiftByWavelength(const T& wavelengthObserved, const T& wavelengthEmitted){
    	
    	return (wavelengthObserved - wavelengthEmitted) / wavelengthEmitted;
	}
    
    template<typename T>
    T redshiftByFrequency(const T& frequencyObserved, const T& frequencyEmitted){
    	return (frequencyEmitted - frequencyObserved) / frequencyObserved;
	}
        
}//namespace EGXPhys
