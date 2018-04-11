/// @file EGXMath/Geometry/2D/Circle.hpp
///
/// @brief Defines functions relating to circle shape.
///
/// @author Elliot Grafil (Metex)
/// @date 4/10/18

/// @defgroup EGXMath-Geometry-2D-Circle 
/// @ingroup EGXMath-Geometry-2D


//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <vector>
#include <algorithm>
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

	template <typename T>
	T CircleArea(const T& radius);

	template <typename T>
	T CircleCircumference(const T& radius);

	template <typename T, typename T2>
	void CircleHoopInertia(const T& mass, const T& radius, T2 (&matrix)[9]);

	template <typename T, typename T2>
	void CircleDiskInertia(const T& mass, const T& radius, T2(&matrix)[9]);

	template <typename T, typename T2>
	void CircleHoopInertia(const T& mass, const T& radius, std::vector<T2>& matrix);

	template <typename T, typename T2>
	void CircleDiskInertia(const T& mass, const T& radius, std::vector<T2>& matrix);

#ifdef EGXMATH_GLM
	template <typename T>
	void CircleHoopInertia(const T& mass, const T& radius, glm::mat3& matrix);

	template <typename T>
	void CircleDiskInertia(const T& mass, const T& radius, glm::mat3& matrix);
#endif // EGXMATH_GLM


    /// @}
} //namespace EGXMath

#include "Circle.inl"
