/// @file EGXPhys/Atomic/NuclearSeparationEnergy.inl
///
/// @brief Implimentation of nuclear separation energy calculations
/// @author Elliot Grafil (Metex)
/// @date 8/17/17


namespace EGXPhys{
	
	template<typename T>
    T NeutronSeparationEnergyInMeV(const T& massAtomInu, const T& massProducedAtomInu){
    	return (massProducedAtomInu + NISTConst::neutronMassInu - massAtomInu) * NISTConst::atomicMassConstantInMeVPercSquared;
	}

	template<typename T>
    T NeutronSeparationEnergyInJ(const T& massAtomInu, const T& massProducedAtomInu){
    	return (massProducedAtomInu + NISTConst::neutronMassInu - massAtomInu) * NISTConst::atomicMassConstantInJPercSquared;
	}
	
	template<typename T>
    T NeutronTwoSeparationEnergyInMeV(const T& massAtomInu, const T& massProducedAtomInu){
    	return (massProducedAtomInu + 2.0 * NISTConst::neutronMassInu - massAtomInu) * NISTConst::atomicMassConstantInMeVPercSquared;
	}

	template<typename T>
    T NeutronTwoSeparationEnergyInJ(const T& massAtomInu, const T& massProducedAtomInu){
    	return (massProducedAtomInu + 2.0 * NISTConst::neutronMassInu - massAtomInu) * NISTConst::atomicMassConstantInJPercSquared;
	}
	
    template<typename T>
    T ProtonSeparationEnergyInMeV(const T& massAtomInu, const T& massProducedAtomInu){
    	return (massProducedAtomInu + NISTConst::protonMassInu + NISTConst::electronMassInu - massAtomInu) * NISTConst::atomicMassConstantInMeVPercSquared;
	}

    template<typename T>
    T ProtonSeparationEnergyInJ(const T& massAtomInu, const T& massProducedAtomInu){
    	return (massProducedAtomInu + NISTConst::protonMassInu + NISTConst::electronMassInu - massAtomInu) * NISTConst::atomicMassConstantInJPercSquared;
	}
	    
    template<typename T>
    T ProtonTwoSeparationEnergyInMeV(const T& massAtomInu, const T& massProducedAtomInu){
    	return (massProducedAtomInu + 2.0 * (NISTConst::protonMassInu + NISTConst::electronMassInu)  - massAtomInu) * NISTConst::atomicMassConstantInMeVPercSquared;
	}

    template<typename T>
    T ProtonTwoSeparationEnergyInJ(const T& massAtomInu, const T& massProducedAtomInu){
    	return (massProducedAtomInu + 2.0 * (NISTConst::protonMassInu + NISTConst::electronMassInu)  - massAtomInu) * NISTConst::atomicMassConstantInJPercSquared;
	}    
}//namespace EGXPhys
