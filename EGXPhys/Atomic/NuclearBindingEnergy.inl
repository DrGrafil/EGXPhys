/// @file EGXPhys/Atomic/HalfLife.inl
///
/// @brief Implimentation of half life calculations
/// @author Elliot Grafil (Metex)
/// @date 8/4/17


namespace EGXPhys{
	
	template<typename T, typename T2>
    T2 MassDefectInu(const T& atomicNumber, const T& massNumber, const T2& massAtom)
	{
		double protonMass = atomicNumber * NISTConst::protonMassInu;
		double electronMass = atomicNumber * NISTConst::electronMassInu;
		double neutronMass = (massNumber - atomicNumber) * NISTConst::neutronMassInu;

		return protonMass + electronMass + neutronMass - massAtom;	
	}
}//namespace EGXPhys
