/// @file EGXPhys/Atomic/MassDefect.hpp
///
/// @brief Calculates mass defect of an atom.
///
/// @author Elliot Grafil (Metex)
/// @date 8/12/17
/// @bug No known bugs.

/// @defgroup MassDefect Mass Defect
/// @ingroup Atomic
/// Calculates the mass defect, \f$\Delta m\f$, of a nucleus.

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
	/// @addtogroup MassDefect
	/// @{

    /** 
	*   @brief Calculates the mass defect, \f$\Delta m\f$, of an atom in unified atomic mass units. 
	*
	*	The mass defect is the diffrence in mass between a fully formed atom and its constituent parts.
	*	\f[\Delta m = Z(m_p + m_e)+(A-Z)m_n - m({^A_ZX})\f]
	*	
	*	See 
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 65
	*
	*   @param atomicNumber \f$\Z\ (1)\f$ Atomic number. The number of protons in the nucleus of an atom.
	*   @param massNumber \f$\A\ (1)\f$ Mass number. The number of protons and neutrons in the nucleus of an atom.
	*   @param massAtomInu \f$\m({^A_ZX})\ (u)\f$ Mass of nucleus. The mass of the nucleus in unified atomic mass units.
	*   @return \f$\Delta m\ (u)\f$ Mass defect. The diffrence in mass between a fully formed atom and its constituent parts.
	*   @see MassDefectInkg() to calculate mass defect in kilograms.\f$.
	* 	@see BindingEnergyInMeV() to calculate the binding energy, \f$\B\f$, of a nucleus in megaelectron volts.
	* 	@see BindingEnergyInJ() to calculate the binding energy, \f$\B\f$, of a nucleus in joules.
	*/    
    template<typename T, typename T2>
    T2 MassDefectInu(const T& atomicNumber, const T& massNumber, const T2& massAtomInu);	
   
	template<typename T, typename T2>
    T2 MassDefectInMeVPercSquared(const T& atomicNumber, const T& massNumber, const T2& massAtomInMeVPercSquared);
    
	template<typename T, typename T2>
    T2 MassDefectInkg(const T& atomicNumber, const T& massNumber, const T2& massAtomInkg);

    template<typename T, typename T2>
    T2 MassDefectInJPercSquared(const T& atomicNumber, const T& massNumber, const T2& massAtomInJPercSquared);

    /// @}
} //namespace EGXPhys

#include "MassDefect.inl"
