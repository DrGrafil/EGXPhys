/// @file EGXMath/Geometry/2D/Ellipse/EllipseSemiMinorAxis.inl
///
/// @brief Implimentation of functions related to ellipse semi-minor axis.
/// @author Elliot Grafil (Metex)
/// @date 4/25/18


namespace EGXMath {

	template <typename T>
	T EllipseSemiMinorAxis(const T semiMajorAxisInm, const T semiMinorAxisInm)
	{
		return (T)EGXMath::pi * semiMajorAxisInm * semiMinorAxisInm;
	}

}//namespace EGXMath
