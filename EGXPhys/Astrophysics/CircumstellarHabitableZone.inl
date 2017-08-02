/// @file EGXPhys/Astrophysics/CircumstellarHabitableZone.inl
///
/// @brief Implimentation of Circumstellar Habitable Zone calculations
/// @author Elliot Grafil (Metex)
/// @date 8/2/17
/// @bug No known bugs.

namespace EGXPhys{
	



    template<typename T>
	T CircumstellarHabitableZoneInnerRadius( const T  starEffectiveTemperature, const T starLuminosity){
		const T ai = 2.7619e-5;
		const T bi = 3.8095e-9;
		const T ris = 0.72;
		const T Ts = 5700; 
		return ( ris - ai * ( starEffectiveTemperature - Ts ) - starEffectiveTemperature* pow( starEffectiveTemperature - Ts, 2.0 ) ) * sqrt( starLuminosity/SunLuminocity );
	}
	
	template<typename T>
	T CircumstellarHabitableZoneZoneOuterRadius( const T starEffectiveTemperature, const T starLuminosity ){
		const T ao = 1.3786e-4;
		const T bo = 1.4286e-9;
		const T ros = 1.77;
		const T Ts = 5700; 
		return ( ros - ao * ( starEffectiveTemperature - Ts ) - bo* pow( starEffectiveTemperature - Ts, 2.0 ) ) * sqrt( starLuminosity/SunLuminocity );
	}
	

	template<typename T>
	T CircumstellarHabitableZoneZoneDistance( const T distanceFromStar, const T starEffectiveTemperature, const T starLuminosity ){
		T ro = HabitalZoneOuterRadius( starEffectiveTemperature, starLuminosity );
		T ri = HabitalZoneInnerRadius( starEffectiveTemperature, starLuminosity );
		return ( 2.0*distanceFromStar - ro - ri ) / ( ro - ri );
	}
    
}//namespace EGXPhys
