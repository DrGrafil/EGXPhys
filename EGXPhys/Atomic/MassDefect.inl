/// @file EGXPhys/Atomic/HalfLife.inl
///
/// @brief Implimentation of half life calculations
/// @author Elliot Grafil (Metex)
/// @date 8/4/17
/// @bug No known bugs.

namespace EGXPhys{
	
	template<typename T, typename T2>
    T2 MassDefectInu(const T& atomicNumber, const T& massNumber, const T2& massAtomInu)
	{
		double protonMass = atomicNumber * NISTConst::protonMassInu;
		double neutronMass = (massNumber - atomicNumber) * NISTConst::neutronMassInu;
		double electronMass = atomicNumber * NISTConst::electronMassInu;
		return protonMass + electronMass + neutronMass - massAtomInu;	
	}
	
	template<typename T, typename T2>
    T2 MassDefectInMeVPercSquared(const T& atomicNumber, const T& massNumber, const T2& massAtomInMeVPercSquared)
	{
		double protonMass = atomicNumber * NISTConst::protonMassInMeVPercSquared;
		double neutronMass = (massNumber - atomicNumber) * NISTConst::neutronMassInMeVPercSquared;
		double electronMass = atomicNumber * NISTConst::electronMassInMeVPercSquared;
		return protonMass + electronMass + neutronMass - massAtomInMeVPercSquared;	
	}
	
	template<typename T, typename T2>
    T2 MassDefectInkg(const T& atomicNumber, const T& massNumber, const T2& massAtomInkg)
	{
		double protonMass = atomicNumber * NISTConst::protonMass;
		double neutronMass = (massNumber - atomicNumber) * NISTConst::neutronMass;
		double electronMass = atomicNumber * NISTConst::electronMass;
		
		return protonMass + electronMass + neutronMass - massAtomInkg;	
	}
	
	template<typename T, typename T2>
    T2 MassDefectInJPercSquared(const T& atomicNumber, const T& massNumber, const T2& massAtomInJPercSquared)
	{
		double protonMass = atomicNumber * NISTConst::protonMassInJPercSquared;
		double neutronMass = (massNumber - atomicNumber) * NISTConst::neutronMassInJPercSquared;
		double electronMass = atomicNumber * NISTConst::electronMassInJPercSquared;
		
		return protonMass + electronMass + neutronMass - massAtomInJPercSquared;	
	}
}//namespace EGXPhys
