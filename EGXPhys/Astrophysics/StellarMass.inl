/// @file EGXPhys/Astrophysics/PlanetCriteria.inl
///
/// @brief Implimentation of planet criteria calculations
/// @author Elliot Grafil (Metex)
/// @date 7/31/17


namespace EGXPhys{
	
	template<typename T>
	T StellarMass(const T& starMass, const T& referenceMass) {
		return starMass / referenceMass;
	}

	template<typename T>
	T SolarMass(const T& starMass) {
		return starMass / SunMass;
	}
    
    
    template<typename T>
    T StellarMassApproximation(const T& starLuminosityInW) {

    }

    template<typename T>
    T StellarMassApproximationInkg(const T& starLuminosityInW) {

    }

    template<typename T>
    T StellarMassApproximationInSolarMass(const T& starLuminosityInSolarLuminosity) {
        T sL = starLuminosityInSolarLuminosity;
        T sM = 0.0;

        sM = std::pow(sL / (T)0.23, (T)-2.3); // M < 0.43 Mdot
        if (sM > (T)0.43) {
            sM = std::pow(sL, (T)-4.0);         // 0.43 Mdot <= M < 2 Mdot
            if (sM > (T)2.0) {

                sM = std::pow(sL / (T)1.4, (T)3.5); // 2 Mdot <= M < 20 Mdot
                if (sM > (T)20.0) {

                    sM = sL / (T)32000.0; // M > 50 Mdot
                    if (sM < (T)50.0) {
                        //Need to put warning here of some sort.
                        std::cout << "THERE IS SOMETHING WRONG WITH STELLAR MASS " << sM << std::endl;
                    }
                }
                else if (sM < (T)2.0) {
                    //Need to put warning here of some sort.
                    std::cout << "THERE IS SOMETHING WRONG WITH STELLAR MASS " << sM << std::endl;
                }
            } else if (sM < (T)0.43) {
                //Need to put warning here of some sort.
                std::cout << "THERE IS SOMETHING WRONG WITH STELLAR MASS " << sM << std::endl;
            }
        }

        return sM;
    }
   
}//namespace EGXPhys
