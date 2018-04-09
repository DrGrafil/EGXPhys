/// @file EGXMath/Functions/GaussianFunctions.inl
///
/// @brief Implimentation of functions related to the Gaussian (normal distribution) function.
/// @author Elliot Grafil (Metex)
/// @date 4/9/18


namespace EGXMath {

	template <typename T>
	T Gaussian(const T&  x, const T&  mu, const T& sigma)
	{
		return (1.0 / (sigma * sqrt(2.0 * pi))) * exp(-pow(x - mu, 2.0) / (2.0 * sigma * sigma));
	}

	template <typename T>
	T NormalDistribution(const T&x, const T&mu, const T& sigma) {
		return Gaussian(x, mu, sigma);
	}


	template <typename T>
	T GaussianFWHM(const T&  sigma)
	{
		return (2.0 * sqrt(2.0*log(2.0)) * sigma);
	}

	template <typename T>
	T NormalDistributionFWHM(const T&  sigma) {
		return GaussianFWHM(sigma);
	}

}//namespace EGXMath
