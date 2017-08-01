/// @file EGXPhys/Astrophysics/PlanetCriteria.inl
///
/// @brief Implimentation of planet criteria calculations
/// @author Elliot Grafil (Metex)
/// @date 7/31/17
/// @bug No known bugs.

namespace EGXPhys{
	
	
	template<typename T>
    T PlanetSimilarityIndex( const T& planetMeanRadius, const T& referenceMeanRadius, const T& planetBulkDensity, const T& referenceBulkDensity, const T& planetEscapeVelocity, const T& referenceEscapeVelocity, const T& planetSurfaceTemperature, const T& referenceSurfaceTemperature ){
    	
	}
	
	template<typename T>
    T EarthSimilarityIndex( const T& planetMeanRadius, const T& planetBulkDensity, const T& planetEscapeVelocity, const T& planetSurfaceTemperature){
    	return PlanetSimilarityIndex( planetMeanRadius, referenceMeanRadius, planetBulkDensity, referenceBulkDensity, planetEscapeVelocity, referenceEscapeVelocity, planetSurfaceTemperature, referenceSurfaceTemperature);
	}
	
	
	template<typename T>
    T PlanetSimilarityIndexInterior( const T& planetMeanRadius, const T& referenceMeanRadius, const T& planetBulkDensity, const T& referenceBulkDensity ){
    	
		return ()
	}
	
	template<typename T>
    T EarthSimilarityIndexInterior( const T& planetMeanRadius, const T& referenceMeanRadius, const T& planetBulkDensity, const T& referenceBulkDensity, const T& planetEscapeVelocity, const T& referenceEscapeVelocity, const T& planetSurfaceTemperature, const T& referenceSurfaceTemperature ){
    	
	}
	
	
	template<typename T>
    T PlanetSimilarityIndexSurface( const T& planetMeanRadius, const T& referenceMeanRadius, const T& planetBulkDensity, const T& referenceBulkDensity, const T& planetEscapeVelocity, const T& referenceEscapeVelocity, const T& planetSurfaceTemperature, const T& referenceSurfaceTemperature ){
    	
	}
	
	template<typename T>
    T EarthSimilarityIndexSurface( const T& planetMeanRadius, const T& referenceMeanRadius, const T& planetBulkDensity, const T& referenceBulkDensity, const T& planetEscapeVelocity, const T& referenceEscapeVelocity, const T& planetSurfaceTemperature, const T& referenceSurfaceTemperature ){
    	
	}
	
	
	template<typename T>
    T Periapsis( const T& orbitalEccentricity, const T& semimajorAxis ){
    	return ( 1.0 - orbitalEccentricity ) * semimajorAxis;
    }
    
    template<typename T>
    T Pericenter( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Periapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Perifocus( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Periapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Perigalacticon( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Periapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Peribothron( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Periapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Perinigricon( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Periapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Periastron( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Periapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Perihelion( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Periapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Perihermion( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Periapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Pericytherion( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Periapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Perigee( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Periapsis(orbitalEccentricity,semimajorAxis);
    }

    template<typename T>
    T Perilune( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Periapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Pericynthion( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Periapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Periselene( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Periapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Periareion( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Periapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Perizene( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Periapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Perijove( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Periapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Perichron( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Periapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Perikrone( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Periapsis(orbitalEccentricity,semimajorAxis);
    }

    template<typename T>
    T Perisaturnium( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Periapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Periuranion( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Periapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Periposeidon( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Periapsis(orbitalEccentricity,semimajorAxis);
    }
    
    template<typename T>
    T Perihadion( const T& orbitalEccentricity, const T& semimajorAxis ){
        return Periapsis(orbitalEccentricity,semimajorAxis);
    }
    
}//namespace EGXPhys
