/// @file EGXPhys/Atomic/MassExcess.inl
///
/// @brief Implimentation of mass excess calculations
/// @author Elliot Grafil 
/// @date 8/13/17

namespace EGXPhys{
	
	template<typename T, typename T2>
    T2 MassExcessInu(const T& massNumber, const T2& massAtomInu){
    	return massAtomInu - massNumber;
	}
	
	template<typename T, typename T2>
    T2 MassExcessInMeVPercSquared(const T& massNumber, const T2& massAtomInu){
    	return (massAtomInu - massNumber) * NISTConst::atomicMassConstantInMeVPercSquared;
	}

	template<typename T, typename T2>
    T2 MassExcessInkg(const T& massNumber, const T2& massAtomInu){
    	return (massAtomInu - massNumber) * NISTConst::atomicMassConstant;
	}
	
	template<typename T, typename T2>
    T2 MassExcessInJPercSquared(const T& massNumber, const T2& massAtomInu){
    	return (massAtomInu - massNumber) * NISTConst::atomicMassConstantInJPercSquared;
	}
	
}//namespace EGXPhys
