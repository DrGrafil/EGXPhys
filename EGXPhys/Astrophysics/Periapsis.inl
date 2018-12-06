/// @file EGXPhys/Astrophysics/Periapsis.inl
///
/// @brief Implimentation of periapsis calculations
/// @author Elliot Grafil 
/// @date 7/29/17


namespace EGXPhys{
	
	template<typename T>
    T Periapsis( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
    	return ( 1.0 - orbitalEccentricity ) * semiMajorAxisInm;
    }
    
    template<typename T>
    T Pericenter( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
        return Periapsis(orbitalEccentricity,semiMajorAxisInm);
    }
    
    template<typename T>
    T Perifocus( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
        return Periapsis(orbitalEccentricity,semiMajorAxisInm);
    }
    
    template<typename T>
    T Perigalacticon( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
        return Periapsis(orbitalEccentricity,semiMajorAxisInm);
    }
    
    template<typename T>
    T Peribothron( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
        return Periapsis(orbitalEccentricity,semiMajorAxisInm);
    }
    
    template<typename T>
    T Perinigricon( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
        return Periapsis(orbitalEccentricity,semiMajorAxisInm);
    }
    
    template<typename T>
    T Periastron( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
        return Periapsis(orbitalEccentricity,semiMajorAxisInm);
    }
    
    template<typename T>
    T Perihelion( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
        return Periapsis(orbitalEccentricity,semiMajorAxisInm);
    }
    
    template<typename T>
    T Perihermion( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
        return Periapsis(orbitalEccentricity,semiMajorAxisInm);
    }
    
    template<typename T>
    T Pericytherion( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
        return Periapsis(orbitalEccentricity,semiMajorAxisInm);
    }
    
    template<typename T>
    T Perigee( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
        return Periapsis(orbitalEccentricity,semiMajorAxisInm);
    }

    template<typename T>
    T Perilune( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
        return Periapsis(orbitalEccentricity,semiMajorAxisInm);
    }
    
    template<typename T>
    T Pericynthion( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
        return Periapsis(orbitalEccentricity,semiMajorAxisInm);
    }
    
    template<typename T>
    T Periselene( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
        return Periapsis(orbitalEccentricity,semiMajorAxisInm);
    }
    
    template<typename T>
    T Periareion( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
        return Periapsis(orbitalEccentricity,semiMajorAxisInm);
    }
    
    template<typename T>
    T Perizene( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
        return Periapsis(orbitalEccentricity,semiMajorAxisInm);
    }
    
    template<typename T>
    T Perijove( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
        return Periapsis(orbitalEccentricity,semiMajorAxisInm);
    }
    
    template<typename T>
    T Perichron( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
        return Periapsis(orbitalEccentricity,semiMajorAxisInm);
    }
    
    template<typename T>
    T Perikrone( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
        return Periapsis(orbitalEccentricity,semiMajorAxisInm);
    }

    template<typename T>
    T Perisaturnium( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
        return Periapsis(orbitalEccentricity,semiMajorAxisInm);
    }
    
    template<typename T>
    T Periuranion( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
        return Periapsis(orbitalEccentricity,semiMajorAxisInm);
    }
    
    template<typename T>
    T Periposeidon( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
        return Periapsis(orbitalEccentricity,semiMajorAxisInm);
    }
    
    template<typename T>
    T Perihadion( const T& orbitalEccentricity, const T& semiMajorAxisInm ){
        return Periapsis(orbitalEccentricity,semiMajorAxisInm);
    }
    
}//namespace EGXPhys
