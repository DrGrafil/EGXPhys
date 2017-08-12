/// @file EGXPhys/Atomic/HalfLife.hpp
///
/// @brief Calculates half life of a radioative substance
///
/// @author Elliot Grafil (Metex)
/// @date 8/4/17
/// @bug No known bugs.
/// @todo Add reference to Decay Width.

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
	* 	@see DecayConstant() to calculate the decay constant.
	* 	@see HalfLifeViaMeanLifetime() to calculate half life using mean lifetime, \f$\tau\f$.
	* 	@see HalfLifeViaDecayWidth() to calculate half life using decay width, \f$\Gamma\f$.
	*/    
    template<typename T>
	T HalfLife(const T& decayConstant);

	/** 
	*   @brief Calculates the Half Life, \f$t_{\frac{1}{2}}\f$, of a radioactive substance via the mean lifetime, \f$\tau\f$. 
	*
	*	The Half Life is the time required for the activity of a radioactive substance to decay to half of its initial value.
	*	\f[\tau= \tau \ ln(2)\f]
	*	
	*	See https://en.wikipedia.org/wiki/Half-life and http://hyperphysics.phy-astr.gsu.edu/hbase/Nuclear/halfli2.html, https://en.wikipedia.org/wiki/Radioactive_decay
	*
	*	Equation taken from "Introductory Nuclear Physics" (Krane, 1987), p. 161
	*
	*   @param meanLifetime \f$\lambda\f$(\f$\frac{1}{s}\f$) Mean lifetime. Average time that a radioactive substance is likely to survive before it decays.
	*   @return \f$t_{\frac{1}{2}}\f$(\f$s\f$) Half Life. Time required for the activity of a radioactive substance to decay to half of its initial value.
	*	@see MeanLifetime()
	*	@see HalfLife() to calculate half life using decay constant, \f$\lambda\f$.
	* 	@see HalfLifeViaDecayWidth() to calculate half life using decay width, \f$\Gamma\f$.
	*/    
    template<typename T>
	T HalfLifeViaMeanLifetime(const T& meanLifetime);	
	
    /** 
	*   @brief Calculates the Half Life, \f$t_{\frac{1}{2}}\f$, of a radioactive substance via the decay width, \f$\Gamma\f$ . 
	*
	*	The Half Life is the time required for the activity of a radioactive substance to decay to half of its initial value.
	*	\f[t_{\frac{1}{2}}=\frac{\hbar \ ln(2)}{\Gamma}\f]
	*	
	*	See http://hyperphysics.phy-astr.gsu.edu/hbase/quantum/parlif.html
	*
	*	Equation taken from ????????
	*
	*   @param decayWidth \f$\Gamma\f$(\f$eV\f$) Decay Width also known as line width, natural line width and decay FWHM. The FWHM of the uncertainty in the measured energy of the radioactive decay.
	*   @return \f$t_{\frac{1}{2}}\f$(\f$s\f$) Half Life. Time required for the activity of a radioactive substance to decay to half of its initial value.
	*	@see DecayWidth() to calculate the decay width.
	*	@see HalfLife() to calculate half life using decay constant, \f$\lambda\f$.
	* 	@see HalfLifeViaMeanLifetime() to calculate half life using mean lifetime, \f$\tau\f$.
	*/       
    template<typename T>
	T HalfLifeViaDecayWidth(const T& decayWidth);		
   

    /// @}
} //namespace EGXPhys

#include "HalfLife.inl"
