/// @file EGXMath/Functions/ErfFunctions.hpp
///
/// @brief Defines functions relating to the error function.
///
/// @author Elliot Grafil (Metex)
/// @date 4/9/18

/// @defgroup EGXMath-Functions-ERF Error Function (Erf)
/// @ingroup EGXMath-Functions


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
	/// @addtogroup EGXMath-Functions-ERF
	/// @{

	/**
	*   @brief Error function. The cummlitive distribution function for a guassian/normal distribution.
	*		\f[ erf(x)\equiv \frac{2}{\sqrt{\pi}}\int_0^x e^{-t^2}dt\f]
	*
	*	See http://mathworld.wolfram.com/Erf.html
	*	@param x \f$x\ (dimensionless)\f$ is the argument of the function.
	*   @return \f$erf(x)\ (dimensionless)\f$ is the value after applying the error function. Ranges from -1 < x < 1.
	*	@see InverseErf() for inverse error function.
	*	@see Erfc() for complementary error function.
	*	@see InverseErfc() for inverse complementary error function.
	*	@see Gaussian() for gaussian/normal distribution.
	*/
	template<typename T>
	T Erf(const T& x);
	
	/**
	*   @brief Inverese error function. The inverse of the error function.
	*		\f[ erf^{-1}(erf(x)) = x]
	*
	*	See http://mathworld.wolfram.com/InverseErf.html
	*	@param x \f$x\ (dimensionless)\f$ is the argument of the function. Ranges from -1 < x < 1.
	*   @return \f$erf^{-1}(x)\ (dimensionless)\f$ is the value after applying the inverse error function. 
	*	@see Erf() for error function.
	*	@see Erfc() for complementary error function.
	*	@see InverseErfc() for inverse complementary error function.
	*	@see Gaussian() for gaussian/normal distribution.
	*/
	template<typename T>
	T InverseErf(const T& x);

	/**
	*   @brief Complementary error function.
	*		\f[erfc(x)\equiv 1-erf(x)\f]
	*		\f[erfc(x)=\frac{2}{\sqrt{\pi}}\int_x^\infty e^{-t^2}dt\f]
	*
	*	See http://mathworld.wolfram.com/Erfc.html
	*	@param x \f$x\ (dimensionless)\f$ is the argument of the function.
	*   @return \f$erfc(x)\ (dimensionless)\f$ is the value after applying the complementary error function. Ranges from -1 < x < 1.
	*	@see Erf() for error function.
	*	@see InverseErf() for inverse error function.
	*	@see InverseErfc() for inverse complementary error function.
	*	@see Gaussian() for gaussian/normal distribution.
	*/
	template<typename T>
	T Erfc(const T& x);
	
	/**
	*   @brief Inverse complementary error function. The inverse of the complementary error function.
	*		\f[erfc^{-1}(erfc(x)) = x\f]
	*
	*	See http://mathworld.wolfram.com/InverseErfc.html
	*	@param x \f$x\ (dimensionless)\f$ is the argument of the function. Ranges from -1 < x < 1.
	*   @return \f$erfc^{-1}(x)\ (dimensionless)\f$ is the value after applying the inverse complementary error function.
	*	@see Erf() for error function.
	*	@see InverseErf() for inverse error function.
	*	@see Erfc() for complementary error function.
	*	@see Gaussian() for gaussian/normal distribution.
	*/
	template<typename T>
	T InverseErfc(const T& x);


	

    /// @}
} //namespace EGXMath

#include "ErfFunctions.inl"
