/// @file EGXPhys/Atomic/DecayWidth.inl
///
/// @brief Implimentation of Decay Width calculations
/// @author Elliot Grafil (Metex)
/// @date 8/4/17
/// @bug No known bugs.

namespace EGXPhys{
	
	template<typename T>
	T DecayWidth(const T& energyUncertainty){
		return 2.0 * energyUncertainty;
	}

	template<typename T>
	T DecayWidthViaDecayConstant(const T& decayConstant){
		return hbarIneVs * decayConstant;
	}
	
	template<typename T>
	T DecayWidthViaHalfLife(const T& halfLife){
		return hbarIneVs * log(2) / halfLife;
	}
	
	template<typename T>
	T DecayWidthViaMeanLifetime(const T& meanLifetime){
		return hbarIneVs / meanLifetime;
	}    
}//namespace EGXPhys
