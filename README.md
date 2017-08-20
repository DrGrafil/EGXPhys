# EGXPhys
EGXPhys is a header only C++ physics equation library for writing scientific programs and doing quick calculations. This library also contains the 335 constants compiled by the [National Institute of Standards and Technology (NIST)](https://www.nist.gov/) ([CODATA-2014](https://dx.doi.org/10.1063/1.4954402)) as well as other relevant constants to the field of physics. 

## About


EGXPhys focuses on the following fields in physics:
* Acoustics
* Astrophysics
* Atomic
* Kinematics
* Optics
* Plasma
* Quantum
* Relativity
* Thermodynamics


For vectors and matrixs the data are stored in the row-major C convention as used in both [ROOT](https://root.cern.ch/) and [GLM](https://github.com/g-truc/glm). 

## Documentation

All constants are fully documented. You can read the documentation [HERE](https://metex.github.io/NISTConst/html/modules.html). If the variable names and units are not displaying correctly, downloading the doc foldering and viewing it usually solves the issue.  

## Setup

NISTConst is a header-only library, and therfore does not need to be compiled. All that needs to be done is copy the NISTConst folder to your include directories and add `#include <EGXPhys/EGXPhys.hpp>`. 

### Additional Options

By default NISTConst doesn't set the uncertainties associated with all the constants. To add these uncertainties to your program you need to `#define NISTCONST_UNCERTAINTY` before you include NISTConst. All uncertainties are accessed by just adding `Uncertainty` to a the variable name. For example the uncertainty in the planck constant, `PlanckConstant`, is simply `PlanckConstantUncertainty`.

NISTConst also includes a list of common aliases to all the constants like `c` for speed of light. To add these aliases to your program you need to `#define NISTCONST_COMMON_SYMBOLS_NAMES` before you include NISTConst. These are seperated out since there are multiple one letter variable definitions. This can result in variable name collisions with existing code if you decide to make all symbols in NISTConst namespace visible without adding the namespace prefix via `using namespace NISTConst;`.

## Example Usage

```cpp
#define NISTCONST_UNCERTAINTY // To include uncertainties
#define NISTCONST_COMMON_SYMBOLS_NAMES // Common symbols and names for constants.
#include <NISTConst/NISTConst.hpp>

//Calculates the mass defect, the difference between the mass of the atom 
//and the sum of the masses of its parts in unified atomic mass units.
double MassDefectInu(int const atomicNumber, int const massNumber, double massAtom)
{
	double protonMass = atomicNumber * NISTConst::protonMassInu;
	double electronMass = atomicNumber * NISTConst::electronMassInu;
	double neutronMass = (massNumber - atomicNumber) * NISTConst::neutronMassInu;

	return protonMass + electronMass + neutronMass - massAtom;	
}
```

## FAQ

1. Will you support other languages besides C/C++?

   Yes. We eventually intend to support Swift, GO, Java and a few other languages.

2. Why are you missing _____ constant?

   Currently NISTConst intends to only have the constants defined by CODATA and listed by NIST as well as some common aliases. There are some obvious omitions especially in for atomic constants. Eventually we will release a way to include these "missing" constants. 

3. Why does wikipedia and google disagree with some of your values?

   It is because NISTConst values are frozen to the values present in [CODATA-2014](https://dx.doi.org/10.1063/1.4954402) while google and wikipedia are able to pick values from any source. An example of this is for the mass of the proton. As of 8/8/17:

| Proton Mass | Source |
| --- | --- |
| 1.007276466879 u | NISTConst from NIST/CODATA 2014 |
| 1.007276466879 u | Wikipedia |
| 1.007276466812 u | Google |
| 1.007276466583 u | Latest value from ["High-Precision Measurement of the Proton’s Atomic Mass"](https://doi.org/10.1103/PhysRevLett.119.033001) |

   The latest value will probably be adopted by both google and wikipedia in the near future.

4. The value of _____ is wrong! Can you change it to ...?

   Check either from [HERE](https://github.com/Metex/NISTConst/blob/master/CODATA/Table%20of%20NIST%20Constant%20CODATA%202014.txt) or [HERE](https://physics.nist.gov/cuu/Constants/) or [HERE](https://dx.doi.org/10.1063/1.4954402) before e-mailing us. NISTConst sticks stricktly to the values reported by NIST/CODATA. If NISTConst disagrees with NIST/CODATA we will change the value to be in agreement with NIST/CODATA.



## Current Development

[![Build Status](https://travis-ci.org/Metex/EGXPhys.svg?branch=master)](https://travis-ci.org/Metex/EGXPhys)

Field | Equations | Tests Pass 
------------ | ------------- | -------------
Acoustics | | X
Astrophysics | | X
Atomic| | X
Kinematics | | X
Optics | | X
Plasma | | X
Quantum | | X
Relativity | | X
Thermodynamics | | X

---
## Release notes

### [NISTConst 1.0.0](https://github.com/Metex/NISTConst/releases/latest)
#### Features:
- Completed verification.
- Completed final pass for public release.

#### Improvements:
- Added Install instructions to readme.
- Moved NISTconst to NISTConst folder

#### Fixes:
- Fixed documentation for inverseFineStructureConstantUncertainty.
- Fixed issues with generating pdf documentation.

---
### [NISTConst 0.9.0](https://github.com/Metex/NISTConst/releases/latest)
#### Features:
- Created aliases to all constants using common names and symbols.
- Alias included through #define NISTCONST_COMMON_SYMBOLS_NAMES.
- Added uncertainty constants to all common names and symbols constants.
- Documented all common names and symbols constants.

#### Improvements:
- Renamed BohrMagnetonInInversemPerT to BohrMagnetonInInversemT
- Switched License to MIT

#### Fixes:
- Capitalized Fine-structure


---




