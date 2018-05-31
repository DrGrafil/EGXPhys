/// @file EGXPhys/Electrodynamics/BlackBody/StefanBoltzmannLaw.inl
///
/// @brief Implimentation of Stefan-Boltzmann Law calculations
/// @author Elliot Grafil (Metex)
/// @date 5/30/18


namespace EGXPhys{

	template<typename T>
	T StefanBoltzmannLaw(const T surfaceTempretureInK)
	{
        return NISTConst::sigma * pow(surfaceTempretureInK, 4);
	}


}//namespace EGXPhys
