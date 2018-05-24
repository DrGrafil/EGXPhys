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
double MassDefectInu(const int atomicNumber, const int  massNumber, const double massAtom)
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
Acoustics | 					| 
Astrophysics | | 
Atomic| | 
Kinematics | | 
Optics | | 
Plasma | | 
Quantum | | 
Relativity | | 
Thermodynamics | | 


## Current Status

Updated 5/21/2018:

| Field									| Section 																| Subsection 															| Subsection 															| Implemented 	| Documented		| Unit Test 		| Test Passed 		| Imp Review 		| Doc Review			|
|:--- 									| :--- 																		| :---																		|  :---																		| :---:						| :---:				 		| :---:				| :---:						| :---:						| :---:						|
| Acoustics							| 																				| 																				| 																				| 								| 				 				|						| 								| 								|								|
| Astrophysics					| 																				| 																				| 																				| 								| 				 				|						| 								| 								|								|
|											| Absolute Magnitude											| 																				| 																				| X							| X			 				|						| 								| 								|								|
|											| Apoapsis																| 																				| 																				| X							| X			 				|	X					| X							| 								|								|
|											| B-V Color																| 																				| 																				| X							| X			 				|	X					| X							| 								|								|
|											| Circumstellar Habitable Zone Limit 				| 																				| 																				| X							| X			 				|						| 								| 								|								|
|											| Color Temperature 											| 																				| 																				| X							| X			 				|						| 								| 								|								|
|											| Declination															| 																				| 																				| X							| X			 				|						| 								| 								|								|
|											| Eccentricity															| 																				| 																				| 								| 				 				|						| 								| 								|								|
|											| Escape Velocity													| 																				| 																				| X							| X			 				|	X					| X							| 								|								|
|											| Luminosity															| 																				| 																				| X							| X			 				|	X					| X							| 								|								|
|											| Orbital Charecteristics										| 																				| 																				| 								| 				 				|						| 								| 								|								|
|											| Parallax																| 																				| 																				| 								| 				 				|						| 								| 								|								|
|											| Periapsis																| 																				| 																				| X							| X			 				|	X					| X							| 								|								|
|											| Planetary Mass													| 																				| 																				| X							| X			 				|	X					| X							| 								|								|
|											| Planet Criteria													| 																				| 																				| X							| X			 				|						| 								| 								|								|
|											| Right Ascension													| 																				| 																				| X							| X			 				|						| 								| 								|								|
|											| Rotational Flattening/Oblateness					| 																				| 																				| X							| X			 				|						| 								| 								|								|
|											| Standard Gravitational Parameter					| 																				| 																				| X							| X			 				|	X					| X							| 								|								|
|											| Stellar Mass														| 																				| 																				| X							| X			 				|	X					| X							| 								|								|
|											| Stellar Radius														| 																				| 																				| 								| 				 				|						| 								| 								|								|
|											| Stellar Temperature											| 																				| 																				| X							| X			 				|	X					| X							| 								|								|
|											| Surface Gravity													| 																				| 																				| 								| 				 				|						| 								| 								|								|
|											| 																				| 																				| 																				| 								| 				 				|						| 								| 								|								|
| Atomic								| 																				| 																				| 																				| X							| X			 				|	X					| X							| 								|								|
|											| Decay Constant													| 																				| 																				| X							| X			 				|	X					| X							| 								|								|
|											| Decay Width														| 																				| 																				| X							| X			 				|	X					| X							| 								|								|
|											| Half Life																| 																				| 																				| X							| X			 				|	X					| X							| 								|								|
|											| Mass Defect														| 																				| 																				| X							| X			 				|	X					| X							| 								|								|
|											| Mass Excess														| 																				| 																				| X							| X			 				|	X					| X							| 								|								|
|											| Mean Lifetime													| 																				| 																				| X							| X			 				|						| 								| 								|								|
|											| Binding Energy													| 																				| 																				| X							| X			 				|						| 								| 								|								|
|											| Separation Energy												| 																				| 																				| X							| X			 				|						| 								| 								|								|
|											| 																				| Neutron																| 																				| 	X							| X			 				|	X					| X							| 								|								|
|											| 																				| Proton																	| 																				| 	X							| X			 				|	X					| X							| 								|								|
|											| Q-Value																| 																				| 																				| 	X							| X			 				|	X					| X							| 								|								|
|											| 																				| Alpha Decay 														| 																				| 	X							| X			 				|	X					| X							| 								|								|
|											| 																				| Beta-Minus Decay 											| 																				| 	X							| X			 				|	X					| X							| 								|								|
|											| 																				| Beta-Plus Decay													| 																				| 	X							| X			 				|	X					| X							| 								|								|
|											| 																				| Electron Capture												| 																				| 	X							| X			 				|	X					| X							| 								|								|
|											| 																				| Neutron Emission												| 																				| 	X							| X			 				|	X					| X							| 								|								|
|											| 																				| Proton Emission 												| 																				| 	X							| X			 				|	X					| X							| 								|								|
|											| Radioactive Decay												| 																				| 																				| 								| 				 				|						| 								| 								|								|
|											| Semi-Empirical Mass Formula							| 																				| 																				| 	X							| X			 				|	X					| X							| 								|								|
| Kinematics						| 																				| 																				| 																				| 								| 				 				|						| 								| 								|								|
|											| Angular Acceleration										| 																				| 																				| 								| 				 				|						| 								| 								|								|
|											| Torque																	| 																				| 																				| 								| 				 				|						| 								| 								|								|
| Optics								| 																				| 																				| 																				| 								| 				 				|						| 								| 								|								|
| Plasma								| 																				| 																				| 																				| 								| 				 				|						| 								| 								|								|
| Quantum						| 																				| 																				| 																				| 								| 				 				|						| 								| 								|								|
| Relativity							| 																				| 																				| 																				| 								| 				 				|						| 								| 								|								|
|											| Lorentz Transformations									| 																				| 																				| 	X							| X			 				|						| 								| 								|								|
| Thermodynamics			| 																				| 																				| 																				| 								| 				 				|						| 								| 								|								|

