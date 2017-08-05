/// @file EGXPhys/Atomic/DecayWidth.hpp
///
/// @brief Calculates decay width of radioactive substance.
///
/// @author Elliot Grafil (Metex)
/// @date 8/4/17
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
	*   @brief Calculates the Decay Width, \f$\Gamma\f$, of a radioactive substance via the uncertainty in energy, \f$\Delta E\f$. Also known as line width, natural line width and decay FWHM.
	*
	*	The decay width is the full width half maximum of the energy distribution of a decay when fit using a Breit-Wigner distribution.
	*	\f[\Gamma=2\Delta E\f]
	*	
	*	See http://quantummechanics.ucsd.edu/ph130a/130_notes/node428.html, http://hyperphysics.phy-astr.gsu.edu/hbase/quantum/parlif.html
	*
	*	Equation taken from "On the Relationship between the Natural Line Width and Lifetime of X-Ray Transitions" (Croft, 2015), https://www.osti.gov/scitech/servlets/purl/1214016 and
	*	"Mössbauer Spectroscopy and Transition Metal Chemistry" (Gütlich,2011) p 9 https://doi.org/10.1007/978-3-540-88428-6
	*
	*   @param energyUncertainty \f$\Delta E\f$(\f$eV\f$) Energy uncertainty. The uncertainty in the release energy from the decay of a radioactive substance.
	*   @return \f$\Gamma\f$ (eV) Decay width. Full width half maximum of a Breit-Wigner distribution fit to the energy distribution of a decay.
	* 	@see DecayWidthViaDecayConstant() to calculate decay width using decay constant, \f$\lambda\f$.
	* 	@see DecayWidthViaHalfLife() to calculate decay width using half life, \f$t_{\frac{1}{2}\f$.
	* 	@see DecayWidthViaMeanLifetime() to calculatedecay width using mean lifetime, \f$\tau\f$.
	*/    
    template<typename T>
	T DecayWidth(const T& energyUncertainty);

    /** 
	*   @brief Calculates the Decay Width, \f$\Gamma\f$, of a radioactive substance via the decay constant, \f$\lambda\f$. Also known as line width, natural line width and decay FWHM.
	*
	*	The Decay Width is the full width half max (FWHM) of the energy distribution of a decay when fit using a Breit-Wigner distribution.
	*	\f[\Gamma=2\Delta E\f]
	*	
	*	See http://quantummechanics.ucsd.edu/ph130a/130_notes/node428.html, http://hyperphysics.phy-astr.gsu.edu/hbase/quantum/parlif.html
	*
	*	Equation taken from "On the Relationship between the Natural Line Width and Lifetime of X-Ray Transitions" (Croft, 2015), https://www.osti.gov/scitech/servlets/purl/1214016 and
	*	"Mössbauer Spectroscopy and Transition Metal Chemistry" (Gütlich,2011) p 9 https://doi.org/10.1007/978-3-540-88428-6
	*
	*   @param decayConstant \f$\lambda\f$(\f$\frac{1}{s}\f$) Decay constant. Fraction of radioactive substance that decays in 1 second.
	*   @return \f$\Gamma\f$) Decay width. Time required for the activity of a radioactive substance to decay to half of its initial value.
	* 	@see DecayConstant() to calculate the decay constant.
	* 	@see HalfLifeViaMeanLifetime() to calculate half life using mean lifetime, \f$\tau\f$.
	* 	@see HalfLifeViaDecayWidth() to calculate half life using decay width, \f$\tau\f$.
	*/    
    template<typename T>
	T DecayWidthViaDecayConstant(const T& decayConstant);
	
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
	*   @param decayWidth \f$\Gamma\f$(\f$eV\f$) Decay width also known as line width, natural line width and decay FWHM. The FWHM of the uncertainty in the measured energy of the radioactive decay.
	*   @return \f$t_{\frac{1}{2}}\f$(\f$s\f$) Half Life. Time required for the activity of a radioactive substance to decay to half of its initial value.
	*	@see DecayWidth() to calculate the decay width.
	*	@see HalfLife() to calculate half life using decay constant, \f$\lambda\f$.
	* 	@see HalfLifeViaMeanLifetime() to calculate half life using mean lifetime, \f$\tau\f$.
	*/       
    template<typename T>
	T DecayWidthViaHalfLife(const T& decayWidth);
	
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
	T DecayWidthViaMeanLifetime(const T& meanLifetime);	
	
    /// @}
} //namespace EGXPhys

#include "DecayWidth.inl"
