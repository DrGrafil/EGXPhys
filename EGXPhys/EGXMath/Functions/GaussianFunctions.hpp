/// @file EGXMath/Functions/GaussianFunctions.hpp
///
/// @brief Defines functions relating to the Gaussian (normal distribution) function.
///
/// @author Elliot Grafil (Metex)
/// @date 4/9/18

/// @defgroup EGXMath-Functions-Gaussian Gaussian/Normal Distribution
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
	/// @addtogroup EGXMath-Functions-Gaussian 
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

	/**
	*   @brief Gaussian function. The probability desnisty function of a normal distribution.
	*		\f[Gaussian(x)=\frac{1}{\sigma \sqrt{2\pi}}e^{\frac{-(x-\mu)^2}{2\sigma^2}}\f]
	*
	*	See http://mathworld.wolfram.com/GaussianFunction.html and http://mathworld.wolfram.com/NormalDistribution.html
	*	@param x \f$x\ (dimensionless)\f$ is the argument of the function.
	*	@param mu \f$\mu\ (dimensionless)\f$ is the mean of the gaussian/normal distribution.
	*   @param sigma \f$\sigma\ (dimensionless)\f$ is the standard deviation of the gaussian/normal distribution.
	*   @return \f$Gaussian(x)\ (dimensionless)\f$ the value of the gaussian/normal distribution at x.
	*	@see Gaussian() for alias.
	*	@see GaussianFWHM() for full width half max of gaussian/normal distribution.
	*	@see NormalDistributionFWHM() for full width half max of gaussian/normal distribution.
	*/
	template <typename T>
	T NormalDistribution(const T&x, const T&mu, const T& sigma);

	/**
	*   @brief Finds the full width half max (FWHM) of a gaussian/normal distribution.
	*		\f[GaussianFWHM(x)=2\sqrt{2 ln 2} \sigma \f]
	*
	*	See http://mathworld.wolfram.com/GaussianFunction.html and http://mathworld.wolfram.com/NormalDistribution.html
	*   @param sigma \f$\sigma\ (dimensionless)\f$ is the standard deviation of the gaussian/normal distribution.
	*   @return \f$GaussianFWHM(x)\ (dimensionless)\f$ the full width half max of gaussian/normalDistribution.
	*	@see Gaussian() for gaussian/normal distribution.
	*	@see NormalDistribution() for gaussian/normal distribution.
	*	@see NormalDistributionFWHM() for alias.
	*/
	template <typename T>
	T GaussianFWHM(const T&  sigma);

	/**
	*   @brief Finds the full width half max (FWHM) of a gaussian/normal distribution.
	*		\f[GaussianFWHM(x)=2\sqrt{2 ln 2} \sigma \f]
	*
	*	See http://mathworld.wolfram.com/GaussianFunction.html and http://mathworld.wolfram.com/NormalDistribution.html
	*   @param sigma \f$\sigma\ (dimensionless)\f$ is the standard deviation of the gaussian/normal distribution.
	*   @return \f$GaussianFWHM(x)\ (dimensionless)\f$ the full width half max of gaussian/normalDistribution.
	*	@see Gaussian() for gaussian/normal distribution.
	*	@see NormalDistribution() for gaussian/normal distribution.
	*	@see GaussianFWHM() for alias.
	*/
	template <typename T>
	T NormalDistributionFWHM(const T& sigma);

    /// @}
} //namespace EGXMath

#include "GaussianFunctions.inl"
