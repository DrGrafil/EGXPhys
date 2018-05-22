/// @file EGXMath/Geometry/3D/SpheroidVolume.hpp
/// 
/// @brief Defines functions relating to the volume of a spheroid.
///
/// @author Elliot Grafil (Metex)
/// @date 5/21/18

/// @defgroup EGXMath-Geometry-3D-Spheroid-Volume Volume
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
	/// @addtogroup EGXMath-Geometry-3D-Spheroid-Volume
	/// @{

    /**
    *   @brief Finds the volume, \f$V_{spheroid}\f$, in meter cubed of a spheroid with two equal semi-principle axis \f$a\f$ and a unique semi-princple axis \f$c\f$.
    *		\f[ V_{spheroid}=\frac{4}{3}\pi a^2 c \f]
    *
    *	See http://mathworld.wolfram.com/Spheroid.html and https://en.wikipedia.org/wiki/Spheroid#Volume
    *
    *	@param symmetricSemiPrincipleAxisInm \f$ a\ (m)\f$ Semi-principle axis of the spheroid in meters that is equal to another semi-principle axis.
    *	@param uniqueSemiPrincipleAxisInm \f$ c\ (m)\f$ Semi-principle axis of the spheroid in meters that is of diffrent length then the other semi-principle axes.
    *   @return \f$ V_{spheroid}\ (m^3)\f$ Volume of spheroid in meter cubed.
    */
    template <typename T>
    T SpheroidVolume(const T symmetricSemiPrincipleAxisInm, const T uniqueSemiPrincipleAxisInm);

    /// @}
} //namespace EGXMath

#include "SpheroidVolume.inl"
