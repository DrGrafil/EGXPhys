/// @file EGXPhys/Atomic/DecayWidth.inl
///
/// @brief Implimentation of Decay Width calculations
/// @author Elliot Grafil 
/// @date 8/4/17


namespace EGXPhys{
	
	template<typename T>
	T DecayWidth(const T& energyUncertainty){
		return 2.0 * energyUncertainty;
	}

	template<typename T>
	T DecayWidthViaDecayConstant(const T& decayConstant){
		return NISTConst::hbarIneVs * decayConstant;
	}
	
	template<typename T>
	T DecayWidthViaHalfLife(const T& halfLife){
		return NISTConst::hbarIneVs * log(2) / halfLife;
	}
	
	template<typename T>
	T DecayWidthViaMeanLifetime(const T& meanLifetime){
		return NISTConst::hbarIneVs / meanLifetime;
	}    
}//namespace EGXPhys
