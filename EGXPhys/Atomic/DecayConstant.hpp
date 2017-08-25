/// @file EGXPhys/Atomic/DecayConstant.hpp
///
/// @brief Calculates decay constant of radioactive substance.
///
/// @author Elliot Grafil (Metex)
/// @date 8/4/17

/// @todo decay constant in terms of dN/dt

/// @defgroup EGXPhys-DecayConstant Decay Constant
/// @ingroup EGXPhys-Atomic
/// Calculates decay constant,\f$\lambda\f$, of radioactive substance.

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
	/// @addtogroup EGXPhys-DecayConstant
	/// @{

	/** 
	*   @brief Calculates the decay constant, \f$\lambda\f$, of a radioactive substance via the uncertainty in energy, \f$\Delta E\f$.
	*
	*	The decay width is the full width half maximum of the energy distribution of a decay when fit using a Breit-Wigner distribution.
	*	\f[\frac{dN}{dt}=-\lambda N\f]
	*	\f[\lambda=-\frac{\frac{dN}{dt}}{N}\f]
	*	\f[\lambda=-\frac{\frac{N_t-N_0}{dt}}{N_0}\f]
	*	
	*	See http://quantummechanics.ucsd.edu/ph130a/130_notes/node428.html, http://hyperphysics.phy-astr.gsu.edu/hbase/quantum/parlif.html
	*
	*	Equation taken from "On the Relationship between the Natural Line Width and Lifetime of X-Ray Transitions" (Croft, 2015), https://www.osti.gov/scitech/servlets/purl/1214016 and
	*	"Mössbauer Spectroscopy and Transition Metal Chemistry" (Gütlich,2011) p 9 https://doi.org/10.1007/978-3-540-88428-6
	*
	*   @param countInitial \f$\Delta E\f$(dimensionless) Count Initial.
	*   @param countFinal \f$\Delta E\f$(dimensionless) Count Final.
	*   @param time \f$t\ (s)\f$ Time.
	*   @return \f$\Gamma\ (eV)\f$ Decay width also known as line width, natural line width and decay FWHM. The FWHM of the uncertainty in the measured energy of the radioactive decay. 
	* 	@see DecayConstantViaHalfLife() to calculate decay width using half life, \f$t_{\frac{1}{2}}\f$.
	* 	@see DecayConstantViaMeanLifetime() to calculatedecay width using mean lifetime, \f$\tau\f$.
	* 	@see DecayConstantViaDecayWidth() to calculate decay width using decay constant, \f$\lambda\f$.
	*/    
    template<typename T>
	T DecayConstant(const T& countInitial, const T& countFinal, const T& time);

	
	/** 
	*   @brief Calculates the decay constant, \f$\lambda\f$, of a radioactive substance via the half life, \f$t_{\frac{1}{2}}\f$. 
	*
	*	The decay width is the full width half maximum of the energy distribution of a decay when fit using a Breit-Wigner distribution.
	*	\f[\lambda = \frac{ln(2)}{t_{\frac{1}{2}}}\f]
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
	* 	@see DecayConstantViaMeanLifetime() to calculatedecay width using mean lifetime, \f$\tau\f$.
	* 	@see DecayConstantViaDecayWidth() to calculate decay width using decay constant, \f$\lambda\f$.
	*/        
    template<typename T>
	T DecayConstantViaHalfLife(const T& halfLife);
	
	/** 
	*   @brief Calculates the decay constant, \f$\lambda\f$, of a radioactive substance via the mean lifetime, \f$\tau\f$.
	*
	*	The decay width is the full width half maximum of the energy distribution of a decay when fit using a Breit-Wigner distribution.
	*	\f[\lambda = \frac{1}{\tau}\f]
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
	* 	@see DecayConstantViaHalfLife() to calculate decay width using half life, \f$t_{\frac{1}{2}}\f$.
	* 	@see DecayConstantViaDecayWidth() to calculate decay width using decay constant, \f$\lambda\f$.
	*/       
    template<typename T>
	T DecayConstantViaMeanLifetime(const T& meanLifetime);	
	
	/** 
	*   @brief Calculates the decay constant, \f$\lambda\f$, of a radioactive substance via the decay width, \f$\Gamma\f$.
	*
	*	The decay width is the full width half maximum of the energy distribution of a decay when fit using a Breit-Wigner distribution.
	*	\f[\lambda = \frac{\Gamma}{\hbar} \f]
	*	
	*	See http://quantummechanics.ucsd.edu/ph130a/130_notes/node428.html, http://hyperphysics.phy-astr.gsu.edu/hbase/quantum/parlif.html
	*
	*	Equation taken from "On the Relationship between the Natural Line Width and Lifetime of X-Ray Transitions" (Croft, 2015), https://www.osti.gov/scitech/servlets/purl/1214016 and
	*	"Mössbauer Spectroscopy and Transition Metal Chemistry" (Gütlich,2011) p 9 https://doi.org/10.1007/978-3-540-88428-6
	*
	*   @param decayWidth \f$\lambda\ (\frac{1}{s})\f$ Decay constant. Fraction of radioactive substance that decays in 1 second.
	*   @return \f$\Gamma\ (eV)\f$ Decay width also known as line width, natural line width and decay FWHM. The FWHM of the uncertainty in the measured energy of the radioactive decay. 
	* 	@see DecayConstant() to calculate the decay constant, \f$\lambda\f$.
	* 	@see DecayWidth() to calculate decay width, \f$\Gamma\f$.
	* 	@see DecayConstantViaHalfLife() to calculate decay width using half life, \f$t_{\frac{1}{2}}\f$.
	* 	@see DecayConstantViaMeanLifetime() to calculatedecay width using mean lifetime, \f$\tau\f$.
	*/       
    template<typename T>
	T DecayConstantViaDecayWidth(const T& decayWidth);
	
    /// @}
} //namespace EGXPhys

#include "DecayConstant.inl"
