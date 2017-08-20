/// @file EGXPhys/Atomic/DecayWidth.hpp
///
/// @brief Calculates decay width of radioactive substance.
///
/// @author Elliot Grafil (Metex)
/// @date 8/4/17


/// @defgroup DecayWidth Decay Width
/// @ingroup Atomic
/// Calculates the decay width, \f$\Gamma\f$, of a radioactive substance.
 
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
	/// @addtogroup DecayWidth
	/// @{

	/** 
	*   @brief Calculates the decay width, \f$\Gamma\f$, of a radioactive substance via the uncertainty in energy, \f$\Delta E\f$. The decay width is also known as line width, natural line width and decay FWHM.
	*
	*	The decay width is the full width half maximum of the energy distribution of a decay when fit using a Breit-Wigner distribution.
	*	\f[\Gamma=2\Delta E\f]
	*	
	*	See http://quantummechanics.ucsd.edu/ph130a/130_notes/node428.html, http://hyperphysics.phy-astr.gsu.edu/hbase/quantum/parlif.html
	*
	*	Equation taken from "On the Relationship between the Natural Line Width and Lifetime of X-Ray Transitions" (Croft, 2015), https://www.osti.gov/scitech/servlets/purl/1214016 and
	*	"Mössbauer Spectroscopy and Transition Metal Chemistry" (Gütlich,2011) p 9 https://doi.org/10.1007/978-3-540-88428-6
	*
	*   @param energyUncertainty \f$\Delta E\ (eV)\f$ Energy uncertainty. The uncertainty in the release energy from the decay of a radioactive substance.
	*   @return \f$\Gamma\ (eV)\f$ Decay width also known as line width, natural line width and decay FWHM. The FWHM of the uncertainty in the measured energy of the radioactive decay. 
	* 	@see DecayWidthViaDecayConstant() to calculate decay width using decay constant, \f$\lambda\f$.
	* 	@see DecayWidthViaHalfLife() to calculate decay width using half life, \f$t_{\frac{1}{2}}\f$.
	* 	@see DecayWidthViaMeanLifetime() to calculatedecay width using mean lifetime, \f$\tau\f$.
	*/    
    template<typename T>
	T DecayWidth(const T& energyUncertainty);

	/** 
	*   @brief Calculates the decay width, \f$\Gamma\f$, of a radioactive substance via the decay constant, \f$\lambda\f$. The decay width is also known as line width, natural line width and decay FWHM.
	*
	*	The decay width is the full width half maximum of the energy distribution of a decay when fit using a Breit-Wigner distribution.
	*	\f[\Gamma \approx \hbar \lambda \f]
	*	
	*	See http://quantummechanics.ucsd.edu/ph130a/130_notes/node428.html, http://hyperphysics.phy-astr.gsu.edu/hbase/quantum/parlif.html
	*
	*	Equation taken from "On the Relationship between the Natural Line Width and Lifetime of X-Ray Transitions" (Croft, 2015), https://www.osti.gov/scitech/servlets/purl/1214016 and
	*	"Mössbauer Spectroscopy and Transition Metal Chemistry" (Gütlich,2011) p 9 https://doi.org/10.1007/978-3-540-88428-6
	*
	*   @param decayConstant \f$\lambda\ (\frac{1}{s})\f$ Decay constant. Fraction of radioactive substance that decays in 1 second.
	*   @return \f$\Gamma\ (eV)\f$ Decay width also known as line width, natural line width and decay FWHM. The FWHM of the uncertainty in the measured energy of the radioactive decay. 
	* 	@see DecayConstant() to calculate the decay constant, \f$\lambda\f$.
	* 	@see DecayWidth() to calculate decay width using the uncertainty in energy, \f$\Delta E\f$.
	* 	@see DecayWidthViaHalfLife() to calculate decay width using half life, \f$t_{\frac{1}{2}}\f$.
	* 	@see DecayWidthViaMeanLifetime() to calculatedecay width using mean lifetime, \f$\tau\f$.
	*/       
    template<typename T>
	T DecayWidthViaDecayConstant(const T& decayConstant);
	
	/** 
	*   @brief Calculates the Decay Width, \f$\Gamma\f$, of a radioactive substance via the half life, \f$t_{\frac{1}{2}}\f$. The decay width is also known as line width, natural line width and decay FWHM.
	*
	*	The decay width is the full width half maximum of the energy distribution of a decay when fit using a Breit-Wigner distribution.
	*	\f[\Gamma\approx \frac{\hbar \ ln(2)}{t_{\frac{1}{2}}}\f]
	*	
	*	See http://quantummechanics.ucsd.edu/ph130a/130_notes/node428.html, http://hyperphysics.phy-astr.gsu.edu/hbase/quantum/parlif.html
	*
	*	Equation taken from "On the Relationship between the Natural Line Width and Lifetime of X-Ray Transitions" (Croft, 2015), https://www.osti.gov/scitech/servlets/purl/1214016 and
	*	"Mössbauer Spectroscopy and Transition Metal Chemistry" (Gütlich,2011) p 9 https://doi.org/10.1007/978-3-540-88428-6
	*
	*   @param halfLife \f$t_{\frac{1}{2}}\ (s)\f$ Half life. Time required for the activity of a radioactive substance to decay to half of its initial value. 
	*   @return \f$\Gamma\ (eV)\f$ Decay width also known as line width, natural line width and decay FWHM. The FWHM of the uncertainty in the measured energy of the radioactive decay. 
	* 	@see HalfLife() to calculate the half life, \f$t_{\frac{1}{2}}\f$.
	* 	@see DecayWidth() to calculate decay width using the uncertainty in energy, \f$\Delta E\f$.	
	* 	@see DecayWidthViaDecayConstant() to calculate decay width using decay constant, \f$\lambda\f$.
	* 	@see DecayWidthViaMeanLifetime() to calculatedecay width using mean lifetime, \f$\tau\f$.
	*/        
    template<typename T>
	T DecayWidthViaHalfLife(const T& halfLife);
	
	/** 
	*   @brief Calculates the Decay Width, \f$\Gamma\f$, of a radioactive substance via the mean lifetime, \f$\tau\f$. The decay width is also known as line width, natural line width and decay FWHM.
	*
	*	The decay width is the full width half maximum of the energy distribution of a decay when fit using a Breit-Wigner distribution.
	*	\f[\Gamma \approx \frac{\hbar}{\tau}\f]
	*	
	*	See http://quantummechanics.ucsd.edu/ph130a/130_notes/node428.html, http://hyperphysics.phy-astr.gsu.edu/hbase/quantum/parlif.html
	*
	*	Equation taken from "On the Relationship between the Natural Line Width and Lifetime of X-Ray Transitions" (Croft, 2015), https://www.osti.gov/scitech/servlets/purl/1214016 and
	*	"Mössbauer Spectroscopy and Transition Metal Chemistry" (Gütlich,2011) p 9 https://doi.org/10.1007/978-3-540-88428-6
	*
	*   @param meanLifetime \f$\Delta E\ (eV)\f$ Mean lifetime. Average time that a radioactive substance is likely to survive before it decays. 
	*   @return \f$\Gamma\ (eV)\f$ Decay width also known as line width, natural line width and decay FWHM. The FWHM of the uncertainty in the measured energy of the radioactive decay.
	* 	@see MeanLifetime() to calculate the mean lifetime, \f$\tau\f$. 
	* 	@see DecayWidth() to calculate decay width using the uncertainty in energy, \f$\Delta E\f$.
	* 	@see DecayWidthViaDecayConstant() to calculate decay width using decay constant, \f$\lambda\f$.
	* 	@see DecayWidthViaHalfLife() to calculate decay width using half life, \f$t_{\frac{1}{2}}\f$.
	*/       
    template<typename T>
	T DecayWidthViaMeanLifetime(const T& meanLifetime);	
	
    /// @}
} //namespace EGXPhys

#include "DecayWidth.inl"
