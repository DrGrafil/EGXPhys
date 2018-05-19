/// @file EGXMath/Conversions/CoordinateConversions/SphericalCoordinateConversion.inl
///
/// @brief Implimentation of convertions from Spherical coordinates to other coordinate systems.
///
/// @author Elliot Grafil (Metex)
/// @date 5/18/18


namespace EGXMath {

	template<typename T>
	T DegreeToRadian(const T& decimalDegree) {
		return decimalDegree * (T)EGXMath::pi / 180.0;
	}

	
}//namespace EGXMath
