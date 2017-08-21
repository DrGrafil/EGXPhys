# EGXPhys
EGXPhys is a header only C++ physics equation library for writing scientific programs and doing quick calculations. This library also contains the 335 constants compiled by the [National Institute of Standards and Technology (NIST)](https://www.nist.gov/) ([CODATA-2014](https://dx.doi.org/10.1063/1.4954402)) as well as other relevant constants to the field of physics. 

## About

This library is attempting to provide a complete coverage of all the formulas relating to the field of physics. This library hopes to one day contain all the derived equations, which have been tested, as well as concise documentation explaining a formulas use and where it was sourced from. Taking this even a step further EGXPhys hopes to have all varients of said formulas. For example in the case of the semi-emperical mass formula this library will contain all thirteen known varients and links pointing to where they have been sourced from.

EGXPhys currently plans to focus on the following fields:
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

All functions are fully documented with the equation written in latex, and either a link to the sourced article or cite from where it was taken from. You can read the documentation [HERE](https://metex.github.io/EGXPhys/html/modules.html).

## Setup

EGXPhys is a header-only library, and therfore does not need to be compiled. All that needs to be done is copy the EGXPhys folder to your include directories and add `#include <EGXPhys/EGXPhys.hpp>`. 

### Additional Options

NISTConst also includes a list of common aliases to all the constants like `c` for speed of light. To add these aliases to your program you need to `#define EGXPHYS_COMMON_SYMBOLS_NAMES` before you include NISTConst. These are seperated out since there are multiple one letter variable definitions. This can result in variable name collisions with existing code if you decide to make all symbols in NISTConst namespace visible without adding the namespace prefix via `using namespace NISTConst;`.

## Example Usage

```cpp
#define EGXPHYS_COMMON_SYMBOLS_NAMES // Common symbols and names for constants.
#include <EGXPhys/EGXPhys.hpp>

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

1. Will you support other languages besides C++?

   Yes. Once the library hits 1.0 we will branch out and support other languages. Currently we eventually intend to support Swift, GO, Java.

2. Can you add ________ equation?

   Absolutly. Create a new issue and if you can provide a link to the equation in question, an article where it is referenced or a book and page number where it is found. Turn around might be slowly mostly because of the related documentation as well as unit tests that need to be written for the equation.  

3. Why does wikipedia and google disagree with some of your values?

   It is because most of the constants are obtained from the [NISTConst 1.0](https://github.com/Metex/NISTConst/) library. NISTConst values are frozen to the values present in [CODATA-2014](https://dx.doi.org/10.1063/1.4954402) while google and wikipedia are able to pick values from any source.

   If the values aren't from NISTConst such as values relating to astronomy there might be an error on our part.

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

### [EGXPhys 0.1.0](https://github.com/Metex/EGXPhys/releases/latest)
#### Features:
- Adding equations at light speed.
- Setup readme.
- Setup doxygen documentation framework.
- Setup github.io view for documentation.
- Setup unit test framework using catch
- Setup basic cmake outline.
- Included [NISTConst 1.0](https://github.com/Metex/NISTConst/)
 
---



