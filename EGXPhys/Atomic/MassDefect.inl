/// @file EGXPhys/Atomic/MassDefect.inl
///
/// @brief Implimentation of mass defect calculations
/// @author Elliot Grafil 
/// @date 8/12/17

namespace EGXPhys{
	
	template<typename T, typename T2>
	T2 MassDefect(const T& atomicNumber, const T& massNumber, const T2& massAtomInu)
	{
		return MassDefectInu(atomicNumber, massNumber, massAtomInu);
	}

	template<typename T, typename T2>
    T2 MassDefectInu(const T& atomicNumber, const T& massNumber, const T2& massAtomInu)
	{
		T2 protonMass = atomicNumber * NISTConst::protonMassInu;
		T2 neutronMass = (massNumber - atomicNumber) * NISTConst::neutronMassInu;
		T2 electronMass = atomicNumber * NISTConst::electronMassInu;
		return protonMass + electronMass + neutronMass - massAtomInu;	
	}
	
	template<typename T, typename T2>
    T2 MassDefectInMeVPercSquared(const T& atomicNumber, const T& massNumber, const T2& massAtomInMeVPercSquared)
	{
		T2 protonMass = atomicNumber * NISTConst::protonMassInMeVPercSquared;
		T2 neutronMass = (massNumber - atomicNumber) * NISTConst::neutronMassInMeVPercSquared;
		T2 electronMass = atomicNumber * NISTConst::electronMassInMeVPercSquared;
		return protonMass + electronMass + neutronMass - massAtomInMeVPercSquared;	
	}
	
	template<typename T, typename T2>
    T2 MassDefectInkg(const T& atomicNumber, const T& massNumber, const T2& massAtomInkg)
	{
		T2 protonMass = atomicNumber * NISTConst::protonMass;
		T2 neutronMass = (massNumber - atomicNumber) * NISTConst::neutronMass;
		T2 electronMass = atomicNumber * NISTConst::electronMass;
		
		return protonMass + electronMass + neutronMass - massAtomInkg;	
	}
	
	template<typename T, typename T2>
    T2 MassDefectInJPercSquared(const T& atomicNumber, const T& massNumber, const T2& massAtomInJPercSquared)
	{
		T2 protonMass = atomicNumber * NISTConst::protonMassInJPercSquared;
		T2 neutronMass = (massNumber - atomicNumber) * NISTConst::neutronMassInJPercSquared;
		T2 electronMass = atomicNumber * NISTConst::electronMassInJPercSquared;
		
		return protonMass + electronMass + neutronMass - massAtomInJPercSquared;	
	}
}//namespace EGXPhys
