/// @file EGXPhys/Atomic/HalfLife.inl
///
/// @brief Implimentation of half life calculations
/// @author Elliot Grafil (Metex)
/// @date 8/4/17
/// @bug No known bugs.

namespace EGXPhys{
	
	template<typename T>
	T HalfLife(const T& decayConstant){
		return log(2.0)/decayConstant;
	}

    template<typename T>
	T HalfLifeViaMeanLifetime(const T& meanLifetime){
		return meanLifetime * log(2.0);
	}
	
	template<typename T>
	T HalfLifeViaDecayWidth(const T& decayWidth){
		return NISTConst::hbarIneVs * log(2.0) / decayWidth;
	}
}//namespace EGXPhys
