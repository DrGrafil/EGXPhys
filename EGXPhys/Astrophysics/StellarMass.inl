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

        sM = std::pow(sL / (T)0.23, (T)-2.3);
        if (sm > (T)0.43) {

            if ( sm > (T)2.0) {
                
            }
            else {
                return 0;
            }
        }

        return sM;
    }
    {
        // See http://en.wikipedia.org/wiki/Mass%E2%80%93luminosity_relation
        //L/LSun = 2.51^(MagSun-MagStar)

        /* TODO (#3#): Check Stellar Mass calculations */

        double Lratio = pow(2.512, (PhysConst::SunAbsVMagnitude - absMagnitude));

        double MassRatio = pow(Lratio / 1.5, 1.0 / 3.5);

        if (MassRatio > 20.0)
        {
            MassRatio = Lratio / 3200;

            if (MassRatio < 20.0)
                std::cout << "THERE IS SOMETHING WRONG WITH STELLAR MASS " << MassRatio << std::endl;
        }
        else if (MassRatio < 2.0)
        {
            if (MassRatio < 0.43)
            {
                MassRatio = pow(Lratio / 0.23, 1.0 / 2.3);
            }
            else
            {
                MassRatio = pow(Lratio, 1.0 / 4.0);
            }
        }
        return MassRatio;
    }
    

}//namespace EGXPhys
