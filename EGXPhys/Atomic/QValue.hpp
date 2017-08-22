/// @file EGXPhys/Atomic/QValue.hpp
///
/// @brief Calculates Q-value of a nuclear reaction.
///
/// Equation Count: 26 \n
/// Equations: Complete \n
/// Documentation: Complete \n
/// Unit-Test: Complete \n
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
    
    /**
    *	@brief Calculates the beta minus decay Q-value, \f$Q_{\beta-}\f$, of a beta minus decay nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The beta minus decay Q-value, \f$Q_{\beta-}\f$, is the energy released during a nuclear reaction undergoing beta minus decay. The Q-value can be positive, negative or zero.
	*	For \f$Q_{\beta-} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{\beta-} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the beta minus decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{\beta-} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ emitting an electron, \f$e\f$, throught beta decay and thereby producing an atom \f$\ce{ ^{A}_{Z{+1}}X^{+1}_{N-1} }\f$ the equation becomes:
    *
    *	\f[Q_{\beta-} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - (m(\ce{ ^{A}_{Z{+1}}X_{N-1} }) - m(e)) - m(e)\right ) c^2\f]
    *	\f[Q_{\beta-} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - m(\ce{ ^{A}_{Z{+1}}X_{N-1} })\right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before it has undergone beta minus decay in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A}_{Z{+1}}X_{N-1} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once it has undergone beta minus decay and charge has been added to make the atom neutral in unified atomic mass units.
    *	@return \f$Q_{\beta-}\ (MeV)\f$ Beta minus decay Q-value. The energy in megaelectron volts released during the nuclear reaction where beta minus decay has occured.
    */
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
    
    /**
    *	@brief Calculates the neutron decay Q-value, \f$Q_{1n}\f$, of a neutron decay nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The neutron decay Q-value, \f$Q_{1n}\f$, is the energy released during a nuclear reaction undergoing neutron emission. The Q-value can be positive, negative or zero.
	*	For \f$Q_{1n} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{1n} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the neutron decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{1n} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ emitting a neutron, \f$n\f$, and thereby producing an atom \f$\ce{ ^{A-1}_{Z}X_{N-1} }\f$ the equation becomes:
    *
    *	\f[Q_{1n} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - m(\ce{ ^{A-1}_{Z}X_{N-1} }) - m(n) \right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before a neutron is removed in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A-1}_{Z}X_{N-1} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once a neutron is removed in unified atomic mass units.
    *	@return \f$Q_{1n}\ (MeV)\f$ Neutron decay Q-value. The energy in megaelectron volts released during the nuclear reaction where neutron decay has occured.
    *	@see QValueNeutronDecayInJ() to calculate the neutron separation energy in joules.
	*	@see QValueDoubleNeutronDecayInMeV() to calculate the two neutrons separation energy.
    */
    template<typename T>
    T QValueNeutronDecayInMeV(const T& massParentInu, const T& massDaughterInu);
    
    /**
    *	@brief Calculates the neutron decay Q-value, \f$Q_{1n}\f$, of a neutron decay nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The neutron decay Q-value, \f$Q_{1n}\f$, is the energy released during a nuclear reaction undergoing neutron emission. The Q-value can be positive, negative or zero.
	*	For \f$Q_{1n} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{1n} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the neutron decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{1n} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ emitting a neutron, \f$n\f$, and thereby producing an atom \f$\ce{ ^{A-1}_{Z}X_{N-1} }\f$ the equation becomes:
    *
    *	\f[Q_{1n} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - m(\ce{ ^{A-1}_{Z}X_{N-1} }) - m(n) \right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before a neutron is removed in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A-1}_{Z}X_{N-1} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once a neutron is removed in unified atomic mass units.
    *	@return \f$Q_{1n}\ (J)\f$ Neutron decay Q-value. The energy in joules released during the nuclear reaction where neutron decay has occured.
    */
	template<typename T>
    T QValueNeutronDecayInJ(const T& massParentInu, const T& massDaughterInu);
    
    /**
    *	@brief Calculates the double neutron decay Q-value, \f$Q_{2n}\f$, of a double neutron decay nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The double neutron decay Q-value, \f$Q_{2n}\f$, is the energy released during a nuclear reaction undergoing two neutron emissions. The Q-value can be positive, negative or zero.
	*	For \f$Q_{2n}  < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{2n}  > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the double neutron decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{2n} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ emitting two neutrons, \f$n\f$, and thereby producing an atom \f$\ce{ ^{A-2}_{Z}X_{N-2} }\f$ the equation becomes:
    *
    *	\f[Q_{2n} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - m(\ce{ ^{A-2}_{Z}X_{N-2} }) - 2m(n) \right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before two neutrons are removed in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A-2}_{Z}X_{N-2} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once two neutrons are removed in unified atomic mass units.
    *	@return \f$Q_{2n}\ (MeV)\f$ Double neutron decay Q-value. The energy in megaelectron volts released during the nuclear reaction where two neutron decays has occured.
    */
    template<typename T>
    T QValueDoubleNeutronDecayInMeV(const T& massParentInu, const T& massDaughterInu);
    
    /**
    *	@brief Calculates the double neutron decay Q-value, \f$Q_{2n}\f$, of a double neutron decay nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The double neutron decay Q-value, \f$Q_{2n}\f$, is the energy released during a nuclear reaction undergoing two neutron emissions. The Q-value can be positive, negative or zero.
	*	For \f$Q_{2n}  < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{2n}  > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the double neutron decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{2n} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ emitting two neutrons, \f$n\f$, and thereby producing an atom \f$\ce{ ^{A-2}_{Z}X_{N-2} }\f$ the equation becomes:
    *
    *	\f[Q_{2n} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - m(\ce{ ^{A-2}_{Z}X_{N-2} }) - 2m(n) \right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before two neutrons are removed in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A-2}_{Z}X_{N-2} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once two neutrons are removed in unified atomic mass units.
    *	@return \f$Q_{2n}\ (J)\f$ Double neutron decay Q-value. The energy in joules released during the nuclear reaction where two neutron decays has occured.
    */
    template<typename T>
    T QValueDoubleNeutronDecayInJ(const T& massParentInu, const T& massDaughterInu);
    
    // -------------- Proton ----------------------
    
    /**
    *	@brief Calculates the proton decay Q-value, \f$Q_{1p}\f$, of a proton decay nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The proton decay Q-value, \f$Q_{1p}\f$, is the energy released during a nuclear reaction undergoing proton emission. The Q-value can be positive, negative or zero.
	*	For \f$Q_{1p} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{1p} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the proton decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{1p} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ emitting a proton, \f$p\f$, and thereby producing an atom \f$\ce{ ^{A-1}_{Z-1}X^{-1}_{N} }\f$ the equation becomes:
    *
    *	\f[Q_{1n} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - m(\ce{ ^{A-1}_{Z-1}X_{N} }) - m(p) - m(e)\right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before a proton is removed in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A-1}_{Z-1}X_{N} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once both a proton and excess charge has been removed in unified atomic mass units.
    *	@return \f$Q_{1p}\ (MeV)\f$ Proton decay Q-value. The energy in megaelectron volts released during the nuclear reaction where proton decay has occured.
    */
    template<typename T>
    T QValueProtonDecayInMeV(const T& massParentInu, const T& massDaughterInu);
    
    /**
    *	@brief Calculates the proton decay Q-value, \f$Q_{1p}\f$, of a proton decay nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The proton decay Q-value, \f$Q_{1p}\f$, is the energy released during a nuclear reaction undergoing proton emission. The Q-value can be positive, negative or zero.
	*	For \f$Q_{1p} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{1p} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the proton decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{1p} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ emitting a proton, \f$p\f$, and thereby producing an atom \f$\ce{ ^{A-1}_{Z-1}X^{-1}_{N} }\f$ the equation becomes:
    *
    *	\f[Q_{1n} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - m(\ce{ ^{A-1}_{Z-1}X_{N} }) - m(p) - m(e)\right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before a proton is removed in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A-1}_{Z-1}X_{N} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once both a proton and excess charge has been removed in unified atomic mass units.
    *	@return \f$Q_{1p}\ (J)\f$ Proton decay Q-value. The energy in joules released during the nuclear reaction where proton decay has occured.
    */
	template<typename T>
    T QValueProtonDecayInJ(const T& massParentInu, const T& massDaughterInu);
    
    /**
    *	@brief Calculates the double proton decay Q-value, \f$Q_{2p}\f$, of a double proton decay nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The double proton decay Q-value, \f$Q_{2p}\f$, is the energy released during a nuclear reaction undergoing two proton emissions. The Q-value can be positive, negative or zero.
	*	For \f$Q_{2p} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{2p} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the proton decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{2p} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ emitting two protons, \f$p\f$, and thereby producing an atom \f$\ce{ ^{A-2}_{Z-2}X^{-2}_{N} }\f$ the equation becomes:
    *
    *	\f[Q_{2n} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - m(\ce{ ^{A-2}_{Z-2}X_{N} }) - 2m(p) - 2m(e)\right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before two protons are removed in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A-2}_{Z-2}X_{N} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once both two protons and excess charge has been removed in unified atomic mass units.
    *	@return \f$Q_{2p}\ (MeV)\f$ Double proton decay Q-value. The energy in megaelectron volts released during the nuclear reaction where double proton decay has occured.
    */
    template<typename T>
    T QValueDoubleProtonDecayInMeV(const T& massParentInu, const T& massDaughterInu);
    
    /**
    *	@brief Calculates the double proton decay Q-value, \f$Q_{2p}\f$, of a double proton decay nuclear reaction in jouless. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The double proton decay Q-value, \f$Q_{2p}\f$, is the energy released during a nuclear reaction undergoing two proton emissions. The Q-value can be positive, negative or zero.
	*	For \f$Q_{2p} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{2p} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the proton decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{2p} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ emitting two protons, \f$p\f$, and thereby producing an atom \f$\ce{ ^{A-2}_{Z-2}X^{-2}_{N} }\f$ the equation becomes:
    *
    *	\f[Q_{2n} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - m(\ce{ ^{A-2}_{Z-2}X_{N} }) - 2m(p) - 2m(e)\right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before two protons are removed in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A-2}_{Z-2}X_{N} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once both two protons and excess charge has been removed in unified atomic mass units.
    *	@return \f$Q_{2p}\ (J)\f$ Double proton decay Q-value. The energy in joules released during the nuclear reaction where double proton decay has occured.
    */
    template<typename T>
    T QValueDoubleProtonDecayInJ(const T& massParentInu, const T& massDaughterInu);
    
    /// @}
} //namespace EGXPhys

#include "QValue.inl"
