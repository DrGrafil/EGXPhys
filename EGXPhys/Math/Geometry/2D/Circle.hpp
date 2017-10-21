/// @file templates/header.hpp
///
/// @brief Allows you to use get bigger numbers
///
/// <templates/template.hpp> need to be included to use these functionalities.
/// @author Elliot Grafil (Metex)
/// @date 7/25/17
/// @bug No known bugs.

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
    /// @addtogroup EGXPhys-Geometry
    /// @{
    

	/** 
	*   @brief Calculates the area, \f$A_{Circle}\f$, of a circle given its radius, \f$r\f$.
	*
	*	\f[A_{Circle}=\pi r^2\f]
	*
	*   @param radius \f$r\ (m)\f$ Radius. The radius of a circle in meters.
	*   @return \f$A_{Circle}\ (m^2)\f$ Area. The area of a circle in meters squared.
	* 	@see CircleCircumference() to calculate the circumference of a circle, \f$C_{Circle}\f$.
	* 	@see SphereArea() to calculate area if a sphere, \f$A_{Sphere}\f$.
	* 	@see SphereVolume() to calculate the volume of a sphere, \f$V_{Sphere}\f$.
	*/   
    template<typename T>
    T CircleArea( const T& radius );
    
    /** 
	*   @brief Calculates the circumference, \f$C_{Circle}\f$, of a circle given its radius, \f$r\f$.
	*
	*	\f[C_{Circle}=2 \pi r\f]
	*
	*   @param radius \f$r\ (m)\f$ Radius. The radius of a circle in meters.
	*   @return \f$C_{Circle}\ (m^2)\f$ Circumference. The circumference of a circle in meters.
	* 	@see CircleArea() to calculate the area of a circle, \f$A_{Circle}\f$.
	* 	@see SphereArea() to calculate area if a sphere, \f$A_{Sphere}\f$.
	* 	@see SphereVolume() to calculate the volume of a sphere, \f$V_{Sphere}\f$.
	*/ 
	template<typename T>
	T CircleCircumference( const T& radius );
	
    /// @}
} //namespace EGXPhys

#include "Circle.inl"
