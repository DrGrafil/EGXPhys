/// @file EGXPhys/Atomic/MassDefect.hpp
///
/// @brief Calculates mass defect of an atom.
///
/// @author Elliot Grafil (Metex)
/// @date 8/12/17

/// @defgroup EGXPhys-MassDefect Mass Defect
/// @ingroup EGXPhys-Atomic
/// Calculates the mass defect, \f$\Delta m\f$, of an atom.

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
	/// @addtogroup EGXPhys-MassDefect
	/// @{

    /** 
	*   @brief Calculates the mass defect, \f$\Delta m\f$, of an atom in unified atomic mass units. 
	*
	*	The mass defect is the diffrence in mass between a fully formed atom and its constituent parts(protons, neutrons and electrons).
	*	\f[\Delta m = Z(m_p + m_e)+(A-Z)m_n - m({^A_ZX})\f]
	*	
	*	See https://en.wikipedia.org/wiki/Nuclear_binding_energy#Mass_defect
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 65
	*
	*   @param atomicNumber \f$Z\ (1)\f$ Atomic number. The number of protons in the nucleus of an atom.
	*   @param massNumber \f$A\ (1)\f$ Mass number. The number of protons and neutrons in the nucleus of an atom.
	*   @param massAtomInu \f$m({^A_ZX})\ (u)\f$ Mass of nucleus. The mass of the nucleus in unified atomic mass units.
	*   @return \f$\Delta m\ (u)\f$ Mass defect. The diffrence in mass between a fully formed atom and its constituent parts in unified atomic mass unit.
	*	@see MassDefectInu for alias.
	*   @see MassDefectInMeVPercSquared() to calculate mass defect,\f$\Delta m\f$ in megaelectron volts per c squared.
	* 	@see MassDefectInkg() to calculate mass defect,\f$\Delta m\f$ in kilograms.
	* 	@see MassDefectInJPercSquared() to calculate mass defect,\f$\Delta m\f$ in joules per c squared.
	* 	@see BindingEnergyInMeV() to calculate the binding energy, \f$B\f$, of a nucleus in megaelectron volts.
	* 	@see BindingEnergyInJ() to calculate the binding energy, \f$B\f$, of a nucleus in joules.
	*/    
	template<typename T, typename T2>
    T2 MassDefect(const T& atomicNumber, const T& massNumber, const T2& massAtomInu);	
	
	/**
	*   @brief Calculates the mass defect, \f$\Delta m\f$, of an atom in unified atomic mass units.
	*
	*	The mass defect is the diffrence in mass between a fully formed atom and its constituent parts(protons, neutrons and electrons).
	*	\f[\Delta m = Z(m_p + m_e)+(A-Z)m_n - m({^A_ZX})\f]
	*
	*	See https://en.wikipedia.org/wiki/Nuclear_binding_energy#Mass_defect
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 65
	*
	*   @param atomicNumber \f$Z\ (1)\f$ Atomic number. The number of protons in the nucleus of an atom.
	*   @param massNumber \f$A\ (1)\f$ Mass number. The number of protons and neutrons in the nucleus of an atom.
	*   @param massAtomInu \f$m({^A_ZX})\ (u)\f$ Mass of nucleus. The mass of the nucleus in unified atomic mass units.
	*   @return \f$\Delta m\ (u)\f$ Mass defect. The diffrence in mass between a fully formed atom and its constituent parts in unified atomic mass unit.
	*	@see MassDefect for alias.
	*   @see MassDefectInMeVPercSquared() to calculate mass defect,\f$\Delta m\f$ in megaelectron volts per c squared.
	* 	@see MassDefectInkg() to calculate mass defect,\f$\Delta m\f$ in kilograms.
	* 	@see MassDefectInJPercSquared() to calculate mass defect,\f$\Delta m\f$ in joules per c squared.
	* 	@see BindingEnergyInMeV() to calculate the binding energy, \f$B\f$, of a nucleus in megaelectron volts.
	* 	@see BindingEnergyInJ() to calculate the binding energy, \f$B\f$, of a nucleus in joules.
	*/
    template<typename T, typename T2>
    T2 MassDefectInu(const T& atomicNumber, const T& massNumber, const T2& massAtomInu);	
   
	/**
	*   @brief Calculates the mass defect, \f$\Delta m\f$, of an atom in megaelectron volts per c squared.
	*
	*	The mass defect is the diffrence in mass between a fully formed atom and its constituent parts(protons, neutrons and electrons).
	*	\f[\Delta m = Z(m_p + m_e)+(A-Z)m_n - m({^A_ZX})\f]
	*
	*	See https://en.wikipedia.org/wiki/Nuclear_binding_energy#Mass_defect
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 65
	*
	*   @param atomicNumber \f$Z\ (1)\f$ Atomic number. The number of protons in the nucleus of an atom.
	*   @param massNumber \f$A\ (1)\f$ Mass number. The number of protons and neutrons in the nucleus of an atom.
	*   @param massAtomInu \f$m({^A_ZX})\ (u)\f$ Mass of nucleus. The mass of the nucleus in unified atomic mass units.
	*   @return \f$\Delta m\ (\frac{MeV}{c^2})\f$ Mass defect. The diffrence in mass between a fully formed atom and its constituent parts in megaelectron volts per c squared.
	*   @see MassDefect() to calculate mass defect,\f$\Delta m\f$ in unified atomic mass units.
	*   @see MassDefectInu() to calculate mass defect,\f$\Delta m\f$ in unified atomic mass units.
	* 	@see MassDefectInkg() to calculate mass defect,\f$\Delta m\f$ in kilograms.
	* 	@see MassDefectInJPercSquared() to calculate mass defect,\f$\Delta m\f$ in joules per c squared.
	* 	@see BindingEnergyInMeV() to calculate the binding energy, \f$B\f$, of a nucleus in megaelectron volts.
	* 	@see BindingEnergyInJ() to calculate the binding energy, \f$B\f$, of a nucleus in joules.
	*/
	template<typename T, typename T2>
    T2 MassDefectInMeVPercSquared(const T& atomicNumber, const T& massNumber, const T2& massAtomInMeVPercSquared);
    
	/**
	*   @brief Calculates the mass defect, \f$\Delta m\f$, of an atom in megaelectron volts per c squared.
	*
	*	The mass defect is the diffrence in mass between a fully formed atom and its constituent parts(protons, neutrons and electrons).
	*	\f[\Delta m = Z(m_p + m_e)+(A-Z)m_n - m({^A_ZX})\f]
	*
	*	See https://en.wikipedia.org/wiki/Nuclear_binding_energy#Mass_defect
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 65
	*
	*   @param atomicNumber \f$Z\ (1)\f$ Atomic number. The number of protons in the nucleus of an atom.
	*   @param massNumber \f$A\ (1)\f$ Mass number. The number of protons and neutrons in the nucleus of an atom.
	*   @param massAtomInu \f$m({^A_ZX})\ (u)\f$ Mass of nucleus. The mass of the nucleus in unified atomic mass units.
	*   @return \f$\Delta m\ (kg)\f$ Mass defect. The diffrence in mass between a fully formed atom and its constituent parts in kilograms.
	*   @see MassDefect() to calculate mass defect,\f$\Delta m\f$ in unified atomic mass units.
	*   @see MassDefectInu() to calculate mass defect,\f$\Delta m\f$ in unified atomic mass units.
	*   @see MassDefectInMeVPercSquared() to calculate mass defect,\f$\Delta m\f$ in megaelectron volts per c squared.
	* 	@see MassDefectInJPercSquared() to calculate mass defect,\f$\Delta m\f$ in joules per c squared.
	* 	@see BindingEnergyInMeV() to calculate the binding energy, \f$B\f$, of a nucleus in megaelectron volts.
	* 	@see BindingEnergyInJ() to calculate the binding energy, \f$B\f$, of a nucleus in joules.
	*/
	template<typename T, typename T2>
    T2 MassDefectInkg(const T& atomicNumber, const T& massNumber, const T2& massAtomInkg);

	/**
	*   @brief Calculates the mass defect, \f$\Delta m\f$, of an atom in megaelectron volts per c squared.
	*
	*	The mass defect is the diffrence in mass between a fully formed atom and its constituent parts(protons, neutrons and electrons).
	*	\f[\Delta m = Z(m_p + m_e)+(A-Z)m_n - m({^A_ZX})\f]
	*
	*	See https://en.wikipedia.org/wiki/Nuclear_binding_energy#Mass_defect
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 65
	*
	*   @param atomicNumber \f$Z\ (1)\f$ Atomic number. The number of protons in the nucleus of an atom.
	*   @param massNumber \f$A\ (1)\f$ Mass number. The number of protons and neutrons in the nucleus of an atom.
	*   @param massAtomInu \f$m({^A_ZX})\ (u)\f$ Mass of nucleus. The mass of the nucleus in unified atomic mass units.
	*   @return \f$\Delta m\ (\frac{J}{c^2})\f$ Mass defect. The diffrence in mass between a fully formed atom and its constituent parts in joules per c squared.
	*   @see MassDefect() to calculate mass defect,\f$\Delta m\f$ in unified atomic mass units.
	*   @see MassDefectInu() to calculate mass defect,\f$\Delta m\f$ in unified atomic mass units.
	*   @see MassDefectInMeVPercSquared() to calculate mass defect,\f$\Delta m\f$ in megaelectron volts per c squared.
	* 	@see MassDefectInkg() to calculate mass defect,\f$\Delta m\f$ in kilograms.
	* 	@see BindingEnergyInMeV() to calculate the binding energy, \f$B\f$, of a nucleus in megaelectron volts.
	* 	@see BindingEnergyInJ() to calculate the binding energy, \f$B\f$, of a nucleus in joules.
	*/
    template<typename T, typename T2>
    T2 MassDefectInJPercSquared(const T& atomicNumber, const T& massNumber, const T2& massAtomInJPercSquared);

    /// @}
} //namespace EGXPhys

#include "MassDefect.inl"
