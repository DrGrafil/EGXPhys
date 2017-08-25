/// @file EGXPhys/Relativity/LorentzTransformations.hpp
///
/// @brief Calculates Lorentz Transformations
///
/// @author Elliot Grafil (Metex)
/// @date 8/2/17

/// @defgroup EGXPhys-LorentzFactor Lorentz factor
/// @ingroup EGXPhys-Relativity
/// Calculates the Lorentz factor, \f$\gamma\f$, of relativistic motion.

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include "RelativityConstants.hpp"

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{	
	/// @addtogroup EGXPhys-LorentzFactor
	/// @{

	/** 
	*   @brief  Calculates the Lorentz factor, \f$\gamma\f$. The factor by which time, length, and relativistic mass changes due to movement of an object.
    *
	*			\f[\gamma=\frac{1}{\sqrt{1-(\frac{v}{c})^2}}\f] 
    *			\f[\gamma=\frac{1}{\sqrt{1-\beta^2}}\f]
    *
	*   See https://en.wikipedia.org/wiki/Lorentz_factor
    *
    *   Equation taken from
    *
	*   @param  velocity \f$v\f$ (\f$\frac{m}{s})\f$ velocity of relativistic object.
	*   @return \f$\gamma\f$ (dimensionless) Lorentz factor.
	*/ 
    template<typename T>
    T LorentzFactor(const T& velocity);
    
    /**
     *   @brief  Calculates the Lorentz factor, \f$\gamma\f$. The factor by which time, length, and relativistic mass changes due to movement of an object.
     *
     *			\f[\gamma=\sqrt{1+(\frac{p}{m_0 c})^2}\f]
     *
     *   See https://en.wikipedia.org/wiki/Lorentz_factor
     *
     *   Equation taken from
     *
     *   @param momentum \f$p\f$ (\f$\frac{kg m}{s})\f$ momentum of relativistic object.
     *   @param restMass \f$m_0\f$ (\f$kg)\f$ Rest mass of relativisitc object.
     *   @return \f$\gamma\f$ (dimensionless) Lorentz factor.
     */
    template<typename T>
    T LorentzFactorViaMomentum(const T& momentum, const T& restMass);
    
    /**
     *   @brief  Calculates the Lorentz factor, \f$\gamma\f$. The factor by which time, length, and relativistic mass changes due to movement of an object.
     *
     *			\f[\gamma=\frac{E_{total}}{E_{rest}}\f]
     *			\f[\gamma=\frac{\gamma m_0 c^2}{m_0 c^2}\f]
     *
     *   See https://en.wikipedia.org/wiki/Lorentz_factor
     *
     *   Equation taken from
     *
     *   @param energyTotal \f$E_{total}\f$ (\f$J)\f$ Total energy of relativistic object.
     *   @param energyRest \f$E_{rest}\f$ (\f$J)\f$ Rest energy of relativistic object.
     *   @return \f$\gamma\f$ (dimensionless) Lorentz factor.
     */
    template<typename T>
    T LorentzFactorViaEnergy(const T& energyTotal, const T& energyRest);
    
    /**
     *   @brief  Calculates the Lorentz factor, \f$\gamma\f$. The factor by which time, length, and relativistic mass changes due to movement of an object.
     *
     *			\f[\gamma=Cosh(w)\f]
     *
     *   See https://en.wikipedia.org/wiki/Lorentz_factor
     *
     *   Equation taken from
     *
     *   @param rapidity \f$w\f$ (dimensionless) rapidity of relativistic object.
     *   @return \f$\gamma\f$ (dimensionless) Lorentz factor.
     */
    template<typename T>
    T LorentzFactorViaRapidity(const T& rapidity);
    /// @}
} //namespace EGXPhys

#include "Luminosity.inl"
