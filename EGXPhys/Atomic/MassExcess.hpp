/// @file EGXPhys/Atomic/MassExcess.hpp
///
/// @brief Calculates mass excess of an atom.
///
/// @author Elliot Grafil (Metex)
/// @date 8/13/17

/// @defgroup MassExcess Mass Excess
/// @ingroup Atomic
/// Calculates the mass excess, \f$\text{Mass excess}\f$, of an atom.

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{	
	/// @addtogroup MassExcess
	/// @{

	/** 
	*   @brief Calculates the mass excess, \f$\text{Mass excess}\f$, of an atom in unified atomic mass units. 
	*
	*	The mass excess is the difference between a nucleus actual mass, \f$m({^A_ZX})\f$, and its mass number, \f$A\f$.
	*	\f[\text{Mass excess} = m({^A_ZX}) - A\f]
	*	
	*	It is sometimes confused with mass defect.
	*
	*	See http://www.science.uwaterloo.ca/~cchieh/cact/nuctek/nuclideunstable.html and https://en.wikipedia.org/wiki/Mass_excess
	*
	*	Equation taken from "NUCLEAR PHYSICS: PROBLEM-BASED APPROACH INCLUDING MATLAB" (Agrawl, 1987), p. 19
	*	and "The Ame2016 atomic mass evaluation" (Wang, 2017) p. 6 https://doi.org/10.1088/1674-1137/41/3/030003 
	*
	*   @param massNumber \f$A\ (1)\f$ Mass number. The number of protons and neutrons in the nucleus of an atom.
	*   @param massAtomInu \f$m({^A_ZX})\ (u)\f$ Mass of nucleus. The mass of the nucleus in unified atomic mass units.
	*   @return \f$\text{Mass excess}\ (u)\f$ Mass excess. The difference between a nucleus actual mass and its mass number.
	*   @see MassDefectInu() to calculate mass defect,\f$\Delta m\f$ in megaelectron volts per speed of light squared.
	*	@see MassExcessInMeVPercSquared() to calculate mass excess,\f$\text{Mass excess}\f$ in megaelectron volts per speed of light squared.
	*	@see MassExcessInkg() to calculate mass excess,\f$\text{Mass excess}\f$ in kilograms.
	*	@see MassExcessInJPercSquared() to calculate mass excess,\f$\text{Mass excess}\f$ in joules per speed of light squared.
	*/
    template<typename T, typename T2>
    T2 MassExcessInu(const T& massNumber, const T2& massAtomInu);

	/** 
	*   @brief Calculates the mass excess, \f$\text{Mass excess}\f$, of an atom in megaelectron volts per speed of light squared. 
	*
	*	The mass excess is the difference between a nucleus actual mass, \f$m({^A_ZX})\f$, and its mass number, \f$A\f$.
	*	\f[\text{Mass excess} = m({^A_ZX}) - A\f]
	*	
	*	It is sometimes confused with mass defect.
	*
	*	See http://www.science.uwaterloo.ca/~cchieh/cact/nuctek/nuclideunstable.html and https://en.wikipedia.org/wiki/Mass_excess
	*
	*	Equation taken from "NUCLEAR PHYSICS: PROBLEM-BASED APPROACH INCLUDING MATLAB" (Agrawl, 1987), p. 19
	*	and "The Ame2016 atomic mass evaluation" (Wang, 2017) p. 6 https://doi.org/10.1088/1674-1137/41/3/030003 
	*
	*   @param massNumber \f$A\ (1)\f$ Mass number. The number of protons and neutrons in the nucleus of an atom.
	*   @param massAtomInu \f$m({^A_ZX})\ (u)\f$ Mass of nucleus. The mass of the nucleus in unified atomic mass units.
	*   @return \f$\text{Mass excess}\ (\frac{MeV}{c^2})\f$ Mass excess. The difference between a nucleus actual mass and its mass number.
	*   @see MassDefectInu() to calculate mass defect,\f$\Delta m\f$ in megaelectron volts per speed of light squared.
	*	@see MassExcessInu() to calculate mass excess,\f$\text{Mass excess}\f$ in unified atomic mass units.
	*	@see MassExcessInkg() to calculate mass excess,\f$\text{Mass excess}\f$ in kilograms.
	*	@see MassExcessInJPercSquared() to calculate mass excess,\f$\text{Mass excess}\f$ in joules per speed of light squared.
	*/
	template<typename T, typename T2>
    T2 MassExcessInMeVPercSquared(const T& massNumber, const T2& massAtomInu);
    
    /** 
	*   @brief Calculates the mass excess, \f$\text{Mass excess}\f$, of an atom in kilograms. 
	*
	*	The mass excess is the difference between a nucleus actual mass, \f$m({^A_ZX})\f$, and its mass number, \f$A\f$.
	*	\f[\text{Mass excess} = m({^A_ZX}) - A\f]
	*	
	*	It is sometimes confused with mass defect.
	*
	*	See http://www.science.uwaterloo.ca/~cchieh/cact/nuctek/nuclideunstable.html and https://en.wikipedia.org/wiki/Mass_excess
	*
	*	Equation taken from "NUCLEAR PHYSICS: PROBLEM-BASED APPROACH INCLUDING MATLAB" (Agrawl, 1987), p. 19
	*	and "The Ame2016 atomic mass evaluation" (Wang, 2017) p. 6 https://doi.org/10.1088/1674-1137/41/3/030003 
	*
	*   @param massNumber \f$A\ (1)\f$ Mass number. The number of protons and neutrons in the nucleus of an atom.
	*   @param massAtomInu \f$m({^A_ZX})\ (u)\f$ Mass of nucleus. The mass of the nucleus in unified atomic mass units.
	*   @return \f$\text{Mass excess}\ (kg)\f$ Mass excess. The difference between a nucleus actual mass and its mass number.
	*   @see MassDefectInu() to calculate mass defect,\f$\Delta m\f$ in megaelectron volts per speed of light squared.
	*	@see MassExcessInu() to calculate mass excess,\f$\text{Mass excess}\f$ in unified atomic mass units.
	*	@see MassExcessInMeVPercSquared() to calculate mass excess,\f$\text{Mass excess}\f$ in megaelectron volts per speed of light squared.
	*	@see MassExcessInJPercSquared() to calculate mass excess,\f$\text{Mass excess}\f$ in joules per speed of light squared.
	*/
    template<typename T, typename T2>
    T2 MassExcessInkg(const T& massNumber, const T2& massAtomInu);
    
    /** 
	*   @brief Calculates the mass excess, \f$\text{Mass excess}\f$, of an atom in joules per speed of light squared. 
	*
	*	The mass excess is the difference between a nucleus actual mass, \f$m({^A_ZX})\f$, and its mass number, \f$A\f$.
	*	\f[\text{Mass excess} = m({^A_ZX}) - A\f]
	*	
	*	It is sometimes confused with mass defect.
	*
	*	See http://www.science.uwaterloo.ca/~cchieh/cact/nuctek/nuclideunstable.html and https://en.wikipedia.org/wiki/Mass_excess
	*
	*	Equation taken from "NUCLEAR PHYSICS: PROBLEM-BASED APPROACH INCLUDING MATLAB" (Agrawl, 1987), p. 19
	*	and "The Ame2016 atomic mass evaluation" (Wang, 2017) p. 6 https://doi.org/10.1088/1674-1137/41/3/030003 
	*
	*   @param massNumber \f$A\ (1)\f$ Mass number. The number of protons and neutrons in the nucleus of an atom.
	*   @param massAtomInu \f$m({^A_ZX})\ (u)\f$ Mass of nucleus. The mass of the nucleus in unified atomic mass units.
	*   @return \f$\text{Mass excess}\ (\frac{J}{c^2})\f$ Mass excess. The difference between a nucleus actual mass and its mass number.
	*   @see MassDefectInu() to calculate mass defect,\f$\Delta m\f$ in megaelectron volts per speed of light squared.
	*	@see MassExcessInu() to calculate mass excess,\f$\text{Mass excess}\f$ in unified atomic mass units.
	*	@see MassExcessInMeVPercSquared() to calculate mass excess,\f$\text{Mass excess}\f$ in megaelectron volts per speed of light squared.
	*	@see MassExcessInkg() to calculate mass excess,\f$\text{Mass excess}\f$ in kilograms.
	*/
    template<typename T, typename T2>
    T2 MassExcessInJPercSquared(const T& massNumber, const T2& massAtomInu);
    /// @}
} //namespace EGXPhys

#include "MassExcess.inl"
