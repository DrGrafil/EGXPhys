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
/// @todo Decide if we are ok with variadic templates C++11 or do we want to keep it to 98

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
    *	For a projectile \f$x\f$ colliding with a target \f$X\f$ and thereby producing \f$Y1\f$ and \f$Y2...\f$ the equation becomes:
    *
    *	\f[Q = \left ( m(x) + m(X) - m(Y1) - m(Y2) - ... \right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massTargetInu \f$m(X)\ (u)\f$ Mass of target. The mass of the target atom before being hit by projectile in unified atomic mass units.
    *	@param massProjectileInu \f$m(x)\ (u)\f$ Mass of projectile. The mass of the projectile in unified atomic mass units.
    *	@param massProductInu \f$m(Y)\ (u)\f$ Mass of product. The mass of a product from the collision of the target into the projectile in unified atomic mass units.
    *	@return \f$Q\ (MeV)\f$  Q-value. The energy in megaelectron volts released during the nuclear reaction.
    */
    template<typename T, typename... TArgs>
    T QValueInMeV(const T& massTargetInu, const T& massProjectileInu, const TArgs&... massProductInu);
    
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
    *	For a projectile \f$x\f$ colliding with a target \f$X\f$ and thereby producing \f$Y1\f$ and \f$Y2...\f$ the equation becomes:
    *
    *	\f[Q = \left ( m(x) + m(X) - m(Y1) - m(Y2) - ... \right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massTargetInu \f$m(X)\ (u)\f$ Mass of target. The mass of the target atom before being hit by projectile in unified atomic mass units.
    *	@param massProjectileInu \f$m(x)\ (u)\f$ Mass of projectile. The mass of the projectile in unified atomic mass units.
    *	@param massProductInu \f$m(Y)\ (u)\f$ Mass of product. The mass of a product from the collision of the target into the projectile in unified atomic mass units.
    *	@return \f$Q\ (J)\f$  Q-value. The energy in joules released during the nuclear reaction.
    */
    template<typename T, typename... TArgs>
    T QValueInJ(const T& massTargetInu, const T& massProjectileInu, const TArgs&... massProductInu);
    
    // -------------- Alpha ----------------------
    
    /**
    *	@brief Calculates the alpha decay Q-value, \f$Q_{\alpha}\f$, of an alpha decay nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The alpha decay Q-value, \f$Q_{\alpha}\f$, is the energy released during a nuclear reaction undergoing alpha decay. The Q-value can be positive, negative or zero.
	*	For \f$Q_{\alpha} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{\alpha} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the alpha decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{\alpha} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ emitting an alpha particle, \f$\alpha\ (\ce{ ^{4}_{2}He^{+2}_{2} })\f$, through alpha decay and thereby producing an atom \f$\ce{ ^{A-4}_{Z{-2}}X^{-2}_{N-2} }\f$ the equation becomes:
    *
    *	\f[Q_{\alpha} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - (m(\ce{ ^{A-4}_{Z{-2}}X_{N-2} }) + 2m(e^-)) - m(\alpha)\right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before it has undergone alpha decay in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A-4}_{Z{-2}}X_{N-2} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once it has undergone alpha decay and charge has been added to make the atom neutral in unified atomic mass units.
    *	@return \f$Q_{\alpha}\ (MeV)\f$ Alpha decay Q-value. The energy in megaelectron volts released during the nuclear reaction where alpha decay has occured.
    */
    template<typename T>
    T QValueAlphaDecayInMeV(const T& massParentInu, const T& massDaughterInu);
	
	/**
    *	@brief Calculates the alpha decay Q-value, \f$Q_{\alpha}\f$, of an alpha decay nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The alpha decay Q-value, \f$Q_{\alpha}\f$, is the energy released during a nuclear reaction undergoing alpha decay. The Q-value can be positive, negative or zero.
	*	For \f$Q_{\alpha} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{\alpha} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the alpha decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{\alpha} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ emitting an alpha particle, \f$\alpha\ (\ce{ ^{4}_{2}He^{+2}_{2} })\f$, through alpha decay and thereby producing an atom \f$\ce{ ^{A-4}_{Z{-2}}X^{-2}_{N-2} }\f$ the equation becomes:
    *
    *	\f[Q_{\alpha} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - (m(\ce{ ^{A-4}_{Z{-2}}X_{N-2} }) + 2m(e^-)) - m(\alpha)\right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before it has undergone alpha decay in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A-4}_{Z{-2}}X_{N-2} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once it has undergone alpha decay and charge has been added to make the atom neutral in unified atomic mass units.
    *	@return \f$Q_{\alpha}\ (J)\f$ Alpha decay Q-value. The energy in joules released during the nuclear reaction where alpha decay has occured.
    */
	template<typename T>
    T QValueAlphaDecayInJ(const T& massParentInu, const T& massDaughterInu);	
    
    /**
    *	@brief Calculates the double alpha decay Q-value, \f$Q_{2\alpha}\f$, of a double alpha decay nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The double alpha decay Q-value, \f$Q_{2\alpha}\f$, is the energy released during a nuclear reaction undergoing double alpha decay. The Q-value can be positive, negative or zero.
	*	For \f$Q_{2\alpha} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{2\alpha} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the double alpha decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{2\alpha} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ emitting two alpha particles, \f$\alpha\ (\ce{ ^{4}_{2}He^{+2}_{2} })\f$, through double alpha decay and thereby producing an atom \f$\ce{ ^{A-8}_{Z{-4}}X^{-4}_{N-4} }\f$ the equation becomes:
    *
    *	\f[Q_{2\alpha} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - (m(\ce{ ^{A-8}_{Z{-4}}X_{N-4} }) + 4m(e^-)) - 2m(\alpha)\right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before it has undergone double alpha decay in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A-8}_{Z{-4}}X_{N-4} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once it has undergone double alpha decay and charge has been added to make the atom neutral in unified atomic mass units.
    *	@return \f$Q_{2\alpha}\ (MeV)\f$ Double Alpha decay Q-value. The energy in megaelectron volts released during the nuclear reaction where double alpha decay has occured.
    */
    template<typename T>
    T QValueDoubleAlphaDecayInMeV(const T& massParentInu, const T& massDaughterInu);
    
    /**
    *	@brief Calculates the double alpha decay Q-value, \f$Q_{2\alpha}\f$, of a double alpha decay nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The double alpha decay Q-value, \f$Q_{2\alpha}\f$, is the energy released during a nuclear reaction undergoing double alpha decay. The Q-value can be positive, negative or zero.
	*	For \f$Q_{2\alpha} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{2\alpha} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the double alpha decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{2\alpha} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ emitting two alpha particles, \f$\alpha\ (\ce{ ^{4}_{2}He^{+2}_{2} })\f$, through double alpha decay and thereby producing an atom \f$\ce{ ^{A-8}_{Z{-4}}X^{-4}_{N-4} }\f$ the equation becomes:
    *
    *	\f[Q_{2\alpha} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - (m(\ce{ ^{A-8}_{Z{-4}}X_{N-4} }) + 4m(e^-)) - 2m(\alpha)\right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before it has undergone double alpha decay in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A-8}_{Z{-4}}X_{N-4} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once it has undergone double alpha decay and charge has been added to make the atom neutral in unified atomic mass units.
    *	@return \f$Q_{2\alpha}\ (J)\f$ Double Alpha decay Q-value. The energy in joules released during the nuclear reaction where double alpha decay has occured.
    */
    template<typename T>
    T QValueDoubleAlphaDecayInJ(const T& massParentInu, const T& massDaughterInu);
    
    // -------------- Beta Minus----------------------
    
    /**
    *	@brief Calculates the beta minus decay Q-value, \f$Q_{\beta^-}\f$, of a beta minus decay nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The beta minus decay Q-value, \f$Q_{\beta^-}\f$, is the energy released during a nuclear reaction undergoing beta minus decay. The Q-value can be positive, negative or zero.
	*	For \f$Q_{\beta^-} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{\beta^-} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the beta minus decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{\beta^-} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ emitting an electron, \f$e^-\f$, through beta minus decay and thereby producing an atom \f$\ce{ ^{A}_{Z{+1}}X^{+1}_{N-1} }\f$ the equation becomes:
    *
    *	\f[Q_{\beta^-} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - (m(\ce{ ^{A}_{Z{+1}}X_{N-1} }) - m(e^-)) - m(e^-)\right ) c^2\f]
    *	\f[Q_{\beta^-} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - m(\ce{ ^{A}_{Z{+1}}X_{N-1} })\right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before it has undergone beta minus decay in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A}_{Z{+1}}X_{N-1} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once it has undergone beta minus decay and charge has been added to make the atom neutral in unified atomic mass units.
    *	@return \f$Q_{\beta^-}\ (MeV)\f$ Beta minus decay Q-value. The energy in megaelectron volts released during the nuclear reaction where beta minus decay has occured.
    */
   	template<typename T>
    T QValueBetaMinusDecayInMeV(const T& massParentInu, const T& massDaughterInu);
	
	/**
    *	@brief Calculates the beta minus decay Q-value, \f$Q_{\beta^-}\f$, of a beta minus decay nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The beta minus decay Q-value, \f$Q_{\beta^-}\f$, is the energy released during a nuclear reaction undergoing beta minus decay. The Q-value can be positive, negative or zero.
	*	For \f$Q_{\beta^-} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{\beta^-} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the beta minus decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{\beta^-} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ emitting an electron, \f$e^-\f$, through beta minus decay and thereby producing an atom \f$\ce{ ^{A}_{Z{+1}}X^{+1}_{N-1} }\f$ the equation becomes:
    *
    *	\f[Q_{\beta^-} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - (m(\ce{ ^{A}_{Z{+1}}X_{N-1} }) - m(e^-)) - m(e^-)\right ) c^2\f]
    *	\f[Q_{\beta^-} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - m(\ce{ ^{A}_{Z{+1}}X_{N-1} })\right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before it has undergone beta minus decay in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A}_{Z{+1}}X_{N-1} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once it has undergone beta minus decay and charge has been added to make the atom neutral in unified atomic mass units.
    *	@return \f$Q_{\beta^-}\ (J)\f$ Beta minus decay Q-value. The energy in joules released during the nuclear reaction where beta minus decay has occured.
    */
	template<typename T>
    T QValueBetaMinusDecayInJ(const T& massParentInu, const T& massDaughterInu);	
    
    /**
    *	@brief Calculates the double beta minus decay Q-value, \f$Q_{2\beta^-}\f$, of a double beta minus decay nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The double beta minus decay Q-value, \f$Q_{2\beta^-}\f$, is the energy released during a nuclear reaction undergoing double beta minus decay. The Q-value can be positive, negative or zero.
	*	For \f$Q_{2\beta^-} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{2\beta^-} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the double beta minus decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{2\beta^-} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ emitting two electrons, \f$e^-\f$, through double beta minus decay and thereby producing an atom \f$\ce{ ^{A}_{Z{+2}}X^{+2}_{N-2} }\f$ the equation becomes:
    *
    *	\f[Q_{2\beta^-} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - (m(\ce{ ^{A}_{Z{+2}}X_{N-2} }) - 2m(e^-)) - 2m(e^-)\right ) c^2\f]
    *	\f[Q_{2\beta^-} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - m(\ce{ ^{A}_{Z{+2}}X_{N-2} })\right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before it has undergone double beta minus decay in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A}_{Z{+2}}X_{N-2} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once it has undergone double beta minus decay and charge has been added to make the atom neutral in unified atomic mass units.
    *	@return \f$Q_{2\beta^-}\ (MeV)\f$ Double Beta minus decay Q-value. The energy in megaelectron volts released during the nuclear reaction where double beta minus decay has occured.
    */
    template<typename T>
    T QValueDoubleBetaMinusDecayInMeV(const T& massParentInu, const T& massDaughterInu);
    
    /**
    *	@brief Calculates the double beta minus decay Q-value, \f$Q_{2\beta^-}\f$, of a double beta minus decay nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The double beta minus decay Q-value, \f$Q_{2\beta^-}\f$, is the energy released during a nuclear reaction undergoing double beta minus decay. The Q-value can be positive, negative or zero.
	*	For \f$Q_{2\beta^-} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{2\beta^-} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the double beta minus decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{2\beta^-} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ emitting two electrons, \f$e^-\f$, through double beta minus decay and thereby producing an atom \f$\ce{ ^{A}_{Z{+2}}X^{+2}_{N-2} }\f$ the equation becomes:
    *
    *	\f[Q_{2\beta^-} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - (m(\ce{ ^{A}_{Z{+2}}X_{N-2} }) - 2m(e^-)) - 2m(e^-)\right ) c^2\f]
    *	\f[Q_{2\beta^-} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - m(\ce{ ^{A}_{Z{+2}}X_{N-2} })\right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before it has undergone double beta minus decay in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A}_{Z{+2}}X_{N-2} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once it has undergone double beta minus decay and charge has been added to make the atom neutral in unified atomic mass units.
    *	@return \f$Q_{2\beta^-}\ (J)\f$ Double Beta minus decay Q-value. The energy in joules released during the nuclear reaction where double beta minus decay has occured.
    */
    template<typename T>
    T QValueDoubleBetaMinusDecayInJ(const T& massParentInu, const T& massDaughterInu);
    
    // -------------- Beta Plus ----------------------
    
    /**
    *	@brief Calculates the beta plus decay Q-value, \f$Q_{\beta^+}\f$, of a beta plus decay nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The beta plus decay Q-value, \f$Q_{\beta^+}\f$, is the energy released during a nuclear reaction undergoing beta plus decay. The Q-value can be positive, negative or zero.
	*	For \f$Q_{\beta^+} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{\beta^+} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the beta plus decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{\beta^+} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ emitting a positron, \f$e^+\f$, through beta plus decay and thereby producing an atom \f$\ce{ ^{A}_{Z{-1}}X^{-1}_{N{+1}} }\f$ the equation becomes:
    *
    *	\f[Q_{\beta^+} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - (m(\ce{ ^{A}_{Z{-1}}X_{N{+1}} }) + m(e^+)) - m(e^+)\right ) c^2\f]
    *	\f[Q_{\beta^+} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - m(\ce{ ^{A}_{Z{-1}}X_{N{+1}} }) - 2m(e^+)\right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before it has undergone beta plus decay in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A}_{Z{-1}}X_{N{+1}} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once it has undergone beta plus decay and excess charge has been removed in unified atomic mass units.
    *	@return \f$Q_{\beta^+}\ (MeV)\f$ Beta plus decay Q-value. The energy in megaelectron volts released during the nuclear reaction where beta plus decay has occured.
    */
    template<typename T>
    T QValueBetaPlusDecayInMeV(const T& massParentInu, const T& massDaughterInu);
    
    /**
    *	@brief Calculates the beta plus decay Q-value, \f$Q_{\beta^+}\f$, of a beta plus decay nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The beta plus decay Q-value, \f$Q_{\beta^+}\f$, is the energy released during a nuclear reaction undergoing beta plus decay. The Q-value can be positive, negative or zero.
	*	For \f$Q_{\beta^+} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{\beta^+} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the beta plus decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{\beta^+} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ emitting a positron, \f$e^+\f$, through beta plus decay and thereby producing an atom \f$\ce{ ^{A}_{Z{-1}}X^{-1}_{N{+1}} }\f$ the equation becomes:
    *
    *	\f[Q_{\beta^+} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - (m(\ce{ ^{A}_{Z{-1}}X_{N{+1}} }) + m(e^+)) - m(e^+)\right ) c^2\f]
    *	\f[Q_{\beta^+} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - m(\ce{ ^{A}_{Z{-1}}X_{N{+1}} }) - 2m(e^+)\right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before it has undergone beta plus decay in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A}_{Z{-1}}X_{N{+1}} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once it has undergone beta plus decay and excess charge has been removed in unified atomic mass units.
    *	@return \f$Q_{\beta^+}\ (J)\f$ Beta plus decay Q-value. The energy in joules released during the nuclear reaction where beta plus decay has occured.
    */
	template<typename T>
    T QValueBetaPlusDecayInJ(const T& massParentInu, const T& massDaughterInu);
    
    /**
    *	@brief Calculates the double beta plus decay Q-value, \f$Q_{2\beta^+}\f$, of a double beta plus decay nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The double beta plus decay Q-value, \f$Q_{2\beta^+}\f$, is the energy released during a nuclear reaction undergoing double beta plus decay. The Q-value can be positive, negative or zero.
	*	For \f$Q_{2\beta^+} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{2\beta^+} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the beta plus decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{2\beta^+} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ emitting two positrons, \f$e^+\f$, through double beta plus decay and thereby producing an atom \f$\ce{ ^{A}_{Z{-2}}X^{-2}_{N{+2}} }\f$ the equation becomes:
    *
    *	\f[Q_{2\beta^+} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - (m(\ce{ ^{A}_{Z{-2}}X_{N{+2}} }) + 2m(e^+)) - 2m(e^+)\right ) c^2\f]
    *	\f[Q_{2\beta^+} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - m(\ce{ ^{A}_{Z{-2}}X_{N{+2}} }) - 4m(e^+)\right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before it has undergone double beta plus decay in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A}_{Z{-1}}X_{N{+1}} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once it has undergone double beta plus decay and excess charge has been removed in unified atomic mass units.
    *	@return \f$Q_{2\beta^+}\ (MeV)\f$ Double beta plus decay Q-value. The energy in megaelectron volts released during the nuclear reaction where double beta plus decay has occured.
    */
    template<typename T>
    T QValueDoubleBetaPlusDecayInMeV(const T& massParentInu, const T& massDaughterInu);
    
    /**
    *	@brief Calculates the double beta plus decay Q-value, \f$Q_{2\beta^+}\f$, of a double beta plus decay nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The double beta plus decay Q-value, \f$Q_{2\beta^+}\f$, is the energy released during a nuclear reaction undergoing double beta plus decay. The Q-value can be positive, negative or zero.
	*	For \f$Q_{2\beta^+} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{2\beta^+} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the beta plus decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{2\beta^+} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ emitting two positrons, \f$e^+\f$, through double beta plus decay and thereby producing an atom \f$\ce{ ^{A}_{Z{-2}}X^{-2}_{N{+2}} }\f$ the equation becomes:
    *
    *	\f[Q_{2\beta^+} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - (m(\ce{ ^{A}_{Z{-2}}X_{N{+2}} }) + 2m(e^+)) - 2m(e^+)\right ) c^2\f]
    *	\f[Q_{2\beta^+} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - m(\ce{ ^{A}_{Z{-2}}X_{N{+2}} }) - 4m(e^+)\right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before it has undergone double beta plus decay in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A}_{Z{-1}}X_{N{+1}} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once it has undergone double beta plus decay and excess charge has been removed in unified atomic mass units.
    *	@return \f$Q_{2\beta^+}\ (MeV)\f$ Double beta plus decay Q-value. The energy in joules released during the nuclear reaction where double beta plus decay has occured.
    */
    template<typename T>
    T QValueDoubleBetaPlusDecayInJ(const T& massParentInu, const T& massDaughterInu);
    
    // -------------- Electron Capture ----------------------
    
    /**
    *	@brief Calculates the electron capture decay Q-value, \f$Q_{EC}\f$, of an electron capture nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The electron capture decay Q-value, \f$Q_{EC}\f$, is the energy released during a nuclear reaction undergoing electron capture. The Q-value can be positive, negative or zero.
	*	For \f$Q_{EC} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{EC} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the electron capture decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{EC} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ capturing an electron, \f$e\f$, orbiting around the atom and thereby producing an atom \f$\ce{ ^{A}_{Z-1}X_{N{+1}} }\f$ the equation becomes:
    *
    *	\f[Q_{EC} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - m(\ce{ ^{A}_{Z-1}X_{N{+1}} }) \right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before electron capture has happened in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A}_{Z-1}X_{N{+1}} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once it has undergone electron capture in unified atomic mass units.
    *	@return \f$Q_{EC}\ (MeV)\f$ Electron capture decay Q-value. The energy in megaelectron volts released during the nuclear reaction where electron capture has occured.
    */
    template<typename T>
    T QValueElectronCaptureDecayInMeV(const T& massParentInu, const T& massDaughterInu);
    
    /**
    *	@brief Calculates the electron capture decay Q-value, \f$Q_{EC}\f$, of an electron capture nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The electron capture decay Q-value, \f$Q_{EC}\f$, is the energy released during a nuclear reaction undergoing electron capture. The Q-value can be positive, negative or zero.
	*	For \f$Q_{EC} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{EC} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the electron capture decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{EC} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ capturing an electron, \f$e\f$, orbiting around the atom and thereby producing an atom \f$\ce{ ^{A}_{Z-1}X_{N{+1}} }\f$ the equation becomes:
    *
    *	\f[Q_{EC} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - m(\ce{ ^{A}_{Z-1}X_{N{+1}} }) \right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before electron capture has happened in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A}_{Z-1}X_{N{+1}} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once it has undergone electron capture in unified atomic mass units.
    *	@return \f$Q_{EC}\ (J)\f$ Electron capture decay Q-value. The energy in joules released during the nuclear reaction where electron capture has occured.
    */
	template<typename T>
    T QValueElectronCaptureDecayInJ(const T& massParentInu, const T& massDaughterInu);
    
    /**
    *	@brief Calculates the double electron capture decay Q-value, \f$Q_{2EC}\f$, of a double electron capture nuclear reaction in megaelectron volts. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The double electron capture decay Q-value, \f$Q_{2EC}\f$, is the energy released during a nuclear reaction undergoing double electron capture. The Q-value can be positive, negative or zero.
	*	For \f$Q_{2EC} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{2EC} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the double electron capture decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{2EC} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ capturing an electron, \f$e\f$, orbiting around the atom and thereby producing an atom \f$\ce{ ^{A}_{Z-2}X_{N{+2}} }\f$ the equation becomes:
    *
    *	\f[Q_{2EC} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - m(\ce{ ^{A}_{Z-2}X_{N{+2}} }) \right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before double electron capture has happened in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A}_{Z-2}X_{N{+2}} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once it has undergone double electron capture in unified atomic mass units.
    *	@return \f$Q_{2EC}\ (MeV)\f$ Double electron capture decay Q-value. The energy in megaelectron volts released during the nuclear reaction where double electron capture has occured.
    */
    template<typename T>
    T QValueDoubleElectronCaptureDecayInMeV(const T& massParentInu, const T& massDaughterInu);
    
    /**
    *	@brief Calculates the double electron capture decay Q-value, \f$Q_{2EC}\f$, of a double electron capture nuclear reaction in joules. The Q-value allows you to determine if a nuclear reaction is endothermic or exothermic.
    *
    *	The double electron capture decay Q-value, \f$Q_{2EC}\f$, is the energy released during a nuclear reaction undergoing double electron capture. The Q-value can be positive, negative or zero.
	*	For \f$Q_{2EC} < 0\f$ the reaction is endothermic/endoergic resulting in the kinetic energy of the reaction being converted into mass or binding energy.
	*	For \f$Q_{2EC} > 0\f$ the reaction is exothermic/exoergic resulting in the mass or binding energy being released as kinetic energy. 
	*
	*	To calculate the double electron capture decay Q-value it is the initial mass \f$m_{initial}\f$ energy minus the final mass \f$m_{final}\f$ energy:
	*	\f[Q_{2EC} = \left ( m_{initial}-m_{final}\right ) c^2\f]
	*
    *	For an atom \f$\ce{ ^{A}_{Z}X_{N} }\f$ capturing an electron, \f$e\f$, orbiting around the atom and thereby producing an atom \f$\ce{ ^{A}_{Z-2}X_{N{+2}} }\f$ the equation becomes:
    *
    *	\f[Q_{2EC} = \left ( m(\ce{ ^{A}_{Z}X_{N} }) - m(\ce{ ^{A}_{Z-2}X_{N{+2}} }) \right ) c^2\f]
    *
    *	See http://www.nndc.bnl.gov/qcalc/ and http://www.nuclear-power.net/nuclear-power/nuclear-reactions/q-value-energetics-nuclear-reactions/
    *
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 62 & p. 381
    *
    *	@param massParentInu \f$m(\ce{ ^{A}_{Z}X_{N} })\ (u)\f$ Mass of parent (initial) atom. The mass of the atom before double electron capture has happened in unified atomic mass units.
    *	@param massDaughterInu \f$m(\ce{ ^{A}_{Z-2}X_{N{+2}} })\ (u)\f$ Mass of daughter (produced) atom. The mass of the atom once it has undergone double electron capture in unified atomic mass units.
    *	@return \f$Q_{2EC}\ (J)\f$ Double electron capture decay Q-value. The energy in joules released during the nuclear reaction where double electron capture has occured.
    */
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
