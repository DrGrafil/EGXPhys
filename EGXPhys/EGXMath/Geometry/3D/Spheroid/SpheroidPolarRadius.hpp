/// @file EGXMath/Geometry/3D/Spheroid/SpheroidPolarRadius.hpp
/// 
/// @brief Defines functions relating to the polar radius of a spheroid.
///
/// @author Elliot Grafil (Metex)
/// @date 4/20/18

/// @defgroup EGXMath-Geometry-3D-Spheroid-PolarRadius Polar Radius
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
	/// @addtogroup EGXMath-Geometry-3D-Spheroid-PolarRadius
	/// @{

    /**
    *   @brief Finds the polar radius, \f$c\f$, in meters of a spheroid with mean radius, \f$r\f$ and flattening \f$f\f$:
    *		\f[ c = r \left (1 - \dfrac{2f}{3} \right ) \f]
    *
    *	See http://farside.ph.utexas.edu/teaching/336k/Newtonhtml/node109.html and https://en.wikipedia.org/wiki/Equatorial_bulge
    *	@param equatorialRadiusInm \f$ r\ (m)\f$ Equatorial radius in meters. The degenerate semi-principle axis of the spheroid.
    *	@param polarRadiusInm \f$ c\ (m)\f$ Polar radius in meters. The unique semi-principle axis of the spheroid.
    *   @return \f$ c\ (m)\f$ Polar radius in meters. The unique semi-principle axis of the spheroid.
    *
    */
    template <typename T>
    T SpheroidPolarRadius(const T meanRadiusInm, const T flattening);

    /// @}
} //namespace EGXMath

#include "SpheroidPolarRadius.inl"
