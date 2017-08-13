/// @file EGXPhys/Atomic/SemiEmpiricalMassFormula.hpp
///
/// @brief Calculates semi-empirical mass formula of a radioative substance
///
/// @author Elliot Grafil (Metex)
/// @date 8/4/17
/// @bug No known bugs.
/// @todo Add reference to Decay Width.

/// @defgroup SemiEmpiricalMassFormula Semi-Empirical Mass Formula
/// @ingroup Atomic
/// Approximate the mass, \f$m_{SEMF}\f$, of a nucleus.

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
	/// @addtogroup SemiEmpiricalMassFormula
	/// @{

	/** 
	*   @brief Calculates the binding energy, \f$B_{SEMF}\f$, used in the semi-emperical mass formula for determining the mass of a nucleus using Krane's method. 
	*
	*	The semi-emperical binding energy calculates the binding energy   formula.
	*	\f[B_{SEMF} = a_V A - a_S A^{2/3}-a_C Z(Z-1)A^{-1/3}-a_{sym}\frac{(A-2Z)^2}{A}+\delta(Z,A)\f]
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
	template<typename T>
    double SemiEmpericalBindingEnergyKrane(const T& atomicNumber, const T& massNumber);

	template<typename T>
    double SemiEmpericalMassFormula(const T& atomicNumber, const T& massNumber);


    /// @}
} //namespace EGXPhys

#include "SemiEmpiricalMassFormula.inl"
