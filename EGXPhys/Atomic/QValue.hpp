/// @file EGXPhys/Atomic/QValue.hpp
///
/// @brief Calculates Q-value of a nuclear reaction.
///
/// @author Elliot Grafil (Metex)
/// @date 8/18/17

/// @defgroup QValue Q-Value
/// @ingroup Atomic
/// Calculates the Q-value, \f$Q\f$, of a nuclear reaction.

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
	/// @addtogroup QValue
	/// @{
    
    /**
    *	@brief Calculates the Q-value, \f$Q\f$ of a nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For a projectile \f$x\f$ colliding with a target \f$X\f$ and thereby producing \f$y\f$ and \f$Y\f$ the equation becomes:
    *
    *	\f[Q = \left ( m(x) + m (X) - m(y) - m(Y) \right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
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
    T QValueInMeV(const T& massInitial1Inu, const T& massInitial2Inu, const T& massProduct1Inu, const T& massProduct2Inu);	
    
    template<typename T>
    T QValueInJ(const T& massInitial1Inu, const T& massInitial2Inu, const T& massProduct1Inu, const T& massProduct2Inu);	
    
    // -------------- Alpha ----------------------
    
    template<typename T>
    T QValueAlphaDecayInMeV(const T& massParentInu, const T& massDaughterInu);
	
	template<typename T>
    T QValueAlphaDecayInJ(const T& massParentInu, const T& massDaughterInu);	
    
    template<typename T>
    T QValueDoubleAlphaDecayInMeV(const T& massParentInu, const T& massDaughterInu);
    
    template<typename T>
    T QValueDoubleAlphaDecayInJ(const T& massParentInu, const T& massDaughterInu);
    
    // -------------- Beta Minus----------------------
    
   	template<typename T>
    T QValueBetaMinusDecayInMeV(const T& massParentInu, const T& massDaughterInu);
	
	template<typename T>
    T QValueBetaMinusDecayInJ(const T& massParentInu, const T& massDaughterInu);	
    
    template<typename T>
    T QValueDoubleBetaMinusDecayInMeV(const T& massParentInu, const T& massDaughterInu);
    
    template<typename T>
    T QValueDoubleBetaMinusDecayInJ(const T& massParentInu, const T& massDaughterInu);
    
    // -------------- Beta Plus ----------------------
    
    template<typename T>
    T QValueBetaPlusDecayInMeV(const T& massParentInu, const T& massDaughterInu);
    
	template<typename T>
    T QValueBetaPlusDecayInJ(const T& massParentInu, const T& massDaughterInu);
    
    template<typename T>
    T QValueDoubleBetaPlusDecayInMeV(const T& massParentInu, const T& massDaughterInu);
    
    template<typename T>
    T QValueDoubleBetaPlusDecayInJ(const T& massParentInu, const T& massDaughterInu);
    
    // -------------- Electron Capture ----------------------
    
    template<typename T>
    T QValueElectronCaptureDecayInMeV(const T& massParentInu, const T& massDaughterInu);
    
	template<typename T>
    T QValueElectronCaptureDecayInJ(const T& massParentInu, const T& massDaughterInu);
    
    template<typename T>
    T QValueDoubleElectronCaptureDecayInMeV(const T& massParentInu, const T& massDaughterInu);
    
    template<typename T>
    T QValueDoubleElectronCaptureDecayInJ(const T& massParentInu, const T& massDaughterInu);
    
    // -------------- Neutron ----------------------
    
    template<typename T>
    T QValueNeutronDecayInMeV(const T& massParentInu, const T& massDaughterInu);
    
	template<typename T>
    T QValueNeutronDecayInJ(const T& massParentInu, const T& massDaughterInu);
    
    template<typename T>
    T QValueDoubleNeutronDecayInMeV(const T& massParentInu, const T& massDaughterInu);
    
    template<typename T>
    T QValueDoubleNeutronDecayInJ(const T& massParentInu, const T& massDaughterInu);
    
    // -------------- Proton ----------------------
    
    template<typename T>
    T QValueProtonDecayInMeV(const T& massParentInu, const T& massDaughterInu);
    
	template<typename T>
    T QValueProtonDecayInJ(const T& massParentInu, const T& massDaughterInu);
    
    template<typename T>
    T QValueDoubleProtonDecayInMeV(const T& massParentInu, const T& massDaughterInu);
    
    template<typename T>
    T QValueDoubleProtonDecayInJ(const T& massParentInu, const T& massDaughterInu);
    
    /// @}
} //namespace EGXPhys

#include "QValue.inl"
