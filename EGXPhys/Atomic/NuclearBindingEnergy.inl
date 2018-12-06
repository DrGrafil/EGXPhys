/// @file EGXPhys/Atomic/NuclearBindingEnergy.inl
///
/// @brief Implimentation of nuclear binding energy calculations
/// @author Elliot Grafil 
/// @date 8/4/17


namespace EGXPhys{
	
	template<typename T, typename T2>
	T2 NuclearBindingEnergy(const T& atomicNumber, const T& massNumber, const T2& massAtomInu) {
		T c = 1.0; // c is set to 1 in atomic calculations
		return MassDefectInMeVPercSquared(atomicNumber, massNumber, massAtomInu * NISTConst::atomicMassConstantInMeVPercSquared) * c * c;
	}


	template<typename T, typename T2>
	T2 NuclearBindingEnergyInucSquared(const T& atomicNumber, const T& massNumber, const T2& massAtomInu) {
		T c = 1.0; // c is set to 1 in atomic calculations
		return MassDefectInu(atomicNumber, massNumber, massAtomInu) * c * c;
	}

	template<typename T, typename T2>
	T2 NuclearBindingEnergyInMeV(const T& atomicNumber, const T& massNumber, const T2& massAtomInMeVPercSquared) {
		T c = 1.0; // c is set to 1 in atomic calculations
		return MassDefectInMeVPercSquared(atomicNumber, massNumber, massAtomInMeVPercSquared) * c * c;
	}

	template<typename T, typename T2>
	T2 NuclearBindingEnergyInkgcSquared(const T& atomicNumber, const T& massNumber, const T2& massAtomInkg) {
		T c = 1.0; // c is set to 1 in atomic calculations
		return MassDefectInkg(atomicNumber, massNumber, massAtomInkg) * c * c;
	}

	template<typename T, typename T2>
	T2 NuclearBindingEnergyInJ(const T& atomicNumber, const T& massNumber, const T2& massAtomInJPercSquared) {
		T c = 1.0; // c is set to 1 in atomic calculations
		return MassDefectInJPercSquared(atomicNumber, massNumber, massAtomInJPercSquared) * c * c;
	}
}//namespace EGXPhys
