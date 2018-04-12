/// @file EGXPhys/Atomic/QValue.hpp
///
/// @brief Calculates Q-value of a nuclear reaction.
///
/// @author Elliot Grafil (Metex)
/// @date 8/18/17

/// @defgroup EGXPhys-QValue Q-Value
/// @ingroup EGXPhys-Atomic
/// Calculates the Q-value, \f$Q\f$, of a nuclear reaction.

/// @defgroup EGXPhys-QValue-Alpha Alpha
/// @ingroup EGXPhys-QValue

/// @defgroup EGXPhys-QValue-BetaMinus Beta Minus
/// @ingroup EGXPhys-QValue

/// @defgroup EGXPhys-QValue-BetaPlus Beta Plus
/// @ingroup EGXPhys-QValue

/// @defgroup EGXPhys-QValue-ElectronCapture Electron Capture
/// @ingroup EGXPhys-QValue

/// @defgroup EGXPhys-QValue-Neutron Neutron
/// @ingroup EGXPhys-QValue

/// @defgroup EGXPhys-QValue-Proton Proton
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
    *	@param projectileInu \f$m(x)\ (u)\f$ Mass of projectile. The mass of the projectile in unified atomic mass units.
	*	@param targetInu \f$m(X)\ (u)\f$ Mass of target. The mass of the target in unified atomic mass units.
    *	@param massProduct1Inu \f$m(y)\ (u)\f$ Mass of first product. The mass of the first product in unified atomic mass units.
	*	@param massProduct2Inu \f$m(Y)\ (u)\f$ Mass of second product. The mass of the second product in unified atomic mass units.
    *	@return \f$Q\ (MeV)\f$ Q-value. The energy in megaelectron volts produced by a nuclear reaction.
    *	@see MassDefect() to calculate the mass defect of an atom.   
    *	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInMeV() to calculate Q-Value for an alpha decay reaction in mega electron volts.
	*	@see QValueBetaMinusDecayInMeV() to calculate Q-Value for a beta-minus decay reaction in mega electron volts.
	*	@see QValueBetaPlusDecayInMeV() to calculate Q-Value for a beta-plus reaction decay in mega electron volts.
	*	@see QValueElectronCaptureInMeV() to calculate Q-Value for a electron capture reaction in mega electron volts.
	*	@see QValueNeutronEmissionInMeV() to calculate Q-Value for an neutron decay reaction in mega electron volts.
	*	@see QValueProtonEmissionInMeV() to calculate Q-Value for a proton decay reaction in mega electron volts.
    */
    template<typename T>
    T QValueInMeV(const T projectileInu, const T targetInu, const T massProduct1Inu, const T massProduct2Inu);
    
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
	*	@param projectileInu \f$m(x)\ (u)\f$ Mass of projectile. The mass of the projectile in unified atomic mass units.
	*	@param targetInu \f$m(X)\ (u)\f$ Mass of target. The mass of the target in unified atomic mass units.
	*	@param massProduct1Inu \f$m(y)\ (u)\f$ Mass of first product. The mass of the first product in unified atomic mass units.
	*	@param massProduct2Inu \f$m(Y)\ (u)\f$ Mass of second product. The mass of the second product in unified atomic mass units.
	*	@return \f$Q\ (J)\f$ Q-value. The energy in joules produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInJ() to calculate Q-Value for an alpha decay reaction in joules.
	*	@see QValueBetaMinusDecayInJ() to calculate Q-Value for a beta-minus decay reaction in joules.
	*	@see QValueBetaPlusDecayInJ() to calculate Q-Value for a beta-plus reaction decay in joules.
	*	@see QValueElectronCaptureInJ() to calculate Q-Value for a electron capture reaction in joules.
	*	@see QValueNeutronEmissionInJ() to calculate Q-Value for an neutron decay reaction in joules.
	*	@see QValueProtonEmissionInJ() to calculate Q-Value for a proton decay reaction in joules.
	*/
    template<typename T>
    T QValueInJ(const T projectileInu, const T targetInu, const T massProduct1Inu, const T massProduct2Inu);
    
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
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A-4}_{Z-2}X_{N-2} })\f$, as well as the mass of the alpha particle \f$m(\alpha)\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A-4}_{Z-2}X_{N-2} })-m(\alpha) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A-4}_{Z-2}X_{N-2} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (MeV)\f$ Q-value. The energy in megaelectron volts produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInMeV() to calculate Q-Value for an alpha decay reaction in mega electron volts.
	*	@see QValueBetaMinusDecayInMeV() to calculate Q-Value for a beta-minus decay reaction in mega electron volts.
	*	@see QValueBetaPlusDecayInMeV() to calculate Q-Value for a beta-plus reaction decay in mega electron volts.
	*	@see QValueElectronCaptureInMeV() to calculate Q-Value for a electron capture reaction in mega electron volts.
	*	@see QValueNeutronEmissionInMeV() to calculate Q-Value for an neutron decay reaction in mega electron volts.
	*	@see QValueProtonEmissionInMeV() to calculate Q-Value for a proton decay reaction in mega electron volts.
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
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A-4}_{Z-2}X_{N-2} })\f$, as well as the mass of the alpha particle \f$m(\alpha)\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A-4}_{Z-2}X_{N-2} })-m(\alpha) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A-4}_{Z-2}X_{N-2} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (J)\f$ Q-value. The energy in joules produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInJ() to calculate Q-Value for an alpha decay reaction in joules.
	*	@see QValueBetaMinusDecayInJ() to calculate Q-Value for a beta-minus decay reaction in joules.
	*	@see QValueBetaPlusDecayInJ() to calculate Q-Value for a beta-plus reaction decay in joules.
	*	@see QValueElectronCaptureInJ() to calculate Q-Value for a electron capture reaction in joules.
	*	@see QValueNeutronEmissionInJ() to calculate Q-Value for an neutron decay reaction in joules.
	*	@see QValueProtonEmissionInJ() to calculate Q-Value for a proton decay reaction in joules.
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
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A-4}_{Z-2}X_{N-2} })\f$, as well as the mass of two alpha particle \f$m(\alpha)\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A-4}_{Z-2}X_{N-2} })-2m(\alpha) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A-4}_{Z-2}X_{N-2} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (MeV)\f$ Q-value. The energy in megaelectron volts produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInMeV() to calculate Q-Value for an alpha decay reaction in mega electron volts.
	*	@see QValueBetaMinusDecayInMeV() to calculate Q-Value for a beta-minus decay reaction in mega electron volts.
	*	@see QValueBetaPlusDecayInMeV() to calculate Q-Value for a beta-plus reaction decay in mega electron volts.
	*	@see QValueElectronCaptureInMeV() to calculate Q-Value for a electron capture reaction in mega electron volts.
	*	@see QValueNeutronEmissionInMeV() to calculate Q-Value for an neutron decay reaction in mega electron volts.
	*	@see QValueProtonEmissionInMeV() to calculate Q-Value for a proton decay reaction in mega electron volts.
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
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A-4}_{Z-2}X_{N-2} })\f$, as well as the mass of two alpha particle \f$m(\alpha)\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A-4}_{Z-2}X_{N-2} })-2m(\alpha) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A-4}_{Z-2}X_{N-2} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (J)\f$ Q-value. The energy in joules produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInJ() to calculate Q-Value for an alpha decay reaction in joules.
	*	@see QValueBetaMinusDecayInJ() to calculate Q-Value for a beta-minus decay reaction in joules.
	*	@see QValueBetaPlusDecayInJ() to calculate Q-Value for a beta-plus reaction decay in joules.
	*	@see QValueElectronCaptureInJ() to calculate Q-Value for a electron capture reaction in joules.
	*	@see QValueNeutronEmissionInJ() to calculate Q-Value for an neutron decay reaction in joules.
	*	@see QValueProtonEmissionInJ() to calculate Q-Value for a proton decay reaction in joules.
	*/
    template<typename T>
    T QValueDoubleAlphaDecayInJ(const T massParentInu, const T massDaughterInu);
    
	/// @}
    // -------------- Beta Minus----------------------
	/// @addtogroup EGXPhys-QValue-BetaMinus
	/// @{

	/**
	*	@brief Calculates the Q-value, \f$Q\f$ of an beta minus decay nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
	*
	*	The Q-value, \f$Q\f$, is the energy released during a nuclear reaction. The Q-value can be positive, negative or zero.
	*	For \f$Q < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy.
	*
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A-4}_{Z-2}X_{N-2} })\f$, as well as the mass of the alpha particle \f$m(\alpha)\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A-4}_{Z-2}X_{N-2} })-m(\alpha) \right) c^2\f]
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A-4}_{Z-2}X_{N-2} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@return \f$Q\ (MeV)\f$ Q-value. The energy in megaelectron volts produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInMeV() to calculate Q-Value for an alpha decay reaction in mega electron volts.
	*	@see QValueBetaMinusDecayInMeV() to calculate Q-Value for a beta-minus decay reaction in mega electron volts.
	*	@see QValueBetaPlusDecayInMeV() to calculate Q-Value for a beta-plus reaction decay in mega electron volts.
	*	@see QValueElectronCaptureInMeV() to calculate Q-Value for a electron capture reaction in mega electron volts.
	*	@see QValueNeutronEmissionInMeV() to calculate Q-Value for an neutron decay reaction in mega electron volts.
	*	@see QValueProtonEmissionInMeV() to calculate Q-Value for a proton decay reaction in mega electron volts.
	*/
   	template<typename T>
    T QValueBetaMinusDecayInMeV(const T massParentInu, const T massDaughterInu);
	
	template<typename T>
    T QValueBetaMinusDecayInJ(const T massParentInu, const T massDaughterInu);	
    
    template<typename T>
    T QValueDoubleBetaMinusDecayInMeV(const T massParentInu, const T massDaughterInu);
    
    template<typename T>
    T QValueDoubleBetaMinusDecayInJ(const T massParentInu, const T massDaughterInu);
    
	/// @}
    // -------------- Beta Plus ----------------------
	/// @addtogroup EGXPhys-QValue-BetaPlus
	/// @{

    template<typename T>
    T QValueBetaPlusDecayInMeV(const T massParentInu, const T massDaughterInu);
    
	template<typename T>
    T QValueBetaPlusDecayInJ(const T massParentInu, const T massDaughterInu);
    
    template<typename T>
    T QValueDoubleBetaPlusDecayInMeV(const T massParentInu, const T massDaughterInu);
    
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
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A}_{Z-1}X_{N +1} })\f$, as well as the binding energy of the n-shell captured electron \f$B_n\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A}_{Z-1}X_{N +1} })-B_n \right) c^2\f]
	*
	*	Depending on the database/calculation style the binding energy of the n-shelled captured electron is not included in the calculation. For example nndc.bnl.gov exlcudes it while Krane includes it.
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Electron_capture
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A}_{Z-1}X_{N +1} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@param neutronBindingEnergyInMeV \f$B_n\ (MeV)\f$ Binding energy of the n-shell captured electron in mega electron volts.
	*	@return \f$Q\ (MeV)\f$ Q-value. The energy in megaelectron volts produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInMeV() to calculate Q-Value for an alpha decay reaction in mega electron volts.
	*	@see QValueBetaMinusDecayInMeV() to calculate Q-Value for a beta-minus decay reaction in mega electron volts.
	*	@see QValueBetaPlusDecayInMeV() to calculate Q-Value for a beta-plus reaction decay in mega electron volts.
	*	@see QValueElectronCaptureInMeV() to calculate Q-Value for a electron capture reaction in mega electron volts.
	*	@see QValueNeutronEmissionInMeV() to calculate Q-Value for an neutron decay reaction in mega electron volts.
	*	@see QValueProtonEmissionInMeV() to calculate Q-Value for a proton decay reaction in mega electron volts.
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
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A}_{Z-1}X_{N +1} })\f$, as well as the binding energy of the n-shell captured electron \f$B_n\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A}_{Z-1}X_{N +1} })-B_n \right) c^2\f]
	*
	*	Depending on the database/calculation style the binding energy of the n-shelled captured electron is not included in the calculation. For example nndc.bnl.gov exlcudes it while Krane includes it.
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Electron_capture
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A}_{Z-1}X_{N +1} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@param neutronBindingEnergyInJ \f$B_n\ (J)\f$ Binding energy of the n-shell captured electron in joules.
	*	@return \f$Q\ (J)\f$ Q-value. The energy in joules produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInJ() to calculate Q-Value for an alpha decay reaction in joules.
	*	@see QValueBetaMinusDecayInJ() to calculate Q-Value for a beta-minus decay reaction in joules.
	*	@see QValueBetaPlusDecayInJ() to calculate Q-Value for a beta-plus reaction decay in joules.
	*	@see QValueElectronCaptureInJ() to calculate Q-Value for a electron capture reaction in joules.
	*	@see QValueNeutronEmissionInJ() to calculate Q-Value for an neutron decay reaction in joules.
	*	@see QValueProtonEmissionInJ() to calculate Q-Value for a proton decay reaction in joules.
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
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A}_{Z-1}X_{N +1} })\f$, as well as the binding energy of the two n-shell captured electron \f$B_{2n}\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A}_{Z-1}X_{N +1} })-B_{2n} \right) c^2\f]
	*
	*	Depending on the database/calculation style the binding energy of the two n-shelled captured electron is not included in the calculation. For example nndc.bnl.gov exlcudes it while Krane includes it.
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Electron_capture
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A}_{Z-1}X_{N +1} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@param neutronBindingEnergyInMeV \f$B_{2n}\ (MeV)\f$ Binding energy of the two n-shell captured electron in mega electron volts.
	*	@return \f$Q\ (MeV)\f$ Q-value. The energy in megaelectron volts produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInMeV() to calculate Q-Value for an alpha decay reaction in mega electron volts.
	*	@see QValueBetaMinusDecayInMeV() to calculate Q-Value for a beta-minus decay reaction in mega electron volts.
	*	@see QValueBetaPlusDecayInMeV() to calculate Q-Value for a beta-plus reaction decay in mega electron volts.
	*	@see QValueElectronCaptureInMeV() to calculate Q-Value for a electron capture reaction in mega electron volts.
	*	@see QValueNeutronEmissionInMeV() to calculate Q-Value for an neutron decay reaction in mega electron volts.
	*	@see QValueProtonEmissionInMeV() to calculate Q-Value for a proton decay reaction in mega electron volts.
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
	*	To calculate the Q-value it is the initial mass of the parent atom, \f$m(\ce{ ^{A}_{Z}X_{N} })\f$, minus the final mass of the daughter atom, \f$m(\ce{ ^{A}_{Z-1}X_{N +1} })\f$, as well as the binding energy of the n-shell captured electron \f$B_{2n}\f$:
	*	\f[Q = \left ( m(\ce{ ^{A}_{Z}X_{N} })-m(\ce{ ^{A}_{Z-1}X_{N +1} })-B_{2n} \right) c^2\f]
	*
	*	Depending on the database/calculation style the binding energy of the n-shelled captured electron is not included in the calculation. For example nndc.bnl.gov exlcudes it while Krane includes it.
	*
	*	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/ and https://en.wikipedia.org/wiki/Electron_capture
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
	*
	*	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parrent nucleus in unified atomic mass units.
	*	@param massDaughterInu \f$m(\ce{ ^{A}_{Z-1}X_{N +1} })\ (u)\f$ Mass of daughter nucleus in unified atomic mass units.
	*	@param neutronBindingEnergyInJ \f$B_{2n}\ (J)\f$ Binding energy of the two n-shell captured electron in joules.
	*	@return \f$Q\ (J)\f$ Q-value. The energy in joules produced by a nuclear reaction.
	*	@see MassDefect() to calculate the mass defect of an atom.
	*	@see NuclearBindingEnergy() to calculate binding energy,\f$BE\f$, of an atom.
	*	@see QValueAlphaDecayInJ() to calculate Q-Value for an alpha decay reaction in joules.
	*	@see QValueBetaMinusDecayInJ() to calculate Q-Value for a beta-minus decay reaction in joules.
	*	@see QValueBetaPlusDecayInJ() to calculate Q-Value for a beta-plus reaction decay in joules.
	*	@see QValueElectronCaptureInJ() to calculate Q-Value for a electron capture reaction in joules.
	*	@see QValueNeutronEmissionInJ() to calculate Q-Value for an neutron decay reaction in joules.
	*	@see QValueProtonEmissionInJ() to calculate Q-Value for a proton decay reaction in joules.
	*/
    template<typename T>
    T QValueDoubleElectronCaptureInJ(const T massParentInu, const T massDaughterInu, const T neutronBindingEnergyInJ = (T)(0.0));
    
	/// @}
    // -------------- Neutron ----------------------
	/// @addtogroup EGXPhys-QValue-Neutron
	/// @{

    template<typename T>
    T QValueNeutronEmissionInMeV(const T massParentInu, const T massDaughterInu);
    
	template<typename T>
    T QValueNeutronEmissionInJ(const T massParentInu, const T massDaughterInu);
    
    template<typename T>
    T QValueDoubleNeutronEmissionInMeV(const T massParentInu, const T massDaughterInu);
    
    template<typename T>
    T QValueDoubleNeutronEmissionInJ(const T massParentInu, const T massDaughterInu);
    
	/// @}
    // -------------- Proton ----------------------
	/// @addtogroup EGXPhys-QValue-Proton
	/// @{

    template<typename T>
    T QValueProtonEmissionInMeV(const T massParentInu, const T massDaughterInu);
    
	template<typename T>
    T QValueProtonEmissionInJ(const T massParentInu, const T massDaughterInu);
    
    template<typename T>
    T QValueDoubleProtonEmissionInMeV(const T massParentInu, const T massDaughterInu);
    
    template<typename T>
    T QValueDoubleProtonEmissionInJ(const T massParentInu, const T massDaughterInu);
    
    /// @}
} //namespace EGXPhys

#include "QValue.inl"
