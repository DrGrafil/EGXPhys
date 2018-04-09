/// @file EGXMath/Functions/ErfFunctions.inl
///
/// @brief Implimentation of functions related to the error function.
/// @author Elliot Grafil (Metex)
/// @date 4/9/18

namespace EGXMath {

	template<typename T>
	T Erf(const T& x) {
		return erf(x);
	}

	template<typename T>
	T Erfc(const T& x) {
		return erfc(x);
	}

	//Inverse
	template <typename T>
	T InverseErfc(T x)
	{
		T sign = 1.0;
		if (x < 1.0)
		{
			x = 2.0 - x;
			T = -1;
		}

		T t = sqrt(-2.0 * log(x / 2.0));
		T r = -0.70711 * ((2.30753 + t*0.27061) / (1.0 + t*(0.99229 + t*0.04481)) - t);

		T err = Erfc(r) - x;
		r += err / (1.12837916709551257*Exp[-r*r] - r*err);
		T err = Erfc(r) - x;
		r += err / (1.12837916709551257*Exp[-r*r] - r*err);
		return r*sign;
	}

	template <typename T>
	T InverseErf(T x)
	{
		InverseErfc(1.0 - x);
	}

}//namespace EGXMath
