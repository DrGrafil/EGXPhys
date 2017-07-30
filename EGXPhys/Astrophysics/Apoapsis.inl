/// @file EGXPhys/Astrophysics/Apoapsis.inl
///
/// @brief Implimentation of apoapsis calculations
/// @author Elliot Grafil (Metex)
/// @date 7/29/17
/// @bug No known bugs.

namespace EGXPhys{
	
	template<typename T>
    T Apoapsis( const T& orbitalEccentricity, const T& semimajorAxis ){
    	return ( 1.0 + orbitalEccentricity ) * semimajorAxis;
    }
    
    template<typename T>
    T Apocenter( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Apofocus( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Apogalacticon( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Apobothron( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Aponigricon( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Apastron( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Aphelion( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Apohermion( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Apocytherion( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Apogee( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }

    template<typename T>
    T Apocenter( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Apolune( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Apocynthion( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Aposelene( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Apoareion( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Apozene( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Apojove( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Apochron( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Apokrone( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }

    template<typename T>
    T Aposaturnium( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Apouranion( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Apoposeidon( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Apohadion( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Apoapsis(orbitalEccentricity,semimajorAxis);
    }
    
}//namespace EGXPhys
