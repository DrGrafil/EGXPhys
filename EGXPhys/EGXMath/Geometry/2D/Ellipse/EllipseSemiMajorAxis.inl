/// @file EGXMath/Geometry/2D/Ellipse/EllipseSemiMajorAxis.inl
///
/// @brief Implimentation of functions related to ellipse semi-major axis.
/// @author Elliot Grafil (Metex)
/// @date 4/23/18


namespace EGXMath {

	template <typename T>
	T EllipseSemiMajorAxis(const T semiMajorAxisInm, const T semiMinorAxisInm)
	{
		return (T)EGXMath::pi * semiMajorAxisInm * semiMinorAxisInm;
	}

}//namespace EGXMath
