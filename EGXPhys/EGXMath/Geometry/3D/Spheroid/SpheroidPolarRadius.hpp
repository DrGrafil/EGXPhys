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
#include <cmath>
//=================================
// Forward declared dependencies

//=================================
//


namespace EGXMath
{
	/// @addtogroup EGXMath-Geometry-3D-Spheroid-PolarRadius
	/// @{

    /**
    *   @brief Finds the polar radius, \f$c\f$, in meters of a spheroid with mean radius, \f$r\f$, and flattening, \f$f\f$:
    *		\f[ c = r \left (1 - \dfrac{2f}{3} \right ) \f]
    *
    *	See http://farside.ph.utexas.edu/teaching/336k/Newtonhtml/node109.html and https://en.wikipedia.org/wiki/Equatorial_bulge
    *	@param meanRadiusInm \f$ r\ (m)\f$ Mean radius of spheroid in meters.
    *	@param flattening \f$ f\ (dimensionless)\f$ Flattening of spheroid.
    *   @return \f$ c\ (m)\f$ Polar radius in meters. The unique semi-principle axis of the spheroid.
    *	@see SpheroidEccentricity() for eccentricity of a spheroid.
    *	@see SpheroidEquatorialRadius() for equatorial radius of a spheroid.
    *	@see SpheroidFlattening() for flattening of a spheroid.
    *	@see SpheroidInertia() for inertia tensor of a spheroid.
    *	@see SpheroidSurfaceArea() for surface area of a spheroid.
    *	@see SpheroidVolume() for volume of a spheroid.
    *
    */
    template <typename T>
    T SpheroidPolarRadius(const T meanRadiusInm, const T flattening);

    /// @}
} //namespace EGXMath

#include "SpheroidPolarRadius.inl"
