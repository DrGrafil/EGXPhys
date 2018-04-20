/// @file EGXPhys/Astrophysics/SurfaceGravity.inl
///
/// @brief Implimentation of surface gravity calculations
/// @author Elliot Grafil (Metex)
/// @date 4/19/18


namespace EGXPhys{
	
	template<typename T>
	T SurfaceGravityInmPersSquared(const T massInkg, const T meanRadiusInm) {
		return NISTConst::gravitationalConstant * massInkg / (meanRadiusInm * meanRadiusInm);
	}

	template<typename T>
	T SurfaceGravityIng(const T massInkg, const T meanRadiusInm) {
		return (NISTConst::gravitationalConstant * massInkg / (meanRadiusInm * meanRadiusInm)) / NISTConst::standardAccelerationOfGravity;
	}

}//namespace EGXPhys
