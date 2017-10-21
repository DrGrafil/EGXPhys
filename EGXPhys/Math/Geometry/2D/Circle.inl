/// @file EGXPhys/Atomic/DecayConstant.inl
///
/// @brief Implimentation of curcle calculations
/// @author Elliot Grafil (Metex)
/// @date 10/20/17

namespace EGXPhys{

    template<typename T>
    double CircleArea( const T& radius )
	{
		return pi * radius * radius;
	}

	template<typename T>
	double CircleCircumference( const T& radius )
	{
		return 2.0 * pi * radius;
	}

}//namespace EGXPhys
