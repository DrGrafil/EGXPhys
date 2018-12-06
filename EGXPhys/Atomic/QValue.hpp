/// @file EGXPhys/Atomic/QValue.hpp
///
/// @brief Calculates Q-value of a nuclear reaction.
///
/// @author Elliot Grafil 
/// @date 8/18/17

/// @defgroup EGXPhys-QValue Q-Value
/// @ingroup EGXPhys-Atomic
/// Calculates the Q-value, \f$Q\f$, of a nuclear reaction.

/// @defgroup EGXPhys-QValue-Alpha Alpha Decay
/// @ingroup EGXPhys-QValue

/// @defgroup EGXPhys-QValue-BetaMinus Beta Minus Decay
/// @ingroup EGXPhys-QValue

/// @defgroup EGXPhys-QValue-BetaPlus Beta Plus Decay
/// @ingroup EGXPhys-QValue

/// @defgroup EGXPhys-QValue-ElectronCapture Electron Capture
/// @ingroup EGXPhys-QValue

/// @defgroup EGXPhys-QValue-NeutronEmission Neutron Emission
/// @ingroup EGXPhys-QValue

/// @defgroup EGXPhys-QValue-ProtonEmission Proton Emission
/// @ingroup EGXPhys-QValue

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
	/// @addtogroup EGXPhys-QValue
	/// @{
    
    /**
    *	@brief Calculates the Q-value, \f$Q\f$, of a nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
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
    *	@param massProjectileInu \f$m(x)\ (u)\f$ Mass of projectile. The mass of the projectile in unified atomic mass units.
	*	@param massTargetInu \f$m(X)\ (u)\f$ Mass of target. The mass of the target in unified atomic mass units.
    *	@param massProduct1Inu \f$m(y)\ (u)\f$ Mass of first product. The mass of the first product in unified atomic mass units.
	*	@param massProduct2Inu \f$m(Y)\ (u)\f$ Mass of second product. The mass of the second product in unified atomic mass units.
    *	@return \f$Q\ (MeV)\f$ Q-value. The energy in megaelectron volts produced by a nuclear reaction.
    *	@see MassDefect() to calculate the mass defect of an atom.   
    *	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInMeV() to calculate Q-Value for an alpha decay reaction in megaelectron volts.
	*	@see QValueBetaMinusDecayInMeV() to calculate Q-Value for a beta minus decay reaction in megaelectron volts.
	*	@see QValueBetaPlusDecayInMeV() to calculate Q-Value for a beta plus decay reaction decay in megaelectron volts.
	*	@see QValueElectronCaptureInMeV() to calculate Q-Value for a electron capture reaction in megaelectron volts.
	*	@see QValueNeutronEmissionInMeV() to calculate Q-Value for an neutron emission reaction in megaelectron volts.
	*	@see QValueProtonEmissionInMeV() to calculate Q-Value for a proton emission reaction in megaelectron volts.
    */
    template<typename T>
    T QValueInMeV(const T massProjectileInu, const T massTargetInu, const T massProduct1Inu, const T massProduct2Inu);
    
	/**
	*	@brief Calculates the Q-value, \f$Q\f$, of a nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
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
	*	@param massProjectileInu \f$m(x)\ (u)\f$ Mass of projectile. The mass of the projectile in unified atomic mass units.
	*	@param massTargetInu \f$m(X)\ (u)\f$ Mass of target. The mass of the target in unified atomic mass units.
	*	@param massProduct1Inu \f$m(y)\ (u)\f$ Mass of first product. The mass of the first product in unified atomic mass units.
	*	@param massProduct2Inu \f$m(Y)\ (u)\f$ Mass of second product. The mass of the second product in unified atomic mass units.
	*	@return \f$Q\ (J)\f$ Q-value. The energy in joules produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInJ() to calculate Q-Value for an alpha decay reaction in joules.
	*	@see QValueBetaMinusDecayInJ() to calculate Q-Value for a beta minus decay reaction in joules.
	*	@see QValueBetaPlusDecayInJ() to calculate Q-Value for a beta plus decay reaction decay in joules.
	*	@see QValueElectronCaptureInJ() to calculate Q-Value for a electron capture reaction in joules.
	*	@see QValueNeutronEmissionInJ() to calculate Q-Value for an neutron emission reaction in joules.
	*	@see QValueProtonEmissionInJ() to calculate Q-Value for a proton emission reaction in joules.
	*/
    template<typename T>
    T QValueInJ(const T massProjectileInu, const T massTargetInu, const T massProduct1Inu, const T massProduct2Inu);
    
	/// @}
    // -------------- Alpha ----------------------
	/// @addtogroup EGXPhys-QValue-Alpha
	/// @{

	/**
	*	@brief Calculates the Q-value, \f$Q\f$ of an alpha decay nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A-4}_{Z -2}Y_{N-2} })\f$, as well as the mass of the alpha particle \f$m(\alpha)\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A-4}_{Z -2}Y_{N-2} })-m(\alpha) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A-4}_{Z -2}Y_{N-2} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (MeV)\f$ Q-value. The energy in megaelectron volts produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueBetaMinusDecayInMeV() to calculate Q-Value for a beta minus decay reaction in megaelectron volts.
	*	@see QValueBetaPlusDecayInMeV() to calculate Q-Value for a beta plus decay reaction decay in megaelectron volts.
	*	@see QValueElectronCaptureInMeV() to calculate Q-Value for a electron capture reaction in megaelectron volts.
	*	@see QValueNeutronEmissionInMeV() to calculate Q-Value for an neutron emission reaction in megaelectron volts.
	*	@see QValueProtonEmissionInMeV() to calculate Q-Value for a proton emission reaction in megaelectron volts.
	*/
    template<typename T>
    T QValueAlphaDecayInMeV(const T massParentInu, const T massDaughterInu);
	
	/**
	*	@brief Calculates the Q-value, \f$Q\f$ of an alpha decay nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A-4}_{Z -2}Y_{N-2} })\f$, as well as the mass of the alpha particle \f$m(\alpha)\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A-4}_{Z -2}Y_{N-2} })-m(\alpha) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A-4}_{Z -2}Y_{N-2} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (J)\f$ Q-value. The energy in joules produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueBetaMinusDecayInJ() to calculate Q-Value for a beta minus decay reaction in joules.
	*	@see QValueBetaPlusDecayInJ() to calculate Q-Value for a beta plus decay reaction decay in joules.
	*	@see QValueElectronCaptureInJ() to calculate Q-Value for a electron capture reaction in joules.
	*	@see QValueNeutronEmissionInJ() to calculate Q-Value for an neutron emission reaction in joules.
	*	@see QValueProtonEmissionInJ() to calculate Q-Value for a proton emission reaction in joules.
	*/
	template<typename T>
    T QValueAlphaDecayInJ(const T massParentInu, const T massDaughterInu);	
    
	/**
	*	@brief Calculates the Q-value, \f$Q\f$, of a double alpha decay nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A-8}_{Z -4}Y_{N-4} })\f$, as well as the mass of two alpha particle \f$m(\alpha)\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A-8}_{Z -4}Y_{N-4} })-2m(\alpha) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A-8}_{Z -4}Y_{N-4} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (MeV)\f$ Q-value. The energy in megaelectron volts produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueBetaMinusDecayInMeV() to calculate Q-Value for a beta minus decay reaction in megaelectron volts.
	*	@see QValueBetaPlusDecayInMeV() to calculate Q-Value for a beta plus decay reaction decay in megaelectron volts.
	*	@see QValueElectronCaptureInMeV() to calculate Q-Value for a electron capture reaction in megaelectron volts.
	*	@see QValueNeutronEmissionInMeV() to calculate Q-Value for an neutron emission reaction in megaelectron volts.
	*	@see QValueProtonEmissionInMeV() to calculate Q-Value for a proton emission reaction in megaelectron volts.
	*/
    template<typename T>
    T QValueDoubleAlphaDecayInMeV(const T massParentInu, const T massDaughterInu);
    
	/**
	*	@brief Calculates the Q-value, \f$Q\f$, of a double alpha decay nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A-8}_{Z -4}Y_{N-4} })\f$, as well as the mass of two alpha particle \f$m(\alpha)\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A-8}_{Z -4}Y_{N-4} })-2m(\alpha) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A-8}_{Z -4}Y_{N-4} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (J)\f$ Q-value. The energy in joules produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueBetaMinusDecayInJ() to calculate Q-Value for a beta minus decay reaction in joules.
	*	@see QValueBetaPlusDecayInJ() to calculate Q-Value for a beta plus decay reaction decay in joules.
	*	@see QValueElectronCaptureInJ() to calculate Q-Value for a electron capture reaction in joules.
	*	@see QValueNeutronEmissionInJ() to calculate Q-Value for an neutron emission reaction in joules.
	*	@see QValueProtonEmissionInJ() to calculate Q-Value for a proton emission reaction in joules.
	*/
    template<typename T>
    T QValueDoubleAlphaDecayInJ(const T massParentInu, const T massDaughterInu);
    
	/// @}
    // -------------- Beta Minus----------------------
	/// @addtogroup EGXPhys-QValue-BetaMinus
	/// @{

	/**
	*	@brief Calculates the Q-value, \f$Q\f$, of a beta minus, \f$\beta^-\f$, decay nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A}_{Z +1}Y_{N -1} })\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A}_{Z +1}Y_{N -1} }) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Beta_decay
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A}_{Z +1}Y_{N -1} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (MeV)\f$ Q-value. The energy in megaelectron volts produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInMeV() to calculate Q-Value for an alpha decay reaction in megaelectron volts.
	*	@see QValueBetaPlusDecayInMeV() to calculate Q-Value for a beta plus decay reaction decay in megaelectron volts.
	*	@see QValueElectronCaptureInMeV() to calculate Q-Value for a electron capture reaction in megaelectron volts.
	*	@see QValueNeutronEmissionInMeV() to calculate Q-Value for an neutron emission reaction in megaelectron volts.
	*	@see QValueProtonEmissionInMeV() to calculate Q-Value for a proton emission reaction in megaelectron volts.
	*/
   	template<typename T>
    T QValueBetaMinusDecayInMeV(const T massParentInu, const T massDaughterInu);
	
	/**
	*	@brief Calculates the Q-value, \f$Q\f$, of a beta minus, \f$\beta^-\f$, decay nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A}_{Z +1}Y_{N -1} })\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A}_{Z +1}Y_{N -1} }) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Beta_decay
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A}_{Z +1}Y_{N -1} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (J)\f$ Q-value. The energy in joules produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInJ() to calculate Q-Value for an alpha decay reaction in joules.
	*	@see QValueBetaPlusDecayInJ() to calculate Q-Value for a beta plus decay reaction decay in joules.
	*	@see QValueElectronCaptureInJ() to calculate Q-Value for a electron capture reaction in joules.
	*	@see QValueNeutronEmissionInJ() to calculate Q-Value for an neutron emission reaction in joules.
	*	@see QValueProtonEmissionInJ() to calculate Q-Value for a proton emission reaction in joules.
	*/
	template<typename T>
    T QValueBetaMinusDecayInJ(const T massParentInu, const T massDaughterInu);	
    
	/**
	*	@brief Calculates the Q-value, \f$Q\f$, of a double beta minus, \f$\beta^-\f$, decay nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A}_{Z +2}Y_{N -2} })\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A}_{Z +2}Y_{N -2} }) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Beta_decay
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A}_{Z +2}Y_{N -2} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (MeV)\f$ Q-value. The energy in megaelectron volts produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInMeV() to calculate Q-Value for an alpha decay reaction in megaelectron volts.
	*	@see QValueBetaPlusDecayInMeV() to calculate Q-Value for a beta plus decay reaction decay in megaelectron volts.
	*	@see QValueElectronCaptureInMeV() to calculate Q-Value for a electron capture reaction in megaelectron volts.
	*	@see QValueNeutronEmissionInMeV() to calculate Q-Value for an neutron emission reaction in megaelectron volts.
	*	@see QValueProtonEmissionInMeV() to calculate Q-Value for a proton emission reaction in megaelectron volts.
	*/
    template<typename T>
    T QValueDoubleBetaMinusDecayInMeV(const T massParentInu, const T massDaughterInu);
    
	/**
	*	@brief Calculates the Q-value, \f$Q\f$, of a double beta minus, \f$\beta^-\f$, decay nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A}_{Z +2}Y_{N -2} })\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A}_{Z +2}Y_{N -2} }) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Beta_decay
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A}_{Z +2}Y_{N -2} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (J)\f$ Q-value. The energy in joules produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInJ() to calculate Q-Value for an alpha decay reaction in joules.
	*	@see QValueBetaPlusDecayInJ() to calculate Q-Value for a beta plus decay reaction decay in joules.
	*	@see QValueElectronCaptureInJ() to calculate Q-Value for a electron capture reaction in joules.
	*	@see QValueNeutronEmissionInJ() to calculate Q-Value for an neutron emission reaction in joules.
	*	@see QValueProtonEmissionInJ() to calculate Q-Value for a proton emission reaction in joules.
	*/
    template<typename T>
    T QValueDoubleBetaMinusDecayInJ(const T massParentInu, const T massDaughterInu);
    
	/// @}
    // -------------- Beta Plus ----------------------
	/// @addtogroup EGXPhys-QValue-BetaPlus
	/// @{

	/**
	*	@brief Calculates the Q-value, \f$Q\f$, of a beta plus, \f$\beta^+\f$, decay nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A}_{Z -1}Y_{N +1} })\f$, as well as the mass of a positron, \f$m(\ce{ ^{0}_{+1}e_{0} })\f$. The mass of an electron, \f$m(\ce{ ^{0}_{-1}e_{0} })\f$, is also subtracted to turn the ionized atom into a non-ionized one (which is typical for these calculations since ionized mass of atoms are rarely tabulated):
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A}_{Z -1}Y_{N +1} })-m(\ce{ ^{0}_{+1}e_{0} }) - m(\ce{ ^{0}_{-1}e_{0} }) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Positron_emission
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A}_{Z -1}Y_{N +1} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (MeV)\f$ Q-value. The energy in megaelectron volts produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInMeV() to calculate Q-Value for an alpha decay reaction in megaelectron volts.
	*	@see QValueBetaMinusDecayInMeV() to calculate Q-Value for a beta minus decay reaction in megaelectron volts.
	*	@see QValueElectronCaptureInMeV() to calculate Q-Value for a electron capture reaction in megaelectron volts.
	*	@see QValueNeutronEmissionInMeV() to calculate Q-Value for an neutron emission reaction in megaelectron volts.
	*	@see QValueProtonEmissionInMeV() to calculate Q-Value for a proton emission reaction in megaelectron volts.
	*/
    template<typename T>
    T QValueBetaPlusDecayInMeV(const T massParentInu, const T massDaughterInu);
    
	/**
	*	@brief Calculates the Q-value, \f$Q\f$, of a beta plus, \f$\beta^+\f$, decay nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A}_{Z -1}Y_{N +1} })\f$, as well as the mass of a positron, \f$m(\ce{ ^{0}_{+1}e_{0} })\f$. The mass of an electron, \f$m(\ce{ ^{0}_{-1}e_{0} })\f$, is also subtracted to turn the ionized atom into a non-ionized one (which is typical for these calculations since ionized mass of atoms are rarely tabulated):
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A}_{Z -1}Y_{N +1} })-m(\ce{ ^{0}_{+1}e_{0} }) - m(\ce{ ^{0}_{-1}e_{0} }) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Positron_emission
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A}_{Z -1}Y_{N +1} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (J)\f$ Q-value. The energy in joules produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInJ() to calculate Q-Value for an alpha decay reaction in joules.
	*	@see QValueBetaMinusDecayInJ() to calculate Q-Value for a beta minus decay reaction in joules.
	*	@see QValueElectronCaptureInJ() to calculate Q-Value for a electron capture reaction in joules.
	*	@see QValueNeutronEmissionInJ() to calculate Q-Value for an neutron emission reaction in joules.
	*	@see QValueProtonEmissionInJ() to calculate Q-Value for a proton emission reaction in joules.
	*/
	template<typename T>
    T QValueBetaPlusDecayInJ(const T massParentInu, const T massDaughterInu);
    
	/**
	*	@brief Calculates the Q-value, \f$Q\f$, of a double beta plus, \f$\beta^+\f$, decay nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A}_{Z -2}Y_{N +2} })\f$, as well as the mass of two positrons, \f$m(\ce{ ^{0}_{+1}e_{0} })\f$. The mass two electrons, \f$m(\ce{ ^{0}_{-1}e_{0} })\f$, are also subtracted to turn the ionized atom into a non-ionized one (which is typical for these calculations since ionized mass of atoms are rarely tabulated)::
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A}_{Z -2}Y_{N +2} })-2m(\ce{ ^{0}_{+2}e_{0} }) - 2m(\ce{ ^{0}_{-1}e_{0} }) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Positron_emission
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A}_{Z -2}Y_{N +2} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (MeV)\f$ Q-value. The energy in megaelectron volts produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInMeV() to calculate Q-Value for an alpha decay reaction in megaelectron volts.
	*	@see QValueBetaMinusDecayInMeV() to calculate Q-Value for a beta minus decay reaction in megaelectron volts.
	*	@see QValueElectronCaptureInMeV() to calculate Q-Value for a electron capture reaction in megaelectron volts.
	*	@see QValueNeutronEmissionInMeV() to calculate Q-Value for an neutron emission reaction in megaelectron volts.
	*	@see QValueProtonEmissionInMeV() to calculate Q-Value for a proton emission reaction in megaelectron volts.
	*/
    template<typename T>
    T QValueDoubleBetaPlusDecayInMeV(const T massParentInu, const T massDaughterInu);
    
	/**
	*	@brief Calculates the Q-value, \f$Q\f$, of a double beta plus, \f$\beta^+\f$, decay nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A}_{Z -2}Y_{N +2} })\f$, as well as the mass of two positrons, \f$m(\ce{ ^{0}_{+1}e_{0} })\f$. The mass two electrons, \f$m(\ce{ ^{0}_{-1}e_{0} })\f$, are also subtracted to turn the ionized atom into a non-ionized one (which is typical for these calculations since ionized mass of atoms are rarely tabulated)::
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A}_{Z -2}Y_{N +2} })-2m(\ce{ ^{0}_{+2}e_{0} }) - 2m(\ce{ ^{0}_{-1}e_{0} }) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Positron_emission
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A}_{Z -2}Y_{N +2} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (J)\f$ Q-value. The energy in joules produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInJ() to calculate Q-Value for an alpha decay reaction in joules.
	*	@see QValueBetaMinusDecayInJ() to calculate Q-Value for a beta minus decay reaction in joules.
	*	@see QValueElectronCaptureInJ() to calculate Q-Value for a electron capture reaction in joules.
	*	@see QValueNeutronEmissionInJ() to calculate Q-Value for an neutron emission reaction in joules.
	*	@see QValueProtonEmissionInJ() to calculate Q-Value for a proton emission reaction in joules.
	*/
    template<typename T>
    T QValueDoubleBetaPlusDecayInJ(const T massParentInu, const T massDaughterInu);
    
	/// @}
    // -------------- Electron Capture ----------------------
	/// @addtogroup EGXPhys-QValue-ElectronCapture
	/// @{

	/**
	*	@brief Calculates the Q-value, \f$Q\f$ of an electron capture(k-capture) nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A}_{Z -1}Y_{N +1} })\f$, as well as the binding energy of the n-shell captured electron \f$B_n\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A}_{Z -1}Y_{N +1} }) \right) c^2-B_n\f]
	*
	*	Depending on the database/calculation style the binding energy of the n-shelled captured electron is not included in the calculation. For example nndc.bnl.gov exlcudes it while Krane includes it.
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Electron_capture
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A}_{Z -1}Y_{N +1} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@param neutronBindingEnergyInMeV \f$B_n\ (MeV)\f$ Binding energy of the n-shell captured electron in megaelectron volts.
	*	@return \f$Q\ (MeV)\f$ Q-value. The energy in megaelectron volts produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInMeV() to calculate Q-Value for an alpha decay reaction in megaelectron volts.
	*	@see QValueBetaMinusDecayInMeV() to calculate Q-Value for a beta minus decay reaction in megaelectron volts.
	*	@see QValueBetaPlusDecayInMeV() to calculate Q-Value for a beta plus decay reaction decay in megaelectron volts.
	*	@see QValueNeutronEmissionInMeV() to calculate Q-Value for an neutron emission reaction in megaelectron volts.
	*	@see QValueProtonEmissionInMeV() to calculate Q-Value for a proton emission reaction in megaelectron volts.
	*/
    template<typename T>
    T QValueElectronCaptureInMeV(const T massParentInu, const T massDaughterInu, const T neutronBindingEnergyInMeV = (T)(0.0));
    
	/**
	*	@brief Calculates the Q-value, \f$Q\f$ of an electron capture(k-capture) nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A}_{Z -1}Y_{N +1} })\f$, as well as the binding energy of the n-shell captured electron \f$B_n\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A}_{Z -1}Y_{N +1} }) \right) c^2-B_n\f]
	*
	*	Depending on the database/calculation style the binding energy of the n-shelled captured electron is not included in the calculation. For example nndc.bnl.gov exlcudes it while Krane includes it.
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Electron_capture
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A}_{Z -1}Y_{N +1} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@param neutronBindingEnergyInJ \f$B_n\ (J)\f$ Binding energy of the n-shell captured electron in joules.
	*	@return \f$Q\ (J)\f$ Q-value. The energy in joules produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInJ() to calculate Q-Value for an alpha decay reaction in joules.
	*	@see QValueBetaMinusDecayInJ() to calculate Q-Value for a beta minus decay reaction in joules.
	*	@see QValueBetaPlusDecayInJ() to calculate Q-Value for a beta plus decay reaction decay in joules.
	*	@see QValueNeutronEmissionInJ() to calculate Q-Value for an neutron emission reaction in joules.
	*	@see QValueProtonEmissionInJ() to calculate Q-Value for a proton emission reaction in joules.
	*/
	template<typename T>
    T QValueElectronCaptureInJ(const T massParentInu, const T massDaughterInu, const T neutronBindingEnergyInJ = (T)(0.0));
    
	/**
	*	@brief Calculates the Q-value, \f$Q\f$, of a double electron capture(k-capture) nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A}_{Z -2}Y_{N +2} })\f$, as well as the binding energy of the two n-shell captured electron \f$B_{2n}\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A}_{Z -2}Y_{N +2} }) \right) c^2-B_{2n}\f]
	*
	*	Depending on the database/calculation style the binding energy of the two n-shelled captured electron is not included in the calculation. For example nndc.bnl.gov exlcudes it while Krane includes it.
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Electron_capture
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A}_{Z -2}Y_{N +2} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@param neutronBindingEnergyInMeV \f$B_{2n}\ (MeV)\f$ Binding energy of the two n-shell captured electron in megaelectron volts.
	*	@return \f$Q\ (MeV)\f$ Q-value. The energy in megaelectron volts produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInMeV() to calculate Q-Value for an alpha decay reaction in megaelectron volts.
	*	@see QValueBetaMinusDecayInMeV() to calculate Q-Value for a beta minus decay reaction in megaelectron volts.
	*	@see QValueBetaPlusDecayInMeV() to calculate Q-Value for a beta plus decay reaction decay in megaelectron volts.
	*	@see QValueNeutronEmissionInMeV() to calculate Q-Value for an neutron emission reaction in megaelectron volts.
	*	@see QValueProtonEmissionInMeV() to calculate Q-Value for a proton emission reaction in megaelectron volts.
	*/
    template<typename T>
    T QValueDoubleElectronCaptureInMeV(const T massParentInu, const T massDaughterInu, const T neutronBindingEnergyInMeV = (T)(0.0));
    
	/**
	*	@brief Calculates the Q-value, \f$Q\f$, of a double electron capture(k-capture) nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A}_{Z -2}Y_{N +2} })\f$, as well as the binding energy of the n-shell captured electron \f$B_{2n}\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A}_{Z -2}Y_{N +2} }) \right) c^2-B_{2n}\f]
	*
	*	Depending on the database/calculation style the binding energy of the n-shelled captured electron is not included in the calculation. For example nndc.bnl.gov exlcudes it while Krane includes it.
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Electron_capture
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A}_{Z -2}Y_{N +2} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@param neutronBindingEnergyInJ \f$B_{2n}\ (J)\f$ Binding energy of the two n-shell captured electron in joules.
	*	@return \f$Q\ (J)\f$ Q-value. The energy in joules produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInJ() to calculate Q-Value for an alpha decay reaction in joules.
	*	@see QValueBetaMinusDecayInJ() to calculate Q-Value for a beta minus decay reaction in joules.
	*	@see QValueBetaPlusDecayInJ() to calculate Q-Value for a beta plus decay reaction decay in joules.
	*	@see QValueNeutronEmissionInJ() to calculate Q-Value for an neutron emission reaction in joules.
	*	@see QValueProtonEmissionInJ() to calculate Q-Value for a proton emission reaction in joules.
	*/
    template<typename T>
    T QValueDoubleElectronCaptureInJ(const T massParentInu, const T massDaughterInu, const T neutronBindingEnergyInJ = (T)(0.0));
    
	/// @}
    // -------------- Neutron ----------------------
	/// @addtogroup EGXPhys-QValue-NeutronEmission
	/// @{

	/**
	*	@brief Calculates the Q-value, \f$Q\f$, of a neutron emission nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A-1}_{Z}X_{N -1} })\f$, as well as the mass of a neutron \f$m(\ce{ ^{1}_{0}n_{1} })\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A-1}_{Z}X_{N -1} })-m(\ce{ ^{1}_{0}n_{1} }) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Neutron_emission
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A-1}_{Z}X_{N -1} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (MeV)\f$ Q-value. The energy in megaelectron volts produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInMeV() to calculate Q-Value for an alpha decay reaction in megaelectron volts.
	*	@see QValueBetaMinusDecayInMeV() to calculate Q-Value for a beta minus decay reaction in megaelectron volts.
	*	@see QValueBetaPlusDecayInMeV() to calculate Q-Value for a beta plus decay reaction decay in megaelectron volts.
	*	@see QValueElectronCaptureInMeV() to calculate Q-Value for a electron capture reaction in megaelectron volts.
	*	@see QValueProtonEmissionInMeV() to calculate Q-Value for a proton emission reaction in megaelectron volts.
	*/
    template<typename T>
    T QValueNeutronEmissionInMeV(const T massParentInu, const T massDaughterInu);
    
	/**
	*	@brief Calculates the Q-value, \f$Q\f$, of a neutron emission nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A-1}_{Z}X_{N -1} })\f$, as well as the mass of a neutron \f$m(\ce{ ^{1}_{0}n_{1} })\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A-1}_{Z}X_{N -1} })-m(\ce{ ^{1}_{0}n_{1} }) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Neutron_emission
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A-1}_{Z}X_{N -1} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (J)\f$ Q-value. The energy in joules produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInJ() to calculate Q-Value for an alpha decay reaction in joules.
	*	@see QValueBetaMinusDecayInJ() to calculate Q-Value for a beta minus decay reaction in joules.
	*	@see QValueBetaPlusDecayInJ() to calculate Q-Value for a beta plus decay reaction decay in joules.
	*	@see QValueElectronCaptureInJ() to calculate Q-Value for a electron capture reaction in joules.
	*	@see QValueProtonEmissionInJ() to calculate Q-Value for a proton emission reaction in joules.
	*/
	template<typename T>
    T QValueNeutronEmissionInJ(const T massParentInu, const T massDaughterInu);
    
	/**
	*	@brief Calculates the Q-value, \f$Q\f$, of a double neutron emission nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A-2}_{Z}X_{N -2} })\f$, as well as the mass of two neutron \f$m(\ce{ ^{1}_{0}n_{1} })\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A-2}_{Z}X_{N -2} })-2m(\ce{ ^{1}_{0}n_{1} }) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Neutron_emission
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A-2}_{Z}X_{N -2} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (MeV)\f$ Q-value. The energy in megaelectron volts produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInMeV() to calculate Q-Value for an alpha decay reaction in megaelectron volts.
	*	@see QValueBetaMinusDecayInMeV() to calculate Q-Value for a beta minus decay reaction in megaelectron volts.
	*	@see QValueBetaPlusDecayInMeV() to calculate Q-Value for a beta plus decay reaction decay in megaelectron volts.
	*	@see QValueElectronCaptureInMeV() to calculate Q-Value for a electron capture reaction in megaelectron volts.
	*	@see QValueProtonEmissionInMeV() to calculate Q-Value for a proton emission reaction in megaelectron volts.
	*/
    template<typename T>
    T QValueDoubleNeutronEmissionInMeV(const T massParentInu, const T massDaughterInu);
    
	/**
	*	@brief Calculates the Q-value, \f$Q\f$, of a double neutron emission nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A-2}_{Z}X_{N -2} })\f$, as well as the mass of two neutron \f$m(\ce{ ^{1}_{0}n_{1} })\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A-2}_{Z}X_{N -2} })-2m(\ce{ ^{1}_{0}n_{1} }) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Neutron_emission
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A-2}_{Z}X_{N -2} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (J)\f$ Q-value. The energy in joules produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInJ() to calculate Q-Value for an alpha decay reaction in joules.
	*	@see QValueBetaMinusDecayInJ() to calculate Q-Value for a beta minus decay reaction in joules.
	*	@see QValueBetaPlusDecayInJ() to calculate Q-Value for a beta plus decay reaction decay in joules.
	*	@see QValueElectronCaptureInJ() to calculate Q-Value for a electron capture reaction in joules.
	*	@see QValueProtonEmissionInJ() to calculate Q-Value for a proton emission reaction in joules.
	*/
    template<typename T>
    T QValueDoubleNeutronEmissionInJ(const T massParentInu, const T massDaughterInu);
    
	/// @}
    // -------------- Proton ----------------------
	/// @addtogroup EGXPhys-QValue-ProtonEmission
	/// @{

	/**
	*	@brief Calculates the Q-value, \f$Q\f$, of a proton emission nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A-1}_{Z -1}Y_{N} })\f$, as well as the mass of a proton \f$m(\ce{ ^{1}_{1}p_{0} })\f$. The mass of an electron, \f$m(\ce{ ^{0}_{-1}e_{0} })\f$, is also subtracted to turn the ionized atom into a non-ionized one (which is typical for these calculations since ionized mass of atoms are rarely tabulated):
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A-1}_{Z -1}Y_{N} })-m(\ce{ ^{1}_{1}p_{0} })-m(\ce{ ^{0}_{-1}e_{0} }) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Proton_emission
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A-1}_{Z -1}Y_{N} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (MeV)\f$ Q-value. The energy in megaelectron volts produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInMeV() to calculate Q-Value for an alpha decay reaction in megaelectron volts.
	*	@see QValueBetaMinusDecayInMeV() to calculate Q-Value for a beta minus decay reaction in megaelectron volts.
	*	@see QValueBetaPlusDecayInMeV() to calculate Q-Value for a beta plus decay reaction decay in megaelectron volts.
	*	@see QValueElectronCaptureInMeV() to calculate Q-Value for a electron capture reaction in megaelectron volts.
	*	@see QValueNeutronEmissionInMeV() to calculate Q-Value for an neutron emission reaction in megaelectron volts.
	*/
    template<typename T>
    T QValueProtonEmissionInMeV(const T massParentInu, const T massDaughterInu);
    
	/**
	*	@brief Calculates the Q-value, \f$Q\f$, of a proton emission nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A-1}_{Z -1}Y_{N} })\f$, as well as the mass of a proton \f$m(\ce{ ^{1}_{1}p_{0} })\f$. The mass of an electron, \f$m(\ce{ ^{0}_{-1}e_{0} })\f$, is also subtracted to turn the ionized atom into a non-ionized one (which is typical for these calculations since ionized mass of atoms are rarely tabulated):
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A-1}_{Z -1}Y_{N} })-m(\ce{ ^{1}_{1}p_{0} })-m(\ce{ ^{0}_{-1}e_{0} }) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Proton_emission
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A-1}_{Z -1}Y_{N} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (J)\f$ Q-value. The energy in joules produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInJ() to calculate Q-Value for an alpha decay reaction in joules.
	*	@see QValueBetaMinusDecayInJ() to calculate Q-Value for a beta minus decay reaction in joules.
	*	@see QValueBetaPlusDecayInJ() to calculate Q-Value for a beta plus decay reaction decay in joules.
	*	@see QValueElectronCaptureInJ() to calculate Q-Value for a electron capture reaction in joules.
	*	@see QValueNeutronEmissionInJ() to calculate Q-Value for an neutron emission reaction in joules.
	*/
	template<typename T>
    T QValueProtonEmissionInJ(const T massParentInu, const T massDaughterInu);
    
	/**
	*	@brief Calculates the Q-value, \f$Q\f$, of a double proton emission nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A-2}_{Z -2}Y_{N} })\f$, as well as the mass of two protons \f$m(\ce{ ^{1}_{1}p_{0} })\f$. The mass of two electrons, \f$m(\ce{ ^{0}_{-1}e_{0} })\f$, are also subtracted to turn the ionized atom into a non-ionized one (which is typical for these calculations since ionized mass of atoms are rarely tabulated):
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A-2}_{Z -2}Y_{N} })-2m(\ce{ ^{1}_{1}p_{0} })-2m(\ce{ ^{0}_{-1}e_{0} }) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Proton_emission
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A-2}_{Z -2}Y_{N} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (MeV)\f$ Q-value. The energy in megaelectron volts produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInMeV() to calculate Q-Value for an alpha decay reaction in megaelectron volts.
	*	@see QValueBetaMinusDecayInMeV() to calculate Q-Value for a beta minus decay reaction in megaelectron volts.
	*	@see QValueBetaPlusDecayInMeV() to calculate Q-Value for a beta plus decay reaction decay in megaelectron volts.
	*	@see QValueElectronCaptureInMeV() to calculate Q-Value for a electron capture reaction in megaelectron volts.
	*	@see QValueNeutronEmissionInMeV() to calculate Q-Value for an neutron emission reaction in megaelectron volts.
	*/
    template<typename T>
    T QValueDoubleProtonEmissionInMeV(const T massParentInu, const T massDaughterInu);
    
	/**
	*	@brief Calculates the Q-value, \f$Q\f$, of a double proton emission nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A-2}_{Z -2}Y_{N} })\f$, as well as the mass of two protons \f$m(\ce{ ^{1}_{1}p_{0} })\f$. The mass of two electrons, \f$m(\ce{ ^{0}_{-1}e_{0} })\f$, are also subtracted to turn the ionized atom into a non-ionized one (which is typical for these calculations since ionized mass of atoms are rarely tabulated):
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A-2}_{Z -2}Y_{N} })-2m(\ce{ ^{1}_{1}p_{0} })-2m(\ce{ ^{0}_{-1}e_{0} }) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Proton_emission
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A-2}_{Z -2}Y_{N} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (J)\f$ Q-value. The energy in joules produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInJ() to calculate Q-Value for an alpha decay reaction in joules.
	*	@see QValueBetaMinusDecayInJ() to calculate Q-Value for a beta minus decay reaction in joules.
	*	@see QValueBetaPlusDecayInJ() to calculate Q-Value for a beta plus decay reaction decay in joules.
	*	@see QValueElectronCaptureInJ() to calculate Q-Value for a electron capture reaction in joules.
	*	@see QValueNeutronEmissionInJ() to calculate Q-Value for an neutron emission reaction in joules.
	*/
    template<typename T>
    T QValueDoubleProtonEmissionInJ(const T massParentInu, const T massDaughterInu);
    
    /// @}
} //namespace EGXPhys

#include "QValue.inl"
