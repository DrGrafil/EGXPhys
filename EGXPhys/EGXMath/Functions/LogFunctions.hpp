/// @file EGXMath/Functions/LogFunctions.hpp
///
/// @brief Defines functions relating to the log function.
///
/// @author Elliot Grafil (Metex)
/// @date 4/9/18

/// @defgroup EGXMath-Functions-Log Log
/// @ingroup EGXMath-Functions


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
	/// @addtogroup EGXMath-Functions-Log
	/// @{

	/**
	*   @brief Signed Log. Gives the signed (keeps sign on number) log base e of a number.
	*		\f[signedLog(x)= sign(x)*Log_e(|x|)\f]
	*		\f[signedLog(x)= sign(x)*\int_{1}^{|x|}\frac{1}{t} dt\f]
	*
	*	See https://en.wikipedia.org/wiki/Logarithm and http://mathworld.wolfram.com/NaturalLogarithm.html
	*	@param x \f$x\ (dimensionless)\f$ is the argument of the function. Inputting 0 results in an error.
	*   @return \f$signedLog(x)\ (dimensionless)\f$ is the signed log of x in base e.
	*/
	template<typename T>
	T SignedLog(const T& x);

	/**
	*   @brief Signed Log. Gives the signed (keeps sign on number) log of a number in a base of your choice.
	*		\f[signedLog(x)= sign(x)*\frac{Log_e(|x|)}{Log_e(base)}\f]
	*
	*	See https://en.wikipedia.org/wiki/Logarithm and http://mathworld.wolfram.com/NaturalLogarithm.html
	*	@param x \f$x\ (dimensionless)\f$ is the argument of the function. Inputting 0 results in an error.
	*	@param base \f$base\ (dimensionless)\f$ is the base that the log is taken in. Base is a positive real number.
	*   @return \f$signedLog(x)\ (dimensionless)\f$ is the signed log of x in base.
	*/
	template<typename T>
	T SignedLog(const T& x, const T& base);

    /// @}
} //namespace EGXMath

#include "LogFunctions.inl"
