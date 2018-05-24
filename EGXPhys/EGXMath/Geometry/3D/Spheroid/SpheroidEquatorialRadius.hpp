/// @file EGXMath/Geometry/3D/Spheroid/EquatorialRadius.hpp
/// 
/// @brief Defines functions relating to the equatorial radius of a spheroid.
///
/// @author Elliot Grafil (Metex)
/// @date 5/24/18

/// @defgroup EGXMath-Geometry-3D-Spheroid-EquatorialRadius Equatorial Radius
/// @ingroup EGXMath-Geometry-3D-Spheroid


//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <math.h>
//=================================
// Forward declared dependencies

//=================================
//


namespace EGXMath
{
	/// @addtogroup EGXMath-Geometry-3D-Spheroid-EquatorialRadius
	/// @{

	/**
	*   @brief Finds the equatorial radius, \f$a\f$, in meters of a spheroid with mean radius, \f$r\f$ and flattening \f$f\f$:
	*		\f[ a = r \left (1 + \dfrac{f}{3} \right ) \f]
	*
	*	See http://farside.ph.utexas.edu/teaching/336k/Newtonhtml/node109.html and https://en.wikipedia.org/wiki/Equatorial_bulge
    *	@param equatorialRadiusInm \f$ a\ (m)\f$ Equatorial radius in meters. The degenerate semi-principle axis of the spheroid.
    *	@param polarRadiusInm \f$ c\ (m)\f$ Polar radius in meters. The unique semi-principle axis of the spheroid.
	*   @return \f$ a\ (m)\f$ Equatorial radius in meters. The degenerate semi-principle axis of the spheroid.
	*
	*/
	template <typename T>
	T SpheroidEquatorialRadius(const T meanRadiusInm, const T flattening);
	
    /// @}
} //namespace EGXMath

#include "SpheroidEquatorialRadius.inl"
