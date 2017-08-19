/// @file EGXPhys/Atomic/QValue.inl
///
/// @brief Implimentation of Q-value calculations
/// @author Elliot Grafil (Metex)
/// @date 8/18/17


namespace EGXPhys{
	
	    // -------------- Alpha ----------------------
    
    template<typename T>
    T QValueAlphaDecayInMeV(const T& massParentInu, const T& massDaughterInu){
    	return (massParentInu - NISTConst::alphaParticleMassInu - massDaughterInu) * NISTConst::atomicMassConstantInMeVPercSquared;
	}
	
	template<typename T>
    T QValueAlphaDecayInJ(const T& massParentInu, const T& massDaughterInu){
    	return (massParentInu - NISTConst::alphaParticleMassInu - massDaughterInu) * NISTConst::atomicMassConstantInJPercSquared;
	}	
    
    template<typename T>
    T QValueDoubleAlphaDecayInMeV(const T& massParentInu, const T& massDaughterInu){
    	return (massParentInu - 2.0 * NISTConst::alphaParticleMassInu - massDaughterInu) * NISTConst::atomicMassConstantInMeVPercSquared;
	}
    
    template<typename T>
    T QValueDoubleAlphaDecayInJ(const T& massParentInu, const T& massDaughterInu){
    	return (massParentInu - 2.0 * NISTConst::alphaParticleMassInu - massDaughterInu) * NISTConst::atomicMassConstantInJPercSquared;
	}
    
    // -------------- Beta Minus----------------------
    
   	template<typename T>
    T QValueBetaMinusDecayInMeV(const T& massParentInu, const T& massDaughterInu){
    	return (massParentInu - NISTConst::electronMassInu - massDaughterInu) * NISTConst::atomicMassConstantInMeVPercSquared;
	}
	
	template<typename T>
    T QValueBetaMinusDecayInJ(const T& massParentInu, const T& massDaughterInu){
    	return (massParentInu - NISTConst::electronMassInu - massDaughterInu) * NISTConst::atomicMassConstantInJPercSquared;
	}	
    
    template<typename T>
    T QValueDoubleBetaMinusDecayInMeV(const T& massParentInu, const T& massDaughterInu){
    	return (massParentInu - 2.0 * NISTConst::electronMassInu - massDaughterInu) * NISTConst::atomicMassConstantInMeVPercSquared;
	}
    
    template<typename T>
    T QValueDoubleBetaMinusDecayInJ(const T& massParentInu, const T& massDaughterInu){
    	return (massParentInu - 2.0 * NISTConst::electronMassInu - massDaughterInu) * NISTConst::atomicMassConstantInJPercSquared;
	}
    
    // -------------- Beta Plus ----------------------
    // Note positron mass = electron mass
    
    template<typename T>
    T QValueBetaPlusDecayInMeV(const T& massParentInu, const T& massDaughterInu){
    	return (massParentInu - NISTConst::electronMassInu - massDaughterInu) * NISTConst::atomicMassConstantInMeVPercSquared;
	}
    
	template<typename T>
    T QValueBetaPlusDecayInJ(const T& massParentInu, const T& massDaughterInu){
    	return (massParentInu - NISTConst::electronMassInu - massDaughterInu) * NISTConst::atomicMassConstantInJPercSquared;
	}
    
    template<typename T>
    T QValueDoubleBetaPlusDecayInMeV(const T& massParentInu, const T& massDaughterInu){
    	return (massParentInu - 2.0 * NISTConst::electronMassInu - massDaughterInu) * NISTConst::atomicMassConstantInMeVPercSquared;
	}
    
    template<typename T>
    T QValueDoubleBetaPlusDecayInJ(const T& massParentInu, const T& massDaughterInu){
    	return (massParentInu - 2.0 * NISTConst::electronMassInu - massDaughterInu) * NISTConst::atomicMassConstantInJPercSquared;
	}
    
    // -------------- Electron Capture ----------------------
    
    template<typename T>
    T QValueElectronCaptureDecayInMeV(const T& massParentInu, const T& massDaughterInu);
    
	template<typename T>
    T QValueElectronCaptureDecayInJ(const T& massParentInu, const T& massDaughterInu);
    
    template<typename T>
    T QValueDoubleElectronCaptureDecayInMeV(const T& massParentInu, const T& massDaughterInu);
    
    template<typename T>
    T QValueDoubleElectronCaptureDecayInJ(const T& massParentInu, const T& massDaughterInu);
    
    // -------------- Neutron ----------------------
    
    template<typename T>
    T QValueNeutronDecayInMeV(const T& massParentInu, const T& massDaughterInu){
    	return (massParentInu - NISTConst::neutronMassInu - massDaughterInu) * NISTConst::atomicMassConstantInMeVPercSquared;
	}
    
	template<typename T>
    T QValueNeutronDecayInJ(const T& massParentInu, const T& massDaughterInu){
    	return (massParentInu - NISTConst::neutronMassInu - massDaughterInu) * NISTConst::atomicMassConstantInJPercSquared;
	}
    
    template<typename T>
    T QValueDoubleNeutronDecayInMeV(const T& massParentInu, const T& massDaughterInu){
    	return (massParentInu - 2.0 * NISTConst::neutronMassInu - massDaughterInu) * NISTConst::atomicMassConstantInMeVPercSquared;
	}
    
    template<typename T>
    T QValueDoubleNeutronDecayInJ(const T& massParentInu, const T& massDaughterInu){
    	return (massParentInu - 2.0 * NISTConst::neutronMassInu - massDaughterInu) * NISTConst::atomicMassConstantInJPercSquared;
	}
    
    // -------------- Proton ----------------------
    
    template<typename T>
    T QValueProtonDecayInMeV(const T& massParentInu, const T& massDaughterInu){
    	return (massParentInu - NISTConst::protonMassInu - massDaughterInu - NISTConst::electronMassInu) * NISTConst::atomicMassConstantInMeVPercSquared;
	}
    
	template<typename T>
    T QValueProtonDecayInJ(const T& massParentInu, const T& massDaughterInu){
    	return (massParentInu - NISTConst::protonMassInu - massDaughterInu - NISTConst::electronMassInu) * NISTConst::atomicMassConstantInJPercSquared;
	}
    
    template<typename T>
    T QValueDoubleProtonDecayInMeV(const T& massParentInu, const T& massDaughterInu){
    	return (massParentInu - 2.0 * NISTConst::protonMassInu - massDaughterInu - 2.0 * NISTConst::electronMassInu) * NISTConst::atomicMassConstantInMeVPercSquared;
	}
    
    template<typename T>
    T QValueDoubleProtonDecayInJ(const T& massParentInu, const T& massDaughterInu){
    	return (massParentInu - 2.0 * NISTConst::protonMassInu - massDaughterInu - 2.0 * NISTConst::electronMassInu) * NISTConst::atomicMassConstantInJPercSquared;
	}
}//namespace EGXPhys
