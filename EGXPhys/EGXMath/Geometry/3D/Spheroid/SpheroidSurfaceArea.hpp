/// @file EGXMath/Geometry/3D/Spheroid/SpheroidSurfaceArea.hpp
/// 
/// @brief Defines functions relating to the surface area of a spheroid.
///
/// @author Elliot Grafil 
/// @date 5/20/18

/// @defgroup EGXMath-Geometry-3D-Spheroid-SurfaceArea Surface Area
/// @ingroup EGXMath-Geometry-3D-Spheroid


//=================================
// Header guard
#pragma once
//=================================
// Included dependencies

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXMath
{
	/// @addtogroup EGXMath-Geometry-3D-Spheroid-SurfaceArea
	/// @{

	/**
	*   @brief Finds the surface area, \f$S_{spheroid}\f$, in meter squared of a spheroid with equatorial radius \f$a\f$ and polar radius, \f$c\f$. If \f$a < c\f$, the spheroid is prolate, if \f$a = c\f$ it is a sphere and if \f$a>c\f$ the sphere is oblate.
	*		\f[ 
                S_{spheroid}=\begin{cases}
                    2\pi a^2 + 2\pi\dfrac{a c^2}{\sqrt{c^2-a^2}}\arcsin \left ( \dfrac{\sqrt{c^2-a^2}}{c} \right ) & a<c\ prolate \\ 
                    2\pi a^2 +\pi \dfrac{a c^2}{\sqrt{a^2-c^2}}\ln \left(\dfrac{1+\dfrac{\sqrt{a^2-c^2}}{a}}{1-\dfrac{\sqrt{a^2-c^2}}{a}}\right )& a>c\ oblate 
                \end{cases}
            \f]
	*
	*	See http://mathworld.wolfram.com/Ellipse.html
	*
    *	@param equatorialRadiusInm \f$ a\ (m)\f$ Equatorial radius in meters. The degenerate semi-principle axis of the spheroid.
    *	@param polarRadiusInm \f$ c\ (m)\f$ Polar radius in meters. The unique semi-principle axis of the spheroid.
	*   @return \f$ S_{spheroid}\ (m^2)\f$ Surface area of spheroid in meter squared.
    *	@see SpheroidEccentricity() for eccentricity of a spheroid.
    *	@see SpheroidEquatorialRadius() for equatorial radius of a spheroid.
    *	@see SpheroidFlattening() for flattening of a spheroid.
    *	@see SpheroidInertia() for inertia tensor of a spheroid.
    *	@see SpheroidPolarRadius() for polar radius of a spheroid.
    *	@see SpheroidVolume() for volume of a spheroid.
	*/
	template <typename T>
	T SpheroidSurfaceArea(const T equatorialRadiusInm, const T polarRadiusInm);

    /// @}
} //namespace EGXMath

#include "SpheroidSurfaceArea.inl"
