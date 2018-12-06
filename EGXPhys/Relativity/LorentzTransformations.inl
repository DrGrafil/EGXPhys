/// @file EGXPhys/Relativity/LorentzTransformations.inl
///
/// @brief Implimentation of Lorentz Transformations calculations
/// @author Elliot Grafil 
/// @date 8/2/17


namespace EGXPhys{
	
	template<typename T>
    T LorentzFactor(const T& velocity){
    	return 1.0/(sqrt(1.0-pow(v/NISTConst::c,2.0)));
	}
    
    template<typename T>
    T LorentzFactorViaMomentum(const T& momentum, const T& restMass);{
        return sqrt(1.0+pow(momentum/(restMass*NISTConst::c),2.0)));
    }
    
    template<typename T>
    T LorentzFactorViaEnergy(const T& energyTotal, const T& energyRest){
        return energyTotal/energyRest;
    }
    
    template<typename T>
    T LorentzFactorViaRapidity(const T& rapidity){
        return Cosh(rapidity);
    }
    
}//namespace EGXPhys
