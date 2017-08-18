/// @file EGXPhys/Atomic/NuclearSeparationEnergy.hpp
///
/// @brief Calculates nuclear separation energy of an atom.
///
/// @author Elliot Grafil (Metex)
/// @date 8/17/17

/// @defgroup NuclearSeparationEnergy Nuclear Separation Energy
/// @ingroup Atomic
/// Calculates the Nuclear Separation Energy, \f$S\f$, of a radioactive substance.

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
	/// @addtogroup NuclearSeparationEnergy
	/// @{
    
    /**
     *  @brief Calculates the neutron separation energy, \f$S_{n}\f$. The energy in joules needed to remove a neutron from the nucleus of an atom.
     *
     *  The neutron separation energy, \f$S_{n}\f$, is the energy required to seperate out a neutron from the nucleus of an atom, \f$\ce{ ^{A}_{Z}X_{N} }\f$, in order to produce \f$\ce{ ^{A-1}_{Z}X_{N-1} }\f$.
     *
     *	\f[S_{n} = a_V A - a_S A^{2/3}-a_C Z(Z-1)A^{-1/3}-a_{sym}\frac{(A-2Z)^2}{A}+\delta(Z,A)\f] m({^A_ZX})
     *
     *	Where \f$\delta(Z,A)\f$:
     *	\f[\delta(Z,A)=\begin{cases}
     *		a_pA^{-3/4} & \text{ if } Z,N\text{ even }\\
     *		0 & \text{ if } A \text{ odd }\\
     *		-a_pA^{-3/4} & \text{ if } Z,N \text{ odd }
     *	\end{cases}\f]
     *
     *	Constants used:
     *	\f[a_V = 15.5\ MeV\f]
     *	\f[a_S = 16.8\ MeV\f]
     *	\f[a_C = 0.72\ MeV\f]
     *	\f[a_{sym} = 23.0\ MeV\f]
     * 	\f[a_p = 34.0\ MeV\f]
     *
     *	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 68
     *
     *   @param atomicNumber \f$Z\ (1)\f$ Atomic number. The number of protons in the nucleus of an atom.
     *   @param massNumber \f$A\ (1)\f$ Mass number. The number of protons and neutrons in the nucleus of an atom.
     *   @return \f$B_{SEMF}\ (MeV)\f$ Binding Energy.
     *   @see MassDefectInMeVPercSquared() to calculate mass defect,\f$\Delta m\f$ in megaelectron volts per c squared.
     */
    neutronSeparationEnergyInJ(const int A);
    
    /*
    protonSeparationEnergyInJ
    
    alphaSeparationEnergyInJ
    */
    
    
    

 	
   

    /// @}
} //namespace EGXPhys

#include "NuclearSeparationEnergy.inl"
