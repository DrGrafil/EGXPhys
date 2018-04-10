/// @file EGXMath/Functions/SignFunctions.hpp
///
/// @brief Defines functions relating to the sign function.
///
/// @author Elliot Grafil (Metex)
/// @date 4/9/18

/// @defgroup EGXMath-Functions-Sign Sign
/// @ingroup EGXMath-Functions


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
	/// @addtogroup EGXMath-Functions-Sign
	/// @{

	/**
	*   @brief Gives the sign of a number. -1 for negative numbers, 1 for positive and 0 for zero.
	*		\f[sign(x)=(0 < x) - (x < 0)]
	*
	*	@param x \f$x\ (dimensionless)\f$ is the argument of the function.
	*   @return \f$sign(x)\ (dimensionless)\f$ the sign of x.
	*/
	template <typename T>
	inline int QuickSign(const T& x);

    /// @}
} //namespace EGXMath

#include "SignFunctions.inl"
