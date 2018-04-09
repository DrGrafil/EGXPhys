/// @file EGXMath/Conversions/AngleConversions/HMSConversion.inl
///
/// @brief Implimentation of hours minutes seconds conversions.
/// @author Elliot Grafil (Metex)
/// @date 3/29/18


namespace EGXMath {

	template <typename T>
	inline int QuickSign(T val)
	{
		return (T(0) < val) - (val < T(0));
	}

}//namespace EGXPhys
