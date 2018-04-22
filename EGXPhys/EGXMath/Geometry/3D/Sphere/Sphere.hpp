/// @file EGXMath/Geometry/.hpp
///
/// @brief Defines functions relating to shape.
///
/// @author Elliot Grafil (Metex)
/// @date 4/10/18

/// @defgroup EGXMath-Geometry- 
/// @ingroup EGXMath-Geometry


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
	/// @addtogroup EGXMath-Geometry-
	/// @{

	/**
	*   @brief Gaussian function. The probability desnisty function of a normal distribution.
	*		\f[ Gaussian(x)=\frac{1}{\sigma \sqrt{2\pi}}e^{\frac{-(x-\mu)^2}{2\sigma^2}} \f]
	*
	*	See http://mathworld.wolfram.com/GaussianFunction.html and http://mathworld.wolfram.com/NormalDistribution.html
	*	@param x \f$x\ (dimensionless)\f$ is the argument of the function.
	*	@param mu \f$\mu\ (dimensionless)\f$ is the mean of the gaussian/normal distribution.
	*   @param sigma \f$\sigma\ (dimensionless)\f$ is the standard deviation of the gaussian/normal distribution.
	*   @return \f$Gaussian(x)\ (dimensionless)\f$ the value of the gaussian/normal distribution at x.
	*	@see NormalDistribution() for alias.
	*	@see GaussianFWHM() for full width half max of gaussian/normal distribution.
	*	@see NormalDistributionFWHM() for full width half max of gaussian/normal distribution.
	*/
	template <typename T>
	T Gaussian(const T&x, const T&mu, const T& sigma);

    /// @}
} //namespace EGXMath

#include ".inl"
