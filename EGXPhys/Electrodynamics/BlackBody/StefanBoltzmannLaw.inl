/// @file EGXPhys/Electrodynamics/BlackBody/StefanBoltzmannLaw.inl
///
/// @brief Implimentation of StefanBoltzmannLaw calculations
/// @author Elliot Grafil (Metex)
/// @date 5/25/18


namespace EGXPhys{

	template<typename T>
	T StefanBoltzmannLaw(const T surfaceAreaInm, const T surfaceTempInK)
	{
        return (NISTConst::sigma * surfaceAreaInm * pow(surfaceTempInK, 4));
	}


}//namespace EGXPhys
