/// @file EGXMath/Geometry/3D/Ellipsoid/EllipsoidSurfaceArea.hpp
/// 
/// @brief Defines functions relating to the surface area of an ellipsoid.
///
/// @author Elliot Grafil (Metex)
/// @date 5/23/18

/// @defgroup EGXMath-Geometry-3D-Ellipsoid-SurfaceArea Surface Area
/// @ingroup EGXMath-Geometry-3D-Ellipsoid


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
	/// @addtogroup EGXMath-Geometry-3D-Ellipsoid-SurfaceArea
	/// @{

	/**
	*   @brief Finds the surface area, \f$S_{ellipsoid}\f$, in meter squared of an ellipsoid with three distinct semi-principle axes, \f$a\f$, \f$b\f$ and \f$c\f$.
	*		\f[ S_{ellipsoid}= 4 \pi \left ( \dfrac{(ab)^1.605+(ac)^1.605+(bc)^1.605}{3} \right )^{\dfrac{1}{1.605}}  \f]
	*
    *	See http://mathworld.wolfram.com/Ellipsoid.html and https://en.wikipedia.org/wiki/Ellipsoid
    *   See http://www.numericana.com/answer/ellipsoid.htm for formula constant derived by Knud Thomsen.
    *   See Klamkin, Murray S. "Elementary approximations to the area of n-dimensional ellipsoids." The American Mathematical Monthly 78.3 (1971): 280-283. for formula derivation.
	*
    *	@param aSemiPrincipleAxisInm \f$ a\ (m)\f$ One of the semi-principle axis of the ellipsoid in meters.
    *	@param bSemiPrincipleAxisInm \f$ b\ (m)\f$ One of the semi-principle axis of the ellipsoid in meters.
    *	@param cSemiPrincipleAxisInm \f$ c\ (m)\f$ One of the semi-principle axis of the ellipsoid in meters.
	*   @return \f$ S_{ellipsoid}\ (m^2)\f$ Surface area of spheroid in meter squared.
	*/
	template <typename T>
	T EllipsoidSurfaceArea(const T aSemiPrincipleAxisInm, const T bSemiPrincipleAxisInm, const T cSemiPrincipleAxisInm);

    /// @}
} //namespace EGXMath

#include "EllipsoidSurfaceArea.inl"
