/// @file EGXPhys/Atomic/NuclearBindingEnergy.hpp
///
/// @brief Calculates the nuclear binding energy of an atom.
///
/// @author Elliot Grafil 
/// @date 8/4/17

/// @todo Add reference to Decay Width.

/// @defgroup EGXPhys-NuclearBindingEnergy Binding Energy
/// @ingroup EGXPhys-Atomic
/// Calculates the nuclear binding energy, \f$BE\f$, of an atom.

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
	/// @addtogroup EGXPhys-NuclearBindingEnergy
	/// @{

    /** 
	*   @brief Calculates the nuclear binding energy, \f$BE\f$, of an atom in megaelectron volts. 
	*
	*	The nuclear binding energy is the diffrence in energy between a fully formed atom and its constituent parts(protons, neutrons and electrons).
	*	\f[BE = \Delta m c^2\f]
	*	\f[BE = \left (Z(m_p + m_e)+(A-Z)m_n - m({^A_ZX})  \right ) c^2\f]
	*	
	*	It is often confused with the equation for mass defect, \f$\Delta m\f$. This is because nuclear physicist use natural units where \f$c = 1\f$ resulting in both equations looking the same. 
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 65
	*
	*   @param atomicNumber \f$Z\ (1)\f$ Atomic number. The number of protons in the nucleus of an atom.
	*   @param massNumber \f$A\ (1)\f$ Mass number. The number of protons and neutrons in the nucleus of an atom.
	*   @param massAtomInu \f$m({^A_ZX})\ (u)\f$ Mass of nucleus. The mass of the nucleus in unified atomic mass units.
	*   @return \f$BE\ (MeV)\f$ Binding energy. The diffrence in energy between a fully formed atom and its constituent parts.
	* 	@see NuclearBindingEnergyInMeV() to calculate the binding energy, \f$BE\f$, of a nucleus in megaelectron volts.
	* 	@see NuclearBindingEnergyInJ() to calculate the binding energy, \f$BE\f$, of a nucleus in joules.
	* 	@see NuclearBindingEnergyInucSquared() to calculate the binding energy, \f$BE\f$, of a nucleus in unified atomic mass units times c squared.
	* 	@see NuclearBindingEnergyInkgcSquared() to calculate the binding energy, \f$BE\f$, of a nucleus in kilograms times c squared.
	*   @see MassDefect() to calculate mass defect,\f$\Delta m\f$, in unified atomic mass units.
	*/
	template<typename T, typename T2>
	T2 NuclearBindingEnergy(const T& atomicNumber, const T& massNumber, const T2& massAtomInu);
	    
	/**
	*   @brief Calculates the nuclear binding energy, \f$BE\f$, of an atom in unified atomic mass units times c squared.
	*
	*	The nuclear binding energy is the diffrence in energy between a fully formed atom and its constituent parts(protons, neutrons and electrons).
	*	\f[BE = \Delta m c^2\f]
	*	\f[BE = \left (Z(m_p + m_e)+(A-Z)m_n - m({^A_ZX})  \right ) c^2\f]
	*
	*	It is often confused with the equation for mass defect, \f$\Delta m\f$. This is because nuclear physicist use natural units where \f$c = 1\f$ resulting in both equations looking the same.
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 65
	*
	*   @param atomicNumber \f$Z\ (1)\f$ Atomic number. The number of protons in the nucleus of an atom.
	*   @param massNumber \f$A\ (1)\f$ Mass number. The number of protons and neutrons in the nucleus of an atom.
	*   @param massAtomInu \f$m({^A_ZX})\ (u)\f$ Mass of nucleus. The mass of the nucleus in unified atomic mass units.
	*   @return \f$BE\ (u\ c^2)\f$ Binding energy. The diffrence in energy between a fully formed atom and its constituent parts.
	* 	@see NuclearBindingEnergy() to calculate the binding energy, \f$BE\f$, of a nucleus in megaelectron volts.
	* 	@see NuclearBindingEnergyInMeV() to calculate the binding energy, \f$BE\f$, of a nucleus in megaelectron volts.
	* 	@see NuclearBindingEnergyInJ() to calculate the binding energy, \f$BE\f$, of a nucleus in joules.
	* 	@see NuclearBindingEnergyInkgcSquared() to calculate the binding energy, \f$BE\f$, of a nucleus in kilograms times c squared.
	*   @see MassDefect() to calculate mass defect,\f$\Delta m\f$, in unified atomic mass units.
	*/
    template<typename T, typename T2>
    T2 NuclearBindingEnergyInucSquared(const T& atomicNumber, const T& massNumber, const T2& massAtomInu);
   
	/**
	*   @brief Calculates the nuclear binding energy, \f$BE\f$, of an atom in megaelectron volts.
	*
	*	The nuclear binding energy is the diffrence in energy between a fully formed atom and its constituent parts(protons, neutrons and electrons).
	*	\f[BE = \Delta m c^2\f]
	*	\f[BE = \left (Z(m_p + m_e)+(A-Z)m_n - m({^A_ZX})  \right ) c^2\f]
	*
	*	It is often confused with the equation for mass defect, \f$\Delta m\f$. This is because nuclear physicist use natural units where \f$c = 1\f$ resulting in both equations looking the same.
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 65
	*
	*   @param atomicNumber \f$Z\ (1)\f$ Atomic number. The number of protons in the nucleus of an atom.
	*   @param massNumber \f$A\ (1)\f$ Mass number. The number of protons and neutrons in the nucleus of an atom.
	*   @param massAtomInMeVPercSquared \f$m({^A_ZX})\ (\frac{MeV}{c^2})\f$ Mass of nucleus. The mass of the nucleus in megaelectron volts per c squared.
	*   @return \f$BE\ (u\ c^2)\f$ Binding energy. The diffrence in energy between a fully formed atom and its constituent parts.
	* 	@see NuclearBindingEnergy() to calculate the binding energy, \f$BE\f$, of a nucleus in megaelectron volts.
	* 	@see NuclearBindingEnergyInJ() to calculate the binding energy, \f$BE\f$, of a nucleus in joules.
	* 	@see NuclearBindingEnergyInucSquared() to calculate the binding energy, \f$BE\f$, of a nucleus in unified atomic mass units times c squared.
	* 	@see NuclearBindingEnergyInkgcSquared() to calculate the binding energy, \f$BE\f$, of a nucleus in kilograms times c squared.
	*   @see MassDefect() to calculate mass defect,\f$\Delta m\f$, in unified atomic mass units.
	*/
	template<typename T, typename T2>
    T2 NuclearBindingEnergyInMeV(const T& atomicNumber, const T& massNumber, const T2& massAtomInMeVPercSquared);
    
	/**
	*   @brief Calculates the nuclear binding energy, \f$BE\f$, of an atom in kilograms times c squared.
	*
	*	The nuclear binding energy is the diffrence in energy between a fully formed atom and its constituent parts(protons, neutrons and electrons).
	*	\f[BE = \Delta m c^2\f]
	*	\f[BE = \left (Z(m_p + m_e)+(A-Z)m_n - m({^A_ZX})  \right ) c^2\f]
	*
	*	It is often confused with the equation for mass defect, \f$\Delta m\f$. This is because nuclear physicist use natural units where \f$c = 1\f$ resulting in both equations looking the same.
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 65
	*
	*   @param atomicNumber \f$Z\ (1)\f$ Atomic number. The number of protons in the nucleus of an atom.
	*   @param massNumber \f$A\ (1)\f$ Mass number. The number of protons and neutrons in the nucleus of an atom.
	*   @param massAtomInkg \f$m({^A_ZX})\ (kg)\f$ Mass of nucleus. The mass of the nucleus in kilograms.
	*   @return \f$BE\ (kg\ c^2)\f$ Binding energy. The diffrence in energy between a fully formed atom and its constituent parts.
	* 	@see NuclearBindingEnergy() to calculate the binding energy, \f$BE\f$, of a nucleus in megaelectron volts.
	* 	@see NuclearBindingEnergyInMeV() to calculate the binding energy, \f$BE\f$, of a nucleus in megaelectron volts.
	* 	@see NuclearBindingEnergyInJ() to calculate the binding energy, \f$BE\f$, of a nucleus in joules.
	* 	@see NuclearBindingEnergyInucSquared() to calculate the binding energy, \f$BE\f$, of a nucleus in unified atomic mass units times c squared.
	*   @see MassDefect() to calculate mass defect,\f$\Delta m\f$, in unified atomic mass units.
	*/
	template<typename T, typename T2>
    T2 NuclearBindingEnergyInkgcSquared(const T& atomicNumber, const T& massNumber, const T2& massAtomInkg);

	/**
	*   @brief Calculates the nuclear binding energy, \f$BE\f$, of an atom in joules.
	*
	*	The nuclear binding energy is the diffrence in energy between a fully formed atom and its constituent parts(protons, neutrons and electrons).
	*	\f[BE = \Delta m c^2\f]
	*	\f[BE = \left (Z(m_p + m_e)+(A-Z)m_n - m({^A_ZX})  \right ) c^2\f]
	*
	*	It is often confused with the equation for mass defect, \f$\Delta m\f$. This is because nuclear physicist use natural units where \f$c = 1\f$ resulting in both equations looking the same.
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 65
	*
	*   @param atomicNumber \f$Z\ (1)\f$ Atomic number. The number of protons in the nucleus of an atom.
	*   @param massNumber \f$A\ (1)\f$ Mass number. The number of protons and neutrons in the nucleus of an atom.
	*   @param massAtomInJPercSquared \f$m({^A_ZX})\ (\frac{J}{c^2})\f$ Mass of nucleus. The mass of the nucleus in joules per c squared.
	*   @return \f$BE\ (J)\f$ Binding energy. The diffrence in energy between a fully formed atom and its constituent parts.
	* 	@see NuclearBindingEnergy() to calculate the binding energy, \f$BE\f$, of a nucleus in megaelectron volts.
	* 	@see NuclearBindingEnergyInMeV() to calculate the binding energy, \f$BE\f$, of a nucleus in megaelectron volts.
	* 	@see NuclearBindingEnergyInucSquared() to calculate the binding energy, \f$BE\f$, of a nucleus in unified atomic mass units times c squared.
	* 	@see NuclearBindingEnergyInkgcSquared() to calculate the binding energy, \f$BE\f$, of a nucleus in kilograms times c squared.
	*   @see MassDefect() to calculate mass defect,\f$\Delta m\f$, in unified atomic mass units.
	*/
    template<typename T, typename T2>
    T2 NuclearBindingEnergyInJ(const T& atomicNumber, const T& massNumber, const T2& massAtomInJPercSquared);
   

    /// @}
} //namespace EGXPhys

#include "NuclearBindingEnergy.inl"
