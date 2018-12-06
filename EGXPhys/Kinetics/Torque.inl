/// @file EGXPhys/Kinetics/Torque.inl
///
/// @brief Implimentation of torque calculations
/// @author Elliot Grafil 
/// @date 4/19/17
#include <assert.h>
#ifdef EGXPHYS_GLM
#include <glm/glm.hpp>
#endif // EGXPHYS_GLM

namespace EGXPhys{
	
	/*
	template<typename T>
	void Torque(const T(&positionFromFulcrumInm)[3], const T(&forceInN)[3], T(&torqueInNm)[3]){

	}
	*/
	/*
	template<typename T>
	void Torque(const T& positionFromFulcrumInm, const T& forceInN, T& torqueInNm) {
		assert(("Torque base template should not be called. Use the specializations", 1 == 0));
	}*/

#ifdef EGXPHYS_GLM

	
	inline void Torque(const glm::vec3& positionFromFulcrumInm, const glm::vec3& forceInN, glm::vec3& torqueInNm) {
		torqueInNm = glm::cross(positionFromFulcrumInm, forceInN);
	}
#endif // EGXPHYS_GLM
}//namespace EGXPhys
