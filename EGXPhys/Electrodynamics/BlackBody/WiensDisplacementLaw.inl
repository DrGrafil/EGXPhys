/// @file EGXPhys/Electrodynamics/BlackBody/WiensDisplacementLaw.inl
///
/// @brief Implimentation of Wien's Displacement Law calculations
/// @author Elliot Grafil (Metex)
/// @date 5/25/18


namespace EGXPhys{

	template<typename T>
	T WiensDisplacementLaw(const T surfaceTempInK) {
        return WiensDisplacementLawInm(surfaceTempInK);
    }

    template<typename T>
    T WiensDisplacementLawInm(const T surfaceTempInK) {
        return (NISTConst::WienWavelengthDisplacementLawConstant / surfaceTempInK);
    }

    template<typename T>
    T WiensDisplacementLawInHz(const T surfaceTempInK) {
        return (NISTConst::WienFrequencyDisplacementLawConstant * surfaceTempInK);
    }

}//namespace EGXPhys
