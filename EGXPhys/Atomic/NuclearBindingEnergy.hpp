/// @file EGXPhys/Atomic/NuclearBindingEnergy.hpp
///
/// @brief Calculates half life of a radioative substance
///
/// @author Elliot Grafil (Metex)
/// @date 8/4/17
/// @bug No known bugs.
/// @todo Add reference to Decay Width.

/// @defgroup NuclearBindingEnergy Binding Energy
/// @ingroup Atomic
/// Calculates the Half Life, \f$t_{\frac{1}{2}}\f$, of a radioactive substance.

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
	/// @addtogroup NuclearBindingEnergy
	/// @{

    /** 
	*   @brief Calculates the Half Life, \f$t_{\frac{1}{2}}\f$, of a radioactive substance via the decay constant, \f$\lambda\f$ . 
	*
	*	The Half Life is the time required for the activity of a radioactive substance to decay to half of its initial value.
	*	\f[t_{\frac{1}{2}}=\frac{ln(2)}{\lambda}\f]
	*	
	*	See https://en.wikipedia.org/wiki/Half-life and http://hyperphysics.phy-astr.gsu.edu/hbase/Nuclear/halfli2.html, https://en.wikipedia.org/wiki/Radioactive_decay
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 161
	*
	*   @param decayConstant \f$\lambda\f$(\f$\frac{1}{s}\f$) Decay constant. Fraction of radioactive substance that decays in 1 second.
	*   @return \f$t_{\frac{1}{2}}\f$(\f$s\f$) Half life. Time required for the activity of a radioactive substance to decay to half of its initial value.
	* 	@see DecayConstant() to calculate the decay constant, \f$\lambda\f$.
	* 	@see HalfLifeViaMeanLifetime() to calculate half life using mean lifetime, \f$\tau\f$.
	* 	@see HalfLifeViaDecayWidth() to calculate half life using decay width, \f$\Gamma\f$.
	*/    
    template<typename T, typename T2>
    T2 BindingEnergyInu(const T& atomicNumber, const T& massNumber, const T2& massAtom)	
   

    /// @}
} //namespace EGXPhys

#include "NuclearBindingEnergy.inl"
