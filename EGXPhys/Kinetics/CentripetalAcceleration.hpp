/// @file EGXPhys/Kinetics/Torque.hpp
///
/// @brief Calculates the torque applied.
///
/// @author Elliot Grafil 
/// @date 4/15/18

/// @defgroup EGXPhys-Kinetics-Torque Torque
/// @ingroup EGXPhys-Kinetics

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{
	/// @addtogroup EGXPhys-Kinetics-Torque
	/// @{
	
	/**<!--
	*   @brief Calculates the torque, \f$\tau\f$, in Newton meters. Torque on an object is calculated from the force, \f$F\f$, applied to an object at a position, \f$r\f$, away from the fulcrum (pivot point):
	*   		\f[\tau=r \times F \f]
	*
	*   See https://en.wikipedia.org/wiki/Torque
	*
	*   @param positionFromFulcrumInm \f$r\ (m)\f$ Position that the force is apply to object away from fulcrum(pivot point) in meters.
	*	@param forceInN \f$F\ (N)\f$ Force vector applied to object in Newtons.
	*	@param torqueInNm \f$\tau\ (N\ m)\f$ Torque in Newton meters. -->
	*/
	//template<typename T>
	//void Torque(const T(&positionFromFulcrumInm)[3], const T(&forceInN)[3], T(&torqueInNm)[3]);

	
#ifdef EGXPHYS_GLM
	/**
	*   @brief Calculates the torque, \f$\tau\f$, in Newton meters. Torque on an object is calculated from the force, \f$F\f$, applied to an object at a position, \f$r\f$, away from the fulcrum (pivot point):
	*   		\f[\tau=r \times F \f]
	*
	*   See https://en.wikipedia.org/wiki/Torque
	*
	*   @param positionFromFulcrumInm \f$r\ (m)\f$ Position that the force is apply to object away from fulcrum(pivot point) in meters.
	*	@param forceInN \f$F\ (N)\f$ Force vector applied to object in Newtons.
	*	@param torqueInNm \f$\tau\ (N\ m)\f$ Torque in Newton meters.
	*/
	//void Torque(const glm::vec3& positionFromFulcrumInm, const glm::vec3& forceInN, glm::vec3& torqueInNm);
#endif // EGXPHYS_GLM

    /// @}
} //namespace EGXPhys

#include "CentripetalAcceleration.inl"
