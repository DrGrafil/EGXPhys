/// @file EGXPhys/Atomic/SemiEmpiricalMassFormula.inl
///
/// @brief Implimentation of the semi empirical mass formula calculations
/// @author Elliot Grafil 
/// @date 8/4/17

namespace EGXPhys{
	
	static double SemiEmpericalMassFormulaParityTerm(int Z, int A, double constant){
		
		//Check if A is even
		if( A % 2 == 0 ) {
			//Check if Z is even
			if(Z % 2 == 0) {
				return constant;	
			} else {
				return -constant;
			}
		} else {
			return 0.0;
		}
	}
	
	template<typename T>
    double SemiEmpericalBindingEnergyKrane(const T& atomicNumber, const T& massNumber){
    	T Z = atomicNumber; T A = massNumber;
    	double aV = 15.5; double aS = 16.8; double aC = 0.72; double aSym = 23.0; double ap = 34.0;
    	
    	double volumeTerm = aV * A;
    	double surfaceTerm = aS * pow(A,2.0/3.0);
    	double coulombTerm = aC * Z * (Z - 1.0) * pow(A, -1.0/3.0);
		double symetryTerm = aSym * pow(A - 2 * Z, 2.0)/A;
		double parityTerm = SemiEmpericalMassFormulaParityTerm(Z, A, ap * pow(A,-3.0/4.0));
		 
		return	volumeTerm - surfaceTerm - coulombTerm - symetryTerm + parityTerm;
	}
	
	template<typename T>
    double SemiEmpericalMassFormula(const T& atomicNumber, const T& massNumber){
		double protonMass = atomicNumber * NISTConst::protonMassInMeVPercSquared;
		double neutronMass = (massNumber - atomicNumber) * NISTConst::neutronMassInMeVPercSquared;
		double electronMass = atomicNumber * NISTConst::electronMassInMeVPercSquared;
		
		return protonMass + electronMass + neutronMass - SemiEmpericalBindingEnergyKrane( atomicNumber, massNumber);
	}
	
}//namespace EGXPhys
