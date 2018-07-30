/// @file EGXPhys/Kinetics/AngularAcceleration.inl
///
/// @brief Implimentation of angular acceleration calculations
/// @author Elliot Grafil (Metex)
/// @date 4/19/17

#ifdef EGXPHYS_GLM
#include <glm/glm.hpp>
#endif // EGXPHYS_GLM

namespace EGXPhys{
	
	/*
	template<typename T>
	void AngularAcceleration(const T(&torqueInNm)[3], const T(&inertiaTensorInkgmsquared)[9], T(&angularAccelerationInradPersSquared)[3]){

	}
	*/

#ifdef EGXPHYS_GLM
    /*
    template<>
	void AngularAcceleration(const glm::vec3& torqueInNm, const glm::mat3& inertiaTensorInkgmsquared, glm::vec3& angularAccelerationInradPersSquared) {
		angularAccelerationInradPersSquared = torqueInNm * glm::inverse(inertiaTensorInkgmsquared);
	}
    */

#endif // EGXPHYS_GLM
}//namespace EGXPhys
