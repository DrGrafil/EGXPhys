/// @file EGXPhys/Astrophysics/EscapeVelocity.inl
///
/// @brief Implimentation of escape velocity calculations
/// @author Elliot Grafil (Metex)
/// @date 4/14/18


namespace EGXPhys{
	
	template<typename T>
	T EscapeVelocity(const T distanceFromCenterOfMassInm, const T massOfBodyInkg){
		return sqrt(2.0 *  NISTConst::gravitationalConstant * massOfBodyInkg / distanceFromCenterOfMassInm);
	}


}//namespace EGXPhys
