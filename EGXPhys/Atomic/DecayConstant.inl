/// @file EGXPhys/Atomic/DecayConstant.inl
///
/// @brief Implimentation of decay constant calculations
/// @author Elliot Grafil (Metex)
/// @date 8/4/17
/// @bug No known bugs.

namespace EGXPhys{
	
	template<typename T>
	T DecayConstant(const T& energyUncertainty){
		return 1.0;
	}

	template<typename T>
	T DecayConstantViaHalfLife(const T& halfLife){
		return halfLife * log(2);
	}
	
	template<typename T>
	T DecayConstantViaMeanLifetime(const T& meanLifetime){
		return 1.0 / meanLifetime;
	}
	
	template<typename T>
	T DecayConstantViaDecayWidth(const T& decayWidth){
		return decayWidth / hbarIneVs;
	}    
}//namespace EGXPhys
