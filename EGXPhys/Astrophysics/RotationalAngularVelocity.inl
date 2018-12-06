/// @file EGXPhys/Astrophysics/RotationalAngularVelocity.inl
///
/// @brief Implimentation of rotational angular velocity functions.
/// @author Elliot Grafil 
/// @date 7/29/18


namespace EGXPhys {

	template <typename T>
    T RotationalAngularVelocity(const T siderealDayIns) {
		return (T)2.0 * (T)EGXMath::pi / siderealDayIns;
	}

}//namespace EGXPhys
