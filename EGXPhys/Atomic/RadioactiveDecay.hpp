/// @file EGXPhys/Atomic/RadioactiveDecay.hpp
///
/// @brief Calculates various radioactive decay measurements such as half life and mean lifetime
///
/// @author Elliot Grafil (Metex)
/// @date 8/2/17
/// @bug No known bugs.

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
	/// @addtogroup Atomic
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
	* 	@see DecayConstant() to calculate decay constant.
	*/    
    template<typename T>
	T HalfLife(const T& decayConstant);

	/** 
	*   @brief Calculates the Half Life, \f$t_{\frac{1}{2}}\f$, of a radioactive substance via the mean lifetime, \f$\tau\f$ . 
	*
	*	The Half Life is the time required for the activity of a radioactive substance to decay to half of its initial value.
	*	\f[\tau=\frac{1}{\lambda}\f]
	*	
	*	See https://en.wikipedia.org/wiki/Half-life and http://hyperphysics.phy-astr.gsu.edu/hbase/Nuclear/halfli2.html, https://en.wikipedia.org/wiki/Radioactive_decay
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 161
	*
	*   @param meanLifetime \f$\lambda\f$(\f$\frac{1}{s}\f$) Mean lifetime. Average time that a radioactive substance is likely to survive before it decays.
	*   @return \f$t_{\frac{1}{2}}\f$(\f$s\f$) Half Life. Time required for the activity of a radioactive substance to decay to half of its initial value.
	*/    
    template<typename T>
	T HalfLifeViaMeanLifetime(const T& meanLifetime);	
	
    /** 
	*   @brief Calculates the Half Life, \f$t_{\frac{1}{2}}\f$, of a radioactive substance via the nuclear decay constant, \f$\lambda\f$ . 
	*
	*	The Half Life is the time required for the activity of a radioactive substance to decay to half of its initial value.
	*	\f[t_{\frac{1}{2}}=\frac{ln(2)}{\lambda}\f]
	*	
	*	See https://en.wikipedia.org/wiki/Half-life and http://hyperphysics.phy-astr.gsu.edu/hbase/Nuclear/halfli2.html, https://en.wikipedia.org/wiki/Radioactive_decay
	*
	*	Equation taken from 
	*
	*   @param decayConstant \f$\lambda\f$(\f$\frac{1}{s}\f$) Decay Constant. Fraction of radioactive substance that decays in 1 second.
	*   @return \f$t_{\frac{1}{2}}\f$(\f$s\f$) Half Life. Time required for the activity of a radioactive substance to decay to half of its initial value.
	*/       
    template<typename T>
	T HalfLifeViaDecayFWHM(const T& decayFWHM);		
   

    /// @}
} //namespace EGXPhys

#include "CircumstellarHabitableZone.inl"
