/// @file EGXPhys/Atomic/NuclearBindingEnergy.hpp
///
/// @brief Calculates the nuclear binding energy of an atom.
///
/// @author Elliot Grafil (Metex)
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
	*   @brief Calculates the nuclear binding energy, \f$BE\f$, of an atom in mega electron volts. 
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
	*   @see MassDefectInMeVPercSquared() to calculate mass defect,\f$\Delta m\f$ in megaelectron volts per c squared.
	* 	@see MassDefectInkg() to calculate mass defect,\f$\Delta m\f$ in kilograms.
	* 	@see MassDefectInJPercSquared() to calculate mass defect,\f$\Delta m\f$ in joules per c squared.
	* 	@see BindingEnergyInMeV() to calculate the binding energy, \f$B\f$, of a nucleus in megaelectron volts.
	* 	@see BindingEnergyInJ() to calculate the binding energy, \f$B\f$, of a nucleus in joules.
	*/
	template<typename T, typename T2>
    T2 NuclearBindingEnergy(const T& atomicNumber, const T& massNumber, const T2& massAtomInu)	
	    
	    
    template<typename T, typename T2>
    T2 NuclearBindingEnergyInu(const T& atomicNumber, const T& massNumber, const T2& massAtomInu);	
   
	template<typename T, typename T2>
    T2 NuclearBindingEnergyInMeVPercSquared(const T& atomicNumber, const T& massNumber, const T2& massAtomInMeVPercSquared);
    
	template<typename T, typename T2>
    T2 NuclearBindingEnergyInkg(const T& atomicNumber, const T& massNumber, const T2& massAtomInkg);

    template<typename T, typename T2>
    T2 NuclearBindingEnergyInJPercSquared(const T& atomicNumber, const T& massNumber, const T2& massAtomInJPercSquared);
   

    /// @}
} //namespace EGXPhys

#include "NuclearBindingEnergy.inl"
