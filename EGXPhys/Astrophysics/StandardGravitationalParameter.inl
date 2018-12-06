/// @file EGXPhys/Astrophysics/StandardGravitationalParameter.inl
///
/// @brief Implimentation of standard gravitational parameter calculations
/// @author Elliot Grafil 
/// @date 4/19/18


namespace EGXPhys{
	
	template<typename T>
	T StandardGravitationalParameter(const T massInkg) {
		return NISTConst::gravitationalConstant * massInkg;
	}

}//namespace EGXPhys
