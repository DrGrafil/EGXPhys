/// @file EGXPhys/Astrophysics/PlanetaryMass.inl
///
/// @brief Implimentation of planet criteria calculations
/// @author Elliot Grafil 
/// @date 7/31/17


namespace EGXPhys{
	
	
	template<typename T>
    T PlanetaryMass(const T& planetMass, const T& referenceMass){
    	return planetMass/referenceMass;
	}

	template<typename T>
	T PlanetaryEarthMass(const T& planetMass) {
		return planetMass / earthMass;
	}

	template<typename T>
	T PlanetaryLunarMass(const T& planetMass) {
		return planetMass / moonMass;
	}

	template<typename T>
	T PlanetaryJupiterMass(const T& planetMass) {
		return planetMass / jupiterMass;
	}

	template<typename T>
	T PlanetaryJovianMass(const T& planetMass) {
		return planetMass / jupiterMass;
	}
    

}//namespace EGXPhys
