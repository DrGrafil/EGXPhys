/// @file EGXMath/Geometry/3D/SpheroidSurfaceArea.hpp
/// 
/// @brief Defines functions relating to the surface area of a spheroid.
///
/// @author Elliot Grafil (Metex)
/// @date 4/20/18

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
	*   @brief Finds the surface area, \f$A_{spheroid}\f$, in meter squared of a spheroid with two equal semi-principle axis \f$a\f$ and a unique semi-princple axis \f$c\f$. If \f$a < c\f$, the spheroid is prolate, if \f$a = c\f$ it is a sphere and if \f$a>c\f$ the sphere is oblate.
	*		\f[ 
                S_{spheroid}=\begin{cases}
                    2\pi a^2 + 2\pi\dfrac{a c^2}{\sqrt{c^2-a^2}}\arcsin \left ( \dfrac{\sqrt{c^2-a^2}}{c} \right ) & a<c\ prolate \\ 
                    2\pi a^2 +\pi \dfrac{a c^2}{\sqrt{a^2-c^2}}\ln \left(\dfrac{1+\dfrac{\sqrt{a^2-c^2}}{a}}{1-\dfrac{\sqrt{a^2-c^2}}{a}}\right )& a>c\ oblate 
                \end{cases}
            \f]
	*
	*	See http://mathworld.wolfram.com/Ellipse.html
	*
    *	@param symmetricSemiPrincipleAxisInm \f$ a\ (m)\f$ Semi-principle axis of the spheroid in meters that is equal to another semi-principle axis.
    *	@param uniqueSemiPrincipleAxisInm \f$ c\ (m)\f$ Semi-principle axis of the spheroid in meters that is of diffrent length then the other semi-principle axes.
	*   @return \f$ S_{spheroid}\ (m^2)\f$ Surface area of spheroid in meter squared.
	*/
	template <typename T>
	T SpheroidSurfaceArea(const T symmetricSemiPrincipleAxisInm, const T uniqueSemiPrincipleAxisInm);

    /// @}
} //namespace EGXMath

#include "SpheroidSurfaceArea.inl"
