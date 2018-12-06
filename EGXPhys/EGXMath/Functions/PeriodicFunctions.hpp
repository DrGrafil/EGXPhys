/// @file EGXMath/Functions/PeriodicFunctions.hpp
///
/// @brief Defines functions relating to periodic functions.
///
/// @author Elliot Grafil 
/// @date 4/9/18

/// @defgroup EGXMath-Functions-Periodic Periodic
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
	/// @addtogroup EGXMath-Functions-Periodic
	/// @{

	/**
	*   @brief Sawtooth wave function. Periodic function with a perodicity of \f$T\f$. Values range from -1 to 1.
	*		\f[sawtooth(x)=2(\frac{x}{T} - floor(\frac{x}{T} + \frac{1}{2}))\f]
	*
	*	See http://mathworld.wolfram.com/SawtoothWave.html and https://en.wikipedia.org/wiki/Sawtooth_wave
	*	@param x \f$x\ (dimensionless)\f$ is the argument of the function.
	*	@param period \f$T\ (dimensionless)\f$ is the period of the periodic function. After how much should the function repeate.
	*   @return \f$sawtooth(x)\ (dimensionless)\f$ the value of the sawthooth wave function at x. Ranges from -1 to 1 with a periodicity of period.
	*	@see SquareWave() for square wave function.
	*	@see TriangleWave() for triangle wave function.
	*	@see HeavisideStep() for heaviside step function.
	*/
	template <typename T>
	T SawtoothWave(const T& x, const T& period);

	/**
	*   @brief Square wave function. Periodic function with a perodicity of \f$T\f$. Values range from -1 to 1.
	*		\f[square(x)= sign( sin (\frac{2 \pi x}{T})) \f]
	*
	*	See http://mathworld.wolfram.com/SquareWave.html and https://en.wikipedia.org/wiki/Square_wave
	*	@param x \f$x\ (dimensionless)\f$ is the argument of the function.
	*	@param period \f$T\ (dimensionless)\f$ is the period of the periodic function. After how much should the function repeate.
	*   @return \f$square(x)\ (dimensionless)\f$ the value of the square wave function at x. Ranges from -1 to 1 with a periodicity of period.
	*	@see SawtoothWave() for sawtooth wave function.
	*	@see TriangleWave() for triangle wave function.
	*	@see HeavisideStep() for heaviside step function.
	*/
	template <typename T>
	T SquareWave(const T& x, const T& period);

	/**
	*   @brief Triangle wave function. Periodic function with a perodicity of \f$T\f$. Values range from -1 to 1.
	*		\f[triangle(x)= \frac{4}{T}(x-\frac{T}{2} floor(\frac{2 x}{T}+\frac{1}{2}) )(-1)^{floor(\frac{2 x}{T}+\frac{1}{2})} \f]
	*
	*	See http://mathworld.wolfram.com/TriangleWave.html and https://en.wikipedia.org/wiki/Triangle_wave
	*	@param x \f$x\ (dimensionless)\f$ is the argument of the function.
	*	@param period \f$T\ (dimensionless)\f$ is the period of the periodic function. After how much should the function repeate.
	*   @return \f$triangle(x)\ (dimensionless)\f$ the value of the triangle wave function at x. Ranges from -1 to 1 with a periodicity of period.
	*	@see SawtoothWave() for sawtooth wave function.
	*	@see SquareWave() for square wave function.
	*	@see HeavisideStep() for heaviside step function.
	*/
	template <typename T>
	T TriangleWave(const T& x, const T& period);
	
	/**
	*   @brief Heaviside step function. Values range from 0 to 1.
	*		\f[H(x)=\begin{cases} 0, & x < 0, \\ 1, & x \ge 0, \end{cases} \f]
	*
	*	See http://mathworld.wolfram.com/HeavisideStepFunction.html and https://en.wikipedia.org/wiki/Heaviside_step_function
	*	@param x \f$x\ (dimensionless)\f$ is the argument of the function.
	*   @return \f$H(x)\ (dimensionless)\f$ the value of the heaviside step function at x. Ranges from -1 to 1 with a periodicity of period.
	*	@see SawtoothWave() for sawtooth wave function.
	*	@see SquareWave() for square wave function.
	*	@see TriangleWave() for triangle wave function.
	*/
	template <typename T>
	T HeavisideStep(const T& x);

    /// @}
} //namespace EGXMath

#include "PeriodicFunctions.inl"
