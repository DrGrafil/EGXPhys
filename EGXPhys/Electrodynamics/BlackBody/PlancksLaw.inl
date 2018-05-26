/// @file EGXPhys/Electrodynamics/BlackBody/PlancksLaw.inl
///
/// @brief Implimentation of Planck's Law calculations
/// @author Elliot Grafil (Metex)
/// @date 5/25/18


namespace EGXPhys{

	template<typename T>
	T PlancksLaw(const T wavelengthInm, const T durfaceTempInK)
	{
        return ((2.0 * pi * PhysConst::h * pow(PhysConst::c, 2)) / (pow(wavelengthInm, 5) * (exp((PhysConst::h * PhysConst::c) / (wavelengthInm * PhysConst::kb * durfaceTempInK)) - 1)));
	}


}//namespace EGXPhys
