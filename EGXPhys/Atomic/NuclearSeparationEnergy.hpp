/// @file EGXPhys/Atomic/NuclearSeparationEnergy.hpp
///
/// @brief Calculates nuclear separation energy of an atom.
///
/// @author Elliot Grafil (Metex)
/// @date 8/17/17
/// @todo: Add better see links.

/// @defgroup EGXPhys-NuclearSeparationEnergy Separation Energy
/// @ingroup EGXPhys-Atomic
/// Calculates the Separation Energy, \f$S\f$, of a radioactive substance.

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
	/// @addtogroup EGXPhys-NuclearSeparationEnergy
	/// @{
    
    /**
    *	@brief Calculates the neutron separation energy, \f$S_{1n}\f$. The energy in megaelectron volts needed to remove a neutron from the nucleus of an atom.
    *
    *	The neutron separation energy, \f$S_{1n}\f$, is the energy required to seperate out a neutron from the nucleus of an atom, \f$\ce{ ^{A}_{Z}X_{N} }\f$, in order to produce \f$\ce{ ^{A-1}_{Z}X_{N-1} }\f$.
    *	It is equal to the difference in binding energies between \f$\ce{ ^{A}_{Z}X_{N} }\f$ and \f$\ce{ ^{A-1}_{Z}X_{N-1} }\f$.
    *
    *	\f[S_{1n} = BE(\ce{ ^{A}_{Z}X_{N} }) - BE(\ce{ ^{A-1}_{Z}X_{N-1} })\f]
    *	\f[S_{1n} = \left ( m(\ce{ ^{A-1}_{Z}X_{N-1} }) + m_n - m(\ce{ ^{A}_{Z}X_{N} })  \right ) c^2\f]
    *
    *	See https://en.wikipedia.org/wiki/Nuclear_binding_energy
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 65
    *
    *	@param massAtomInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of initial atom. The mass of the atom before a neutron is removed in unified atomic mass units.
    *	@param massProducedAtomInu \f$m(\ce{ ^{A-1}_{Z}X_{N-1} })\ (u)\f$ Mass of produced atom. The mass of the produced atom once a neutron is removed in unified atomic mass units.
    *	@return \f$S_{1n}\ (MeV)\f$ Neutron separation energy. The energy in megaelectron volts needed to remove a neutron from the nucleus of the initial atom.
    *	@see NeutronSeparationEnergyInJ() to calculate the neutron separation energy in joules.
	*	@see NeutronTwoSeparationEnergyInMeV() to calculate the two neutrons separation energy.
    *	@see ProtonSeparationEnergyInMeV() to calculate the proton seperation energy. 
    *	@see ProtonTwoSeparationEnergyInMeV() to calculate the two protons seperation energy. 
    *	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
    */
    template<typename T>
    T NeutronSeparationEnergyInMeV(const T& massAtomInu, const T& massProducedAtomInu);	
    
    /**
    *	@brief Calculates the neutron separation energy, \f$S_{1n}\f$. The energy in joules needed to remove a neutron from the nucleus of an atom.
    *
    *	The neutron separation energy, \f$S_{1n}\f$, is the energy required to seperate out a neutron from the nucleus of an atom, \f$\ce{ ^{A}_{Z}X_{N} }\f$, in order to produce \f$\ce{ ^{A-1}_{Z}X_{N-1} }\f$.
    *	It is equal to the difference in binding energies between \f$\ce{ ^{A}_{Z}X_{N} }\f$ and \f$\ce{ ^{A-1}_{Z}X_{N-1} }\f$.
    *
    *	\f[S_{1n} = BE(\ce{ ^{A}_{Z}X_{N} }) - BE(\ce{ ^{A-1}_{Z}X_{N-1} })\f]
    *	\f[S_{1n} = \left ( m(\ce{ ^{A-1}_{Z}X_{N-1} }) + m_n - m(\ce{ ^{A}_{Z}X_{N} })  \right ) c^2\f]
    *
    *	See https://en.wikipedia.org/wiki/Nuclear_binding_energy
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 65
    *
    *	@param massAtomInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of initial atom. The mass of the atom before a neutron is removed in unified atomic mass units.
    *	@param massProducedAtomInu \f$m(\ce{ ^{A-1}_{Z}X_{N-1} })\ (u)\f$ Mass of produced atom. The mass of the produced atom once a neutron is removed in unified atomic mass units.
    *	@return \f$S_{1n}\ (J)\f$ Neutron separation energy. The energy in joules needed to remove a neutron from the nucleus of the initial atom.
    *	@see NeutronSeparationEnergyInMeV() to calculate the neutron separation energy in megaelectron volts.
	*	@see NeutronTwoSeparationEnergyInJ() to calculate the two neutrons separation energy.
    *	@see ProtonSeparationEnergyInJ() to calculate the proton seperation energy. 
    *	@see ProtonTwoSeparationEnergyInJ() to calculate the two protons seperation energy. 
    *	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
    */
    template<typename T>
    T NeutronSeparationEnergyInJ(const T& massAtomInu, const T& massProducedAtomInu);	
    
    
    /**
    *	@brief Calculates the two neutrons separation energy, \f$S_{2n}\f$. The energy in megaelectron volts needed to remove two neutron from the nucleus of an atom.
    *
    *	The two neutrons separation energy, \f$S_{2n}\f$, is the energy required to seperate out two neutron from the nucleus of an atom, \f$\ce{ ^{A}_{Z}X_{N} }\f$, in order to produce \f$\ce{ ^{A-2}_{Z}X_{N-2} }\f$.
    *	It is equal to the difference in binding energies between \f$\ce{ ^{A}_{Z}X_{N} }\f$ and \f$\ce{ ^{A-2}_{Z}X_{N-2} }\f$.
    *
    *	\f[S_{2n} = BE(\ce{ ^{A}_{Z}X_{N} }) - BE(\ce{ ^{A-2}_{Z}X_{N-2} })\f]
    *	\f[S_{2n} = \left ( m(\ce{ ^{A-2}_{Z}X_{N-2} }) + 2 m_n - m(\ce{ ^{A}_{Z}X_{N} })  \right ) c^2\f]
    *
    *	See https://en.wikipedia.org/wiki/Nuclear_binding_energy
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 65
    *
    *	@param massAtomInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of initial atom. The mass of the atom before two neutron is removed in unified atomic mass units.
    *	@param massProducedAtomInu \f$m(\ce{ ^{A-2}_{Z}X_{N-2} })\ (u)\f$ Mass of produced atom. The mass of the produced atom once two neutron is removed in unified atomic mass units.
    *	@return \f$S_{2n}\ (MeV)\f$ Two neutrons separation energy. The energy in megaelectron volts needed to remove two neutron from the nucleus of the initial atom.
    *	@see NeutronTwoSeparationEnergyInJ() to calculate the two neutrons separation energy in joules.
	*	@see NeutronSeparationEnergyInMeV() to calculate the neutrons separation energy.
    *	@see ProtonSeparationEnergyInMeV() to calculate the proton seperation energy. 
    *	@see ProtonTwoSeparationEnergyInMeV() to calculate the two protons seperation energy. 
    *	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
    */
 	template<typename T>
    T NeutronTwoSeparationEnergyInMeV(const T& massAtomInu, const T& massProducedAtomInu);
    
    /**
    *	@brief Calculates the two neutrons separation energy, \f$S_{2n}\f$. The energy in joules needed to remove two neutron from the nucleus of an atom.
    *
    *	The two neutrons separation energy, \f$S_{2n}\f$, is the energy required to seperate out two neutron from the nucleus of an atom, \f$\ce{ ^{A}_{Z}X_{N} }\f$, in order to produce \f$\ce{ ^{A-2}_{Z}X_{N-2} }\f$.
    *	It is equal to the difference in binding energies between \f$\ce{ ^{A}_{Z}X_{N} }\f$ and \f$\ce{ ^{A-2}_{Z}X_{N-2} }\f$.
    *
    *	\f[S_{2n} = BE(\ce{ ^{A}_{Z}X_{N} }) - BE(\ce{ ^{A-2}_{Z}X_{N-2} })\f]
    *	\f[S_{2n} = \left ( m(\ce{ ^{A-2}_{Z}X_{N-2} }) + 2 m_n - m(\ce{ ^{A}_{Z}X_{N} })  \right ) c^2\f]
    *
    *	See https://en.wikipedia.org/wiki/Nuclear_binding_energy
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 65
    *
    *	@param massAtomInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of initial atom. The mass of the atom before two neutron is removed in unified atomic mass units.
    *	@param massProducedAtomInu \f$m(\ce{ ^{A-2}_{Z}X_{N-2} })\ (u)\f$ Mass of produced atom. The mass of the produced atom once two neutron is removed in unified atomic mass units.
    *	@return \f$S_{2n}\ (J)\f$ Two neutrons separation energy. The energy in joules needed to remove two neutron from the nucleus of the initial atom.
    *	@see NeutronTwoSeparationEnergyInMeV() to calculate the two neutrons separation energy in megaelectron volts.
	*	@see NeutronSeparationEnergyInJ() to calculate the neutrons separation energy.
    *	@see ProtonSeparationEnergyInJ() to calculate the proton seperation energy. 
    *	@see ProtonTwoSeparationEnergyInJ() to calculate the two protons seperation energy. 
    *	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
    */
 	template<typename T>
    T NeutronTwoSeparationEnergyInJ(const T& massAtomInu, const T& massProducedAtomInu);
    
    /**
    *	@brief Calculates the proton separation energy, \f$S_{1p}\f$. The energy in megaelectron volts needed to remove a proton from the nucleus of an atom.
    *
    *	The proton separation energy, \f$S_{1p}\f$, is the energy required to seperate out a proton from the nucleus of an atom, \f$\ce{ ^{A}_{Z}X_{N} }\f$, in order to produce \f$\ce{ ^{A-1}_{Z-1}X_{N} }\f$.
    *	It is equal to the difference in binding energies between \f$\ce{ ^{A}_{Z}X_{N} }\f$ and \f$\ce{ ^{A-1}_{Z-1}X_{N} }\f$.
    *
    *	\f[S_{1p} = BE(\ce{ ^{A}_{Z}X_{N} }) - BE(\ce{ ^{A-1}_{Z-1}X_{N} })\f]
    *	\f[S_{1p} = \left ( m(\ce{ ^{A-1}_{Z-1}X_{N} }) + m_p - m(\ce{ ^{A}_{Z}X_{N} })  \right ) c^2\f]
    *
    *	See https://en.wikipedia.org/wiki/Nuclear_binding_energy
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 65
    *
    *	@param massAtomInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of initial atom. The mass of the atom before a proton is removed in unified atomic mass units.
    *	@param massProducedAtomInu \f$m(\ce{ ^{A-1}_{Z-1}X_{N} })\ (u)\f$ Mass of produced atom. The mass of the produced atom once a proton is removed in unified atomic mass units.
    *	@return \f$S_{1p}\ (MeV)\f$ Proton separation energy. The energy in megaelectron volts needed to remove a proton from the nucleus of the initial atom.
    *	@see ProtonSeparationEnergyInJ() to calculate the proton separation energy in joules.
    *	@see ProtonTwoSeparationEnergyInMeV() to calculate the two protons seperation energy.
    *	@see NeutronSeparationEnergyInMeV() to calculate the neutron seperation energy. 
	*	@see NeutronTwoSeparationEnergyInMeV() to calculate the two neutrons separation energy.
    *	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
    */
    template<typename T>
    T ProtonSeparationEnergyInMeV(const T& massAtomInu, const T& massProducedAtomInu);
    
    /**
    *	@brief Calculates the proton separation energy, \f$S_{1p}\f$. The energy in joules needed to remove a proton from the nucleus of an atom.
    *
    *	The proton separation energy, \f$S_{1p}\f$, is the energy required to seperate out a proton from the nucleus of an atom, \f$\ce{ ^{A}_{Z}X_{N} }\f$, in order to produce \f$\ce{ ^{A-1}_{Z-1}X_{N} }\f$.
    *	It is equal to the difference in binding energies between \f$\ce{ ^{A}_{Z}X_{N} }\f$ and \f$\ce{ ^{A-1}_{Z-1}X_{N} }\f$.
    *
    *	\f[S_{1p} = BE(\ce{ ^{A}_{Z}X_{N} }) - BE(\ce{ ^{A-1}_{Z-1}X_{N} })\f]
    *	\f[S_{1p} = \left ( m(\ce{ ^{A-1}_{Z-1}X_{N} }) + m_p - m(\ce{ ^{A}_{Z}X_{N} })  \right ) c^2\f]
    *
    *	See https://en.wikipedia.org/wiki/Nuclear_binding_energy
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 65
    *
    *	@param massAtomInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of initial atom. The mass of the atom before a proton is removed in unified atomic mass units.
    *	@param massProducedAtomInu \f$m(\ce{ ^{A-1}_{Z-1}X_{N} })\ (u)\f$ Mass of produced atom. The mass of the produced atom once a proton is removed in unified atomic mass units.
    *	@return \f$S_{1p}\ (J)\f$ Proton separation energy. The energy in joules needed to remove a proton from the nucleus of the initial atom.
    *	@see ProtonSeparationEnergyInMeV() to calculate the proton separation energy in megaelectron volts.
    *	@see ProtonTwoSeparationEnergyInJ() to calculate the two protons seperation energy.
    *	@see NeutronSeparationEnergyInJ() to calculate the neutron seperation energy. 
	*	@see NeutronTwoSeparationEnergyInJ() to calculate the two neutrons separation energy.
    *	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
    */
    template<typename T>
    T ProtonSeparationEnergyInJ(const T& massAtomInu, const T& massProducedAtomInu);
    
    /**
    *	@brief Calculates the two protons separation energy, \f$S_{2p}\f$. The energy in megaelectron volts needed to remove two protons from the nucleus of an atom.
    *
    *	The two protons separation energy, \f$S_{2p}\f$, is the energy required to seperate out two protons from the nucleus of an atom, \f$\ce{ ^{A}_{Z}X_{N} }\f$, in order to produce \f$\ce{ ^{A-2}_{Z-2}X_{N} }\f$.
    *	It is equal to the difference in binding energies between \f$\ce{ ^{A}_{Z}X_{N} }\f$ and \f$\ce{ ^{A-2}_{Z-2}X_{N} }\f$.
    *
    *	\f[S_{2p} = BE(\ce{ ^{A}_{Z}X_{N} }) - BE(\ce{ ^{A-2}_{Z-2}X_{N} })\f]
    *	\f[S_{2p} = \left ( m(\ce{ ^{A-2}_{Z-2}X_{N} }) + 2 m_p - m(\ce{ ^{A}_{Z}X_{N} })  \right ) c^2\f]
    *
    *	See https://en.wikipedia.org/wiki/Nuclear_binding_energy
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 65
    *
    *	@param massAtomInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of initial atom. The mass of the atom before two protons is removed in unified atomic mass units.
    *	@param massProducedAtomInu \f$m(\ce{ ^{A-2}_{Z-2}X_{N} })\ (u)\f$ Mass of produced atom. The mass of the produced atom once two protons is removed in unified atomic mass units.
    *	@return \f$S_{2p}\ (MeV)\f$ Two protons separation energy. The energy in megaelectron volts needed to remove two protons from the nucleus of the initial atom.
    *	@see ProtonTwoSeparationEnergyInJ() to calculate the two protons separation energy in joules.
    *	@see ProtonSeparationEnergyInMeV() to calculate the proton seperation energy. 
	*	@see NeutronSeparationEnergyInMeV() to calculate the neutrons separation energy.
	*	@see NeutronTwoSeparationEnergyInMeV() to calculate the two neutrons seperation energy. 
    *	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
    */
    template<typename T>
    T ProtonTwoSeparationEnergyInMeV(const T& massAtomInu, const T& massProducedAtomInu);
    
        /**
    *	@brief Calculates the two protons separation energy, \f$S_{2p}\f$. The energy in joules needed to remove two protons from the nucleus of an atom.
    *
    *	The two protons separation energy, \f$S_{2p}\f$, is the energy required to seperate out two protons from the nucleus of an atom, \f$\ce{ ^{A}_{Z}X_{N} }\f$, in order to produce \f$\ce{ ^{A-2}_{Z-2}X_{N} }\f$.
    *	It is equal to the difference in binding energies between \f$\ce{ ^{A}_{Z}X_{N} }\f$ and \f$\ce{ ^{A-2}_{Z-2}X_{N} }\f$.
    *
    *	\f[S_{2p} = BE(\ce{ ^{A}_{Z}X_{N} }) - BE(\ce{ ^{A-2}_{Z-2}X_{N} })\f]
    *	\f[S_{2p} = \left ( m(\ce{ ^{A-2}_{Z-2}X_{N} }) + 2 m_p - m(\ce{ ^{A}_{Z}X_{N} })  \right ) c^2\f]
    *
    *	See https://en.wikipedia.org/wiki/Nuclear_binding_energy
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 65
    *
    *	@param massAtomInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of initial atom. The mass of the atom before two protons is removed in unified atomic mass units.
    *	@param massProducedAtomInu \f$m(\ce{ ^{A-2}_{Z-2}X_{N} })\ (u)\f$ Mass of produced atom. The mass of the produced atom once two protons is removed in unified atomic mass units.
    *	@return \f$S_{2p}\ (J)\f$ Two protons separation energy. The energy in joules needed to remove two protons from the nucleus of the initial atom.
    *	@see ProtonTwoSeparationEnergyInMeV() to calculate the two protons separation energy in megaelectron volts.
    *	@see ProtonSeparationEnergyInJ() to calculate the proton seperation energy. 
	*	@see NeutronSeparationEnergyInJ() to calculate the neutrons separation energy.
	*	@see NeutronTwoSeparationEnergyInJ() to calculate the two neutrons seperation energy. 
    *	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
    */
    template<typename T>
    T ProtonTwoSeparationEnergyInJ(const T& massAtomInu, const T& massProducedAtomInu);
   
    /// @}
} //namespace EGXPhys

#include "NuclearSeparationEnergy.inl"