|											| 																				| 																				| 																				| 								| 				 				|						| 								| 								|								|

---
EGXMath (Will eventually be seperated out):

| Field									| Section 																| Subsection 															| Subsubsection 													| Implemented 	| Documented		| Unit Test 		| Test Passed 		| Imp Review 		| Doc Review			|
|:--- 									| :--- 																		| :---																		| :---																		| :---:						| :---:				 		| :---:				| :---:						| :---:						| :---:						|
|	Conversions					| Angle Conversions												| 																				| 																				| 								| 				 				|						| 								| 								|								|
|											| 																				| Decimal Degree													| 																				| X							| X			 				| X					| X							| 								|								|
|											| 																				| Degree																	| 																				| X							| X			 				|						| 								| 								|								|
|											| 																				| Degree Minute Seconds									| 																				| X							| X			 				|						| 								| 								|								|
|											| 																				| DMS																		| 																				| X							| X			 				|						| 								| 								|								|
|											| 																				| Gon																		| 																				| X							| X			 				|						| 								| 								|								|
|											| 																				| Gradians																| 																				| X							| X			 				|						| 								| 								|								|
|											| 																				| HMS																		| 																				| X							| X			 				|						| 								| 								|								|
|											| 																				| Hours Minutes Seconds									| 																				| X							| X			 				|						| 								| 								|								|
|											| 																				| Integer Degree													| 																				| X							| X			 				|						| 								| 								|								|
|											| 																				| Radian																	| 																				| X							| X			 				|						| 								| 								|								|
|											| 																				| Turn																		| 																				| X							| X			 				|						| 								| 								|								|
|											| Coordinate Conversions									| 																				| 																				| 								| 				 				|						| 								| 								|								|
|											| 																				| 2D																		| 																				| 								| 				 				|						| 								| 								|								|
|											| 																				| 																				| Cartesian																| 	X							| X			 				|	X					| X							| 								|								|
|											| 																				| 																				| Polar																	| 	X							| X			 				|	X					| X							| 								|								|
|											| 																				| 	3D																		| 																				| 								| 				 				|						| 								| 								|								|
|											| 																				| 																				| Cartesian																| X							| X			 				|	X					| X							| 								|								|
|											| 																				| 																				| Cylindrical															| X							| X			 				|	X					| X							| 								|								|
|											| 																				| 																				| Spherical																| X							| X			 				|	X					| X							| 								|								|
|	Functions						|				 																| 																				| 																				| 								| 				 				|						| 								| 								|								|
|											| Error Function													| 																				| 																				| X							| X			 				|						| 								| 								|								|
|											| Normal Distribution											| 																				| 																				| X							| X			 				|						| 								| 								|								|
|											| Log																		| 																				| 																				| X							| X			 				|						| 								| 								|								|
|											| Periodic																| 																				| 																				| X							| X			 				|						| 								| 								|								|
|											| Sign																		| 																				| 																				| X							| X			 				|						| 								| 								|								|
|	Geometry						| 																				| 																				| 																				| X							| X			 				|						| 								| 								|								|
|											| 	2D																		| 																				| 																				| 								| 				 				|						| 								| 								|								|
|											| 																				| Circle																	| 																				| 								| 				 				|						| 								| 								|								|
|											| 																				| Ellipse																	| 																				| 								| 				 				|						| 								| 								|								|
|											| 																				| 																				| Circumference													| X~							| X			 				| X					| X							| 								|								|	
|											| 																				| 																				| Directrix																| X~							| X			 				| X					| X							| 								|								|
|											| 																				| 																				| Eccentricity															| X~							| X			 				| X					| X							| 								|								|
|											| 																				| 																				| Focal Length														| X~							| X			 				| X					| X							| 								|								|
|											| 																				| 																				| Inertia																	| X~							| 				 				| X					| 								| 								|								|
|											| 																				| 																				| Linear Eccentricity												| X~							| X			 				| X					| X							| 								|								|
|											| 																				| 																				| Semi-Latus Rectum											| X~							| X			 				| X					| X							| 								|								|
|											| 																				| 																				| Semi-Major Axis												| X~							| X			 				| X					| X							| 								|								|
|											| 																				| 																				| Semi-Minor Axis												| X~							| X			 				| X					| X							| 								|								|
|											| 																				| 																				| Surface Area														| X~							| X			 				| X					| X							| 								|								|
|											| 3D																		| 																				| 																				| 								| 				 				|						| 								| 								|								|
|											| 																				| Cylinder 																| 																				| 								| 				 				|						| 								| 								|								|
|											| 																				| 																				| Inertia 																	| X							| X			 				|						| 								| 								|								|
|											| 																				| 																				| Surface Area														| X							| X			 				|						| 								| 								|								|
|											| 																				| 																				| Volume																| X							| X			 				|						| 								| 								|								|
|											| 																				| Disk																		| 																				| 								| 				 				|						| 								| 								|								|
|											| 																				| 																				| Inertia																	| X							| X			 				|						| 								| 								|								|
|											| 																				| 	Ellipsoid																| 																				| 								| 				 				|						| 								| 								|								|
|											| 																				| 																				| 	Inertia																	| X							| X			 				|	X					| X							| 								|								|
|											| 																				| 																				| 	Surface Area														| X							| X			 				|	X					| X							| 								|								|
|											| 																				| 																				| 	Volume																| X							| X			 				|	X					| X							| 								|								|
|											| 																				| Hoop																	| 																				| 								| 				 				|						| 								| 								|								|
|											| 																				| 																				| Inertia																	| X							| X			 				|						| 								| 								|								|
|											| 																				| Spheroid																| 																				| 								| 				 				|						| 								| 								|								|
|											| 																				| 																				| Eccentricity															| X							| X			 				|						| 								| 								|								|
|											| 																				| 																				| Equatorial Radius												| X							| X			 				|						| 								| 								|								|
|											| 																				| 																				| Flattening															| X							| X			 				|						| 								| 								|								|	
|											| 																				| 																				| Inertia																	| X							| X			 				|						| 								| 								|								|
|											| 																				| 																				| Polar Radius														| X							| X			 				|						| 								| 								|								|
|											| 																				| 																				| Surface Area														| X							| X			 				|						| 								| 								|								|
|											| 																				| 																				| Volume																| X							| X			 				|						| 								| 								|								|
|											| 																				| 																				| 																				| 								| 				 				|						| 								| 								|								|
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



