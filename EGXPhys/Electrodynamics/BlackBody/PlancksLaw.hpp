/// @file EGXPhys/Electrodynamics/BlackBody/PlancksLaw.hpp
///
/// @brief Calculates B-V Color of stars and related information derived from it PlancksLaw.
///
/// @author Elliot Grafil (Metex)
/// @date 5/25/18

/// @defgroup EGXPhys-Electrodynamics-BlackBody-PlancksLaw Planck's Law
/// @ingroup EGXPhys-Electrodynamics-BlackBody

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <math.h>  

//=================================
// Forward declared dependencies

//=================================
//

/// @todo add SpectralRadiance alias

namespace EGXPhys
{
	/// @addtogroup EGXPhys-Electrodynamics-BlackBody-PlancksLaw
	/// @{
	
    /**
    *   @brief Calculates the spectral radiance, \f$B_{\lambda}\f$, in watts per steradian meter cubed of a black body from the surface tempreture, \f$T\f$ of the black body using Plank's Law. The spectral radience is the amount of power emmited per steradian at a specific wavelength, \f$\lambda\f$, for a unit surface area of the black body.
    *   		\f[ B_{\lambda} = \dfrac{2 h c^2}{\lambda^5} \dfrac{1}{e^{\frac{hc}{\lambda k_B T}} - 1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Planck%27s_law
    *
    *   @param surfaceTempretureInK \f$T\ (K)\f$ Surface tempreture of the black body in Kelvin.
    *   @param wavelengthInm \f$\lambda\ (m)\f$ Wavelength at which to find spectral radiance at in meters.
    *   @return \f$B_{\lambda}\ ( \dfrac{W}{sr\ m^3})\f$ Spectral radiance of a black body at the wavelength, \f$\lambda\f$, in watts per steradian meter cubed.
    *	@see PlancksLawFromWavelength() for alias.
    *   @see SpectralRadianceFromWavelength for alias.
    *   @see PlancksLawFromFrequency for spectral radiance calulations using frequency.
    *   @see PlancksLawFromWavelength for spectral radiance calulations using wavelenght.
    *   @see PlancksLawFromWavenumber for spectral radiance calulations using wavenumber.
    *   @see PlancksLawFromAngularFrequency for spectral radiance calulations using angular frequency.
    *   @see PlancksLawFromAngularWavelength for spectral radiance calulations using angular wavelenght.
    *   @see PlancksLawFromAngularWavenumber for spectral radiance calulations using angular wavenumber.
    */
    template<typename T>
    T PlancksLaw(const T wavelengthInm, const T surfaceTempretureInK);


    /**
    *   @brief Calculates the spectral radiance, \f$B_{\nu}\f$, in watts per steradian meter squared hertz of a black body from the surface tempreture, \f$T\f$ of the black body using Plank's Law. The spectral radience is the amount of power emmited per steradian at a specific frequency, \f$\nu\f$, for a unit surface area of the black body.
    *   		\f[ B_{\nu} = \dfrac{2 h \nu^3}{c^2} \dfrac{1}{e^{\frac{h\nu}{k_B T}} - 1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Planck%27s_law
    *
    *   @param surfaceTempretureInK \f$T\ (K)\f$ Surface tempreture of the black body in Kelvin.
    *   @param frequencyInHz \f$\nu\ (Hz)\f$ Frequency at which to find spectral radiance at in hertz.
    *   @return \f$B_{\nu}\ ( \dfrac{W}{sr\ m^2 Hz})\f$ Spectral radiance of a black body at the frequency, \f$\nu\f$, in watts per steradian meter squared hertz.
    *   @see SpectralRadianceFromFrequency for alias.
    *   @see PlancksLawFromWavelength for spectral radiance calulations using wavelenght.
    *   @see PlancksLawFromWavenumber for spectral radiance calulations using wavenumber.
    *   @see PlancksLawFromAngularFrequency for spectral radiance calulations using angular frequency.
    *   @see PlancksLawFromAngularWavelength for spectral radiance calulations using angular wavelenght.
    *   @see PlancksLawFromAngularWavenumber for spectral radiance calulations using angular wavenumber.
    */
    template<typename T>
    T PlancksLawFromFrequency(const T frequencyInHz, const T surfaceTempretureInK);

    /**
    *   @brief Calculates the spectral radiance, \f$B_{\lambda}\f$, in watts per steradian meter cubed of a black body from the surface tempreture, \f$T\f$ of the black body using Plank's Law. The spectral radience is the amount of power emmited per steradian at a specific wavelength, \f$\lambda\f$, for a unit surface area of the black body.
    *   		\f[ B_{\lambda} = \dfrac{2 h c^2}{\lambda^5} \dfrac{1}{e^{\frac{hc}{\lambda k_B T}} - 1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Planck%27s_law
    *
    *   @param surfaceTempretureInK \f$T\ (K)\f$ Surface tempreture of the black body in Kelvin.
    *   @param wavelengthInm \f$\lambda\ (m)\f$ Wavelength at which to find spectral radiance at in meters.
    *   @return \f$B_{\lambda}\ ( \dfrac{W}{sr\ m^3})\f$ Spectral radiance of a black body at the wavelength, \f$\lambda\f$, in watts per steradian meter cubed.
    *   @see PlancksLaw for alias.
    *   @see SpectralRadiance for alias.
    *   @see SpectralRadianceFromWavelength for alias.
    *   @see PlancksLawFromFrequency for spectral radiance calulations using frequency.
    *   @see PlancksLawFromWavenumber for spectral radiance calulations using wavenumber.
    *   @see PlancksLawFromAngularFrequency for spectral radiance calulations using angular frequency.
    *   @see PlancksLawFromAngularWavelength for spectral radiance calulations using angular wavelenght.
    *   @see PlancksLawFromAngularWavenumber for spectral radiance calulations using angular wavenumber.
    */
    template<typename T>
    T PlancksLawFromWavelength(const T wavelengthInm, const T surfaceTempretureInK);

    /**
    *   @brief Calculates the spectral radiance, \f$B_{\tilde {\nu }}\f$, in watts per steradian meter cubed of a black body from the surface tempreture, \f$T\f$ of the black body using Plank's Law. The spectral radience is the amount of power emmited per steradian at a specific wavenumber, \f$\tilde {\nu }\f$, for a unit surface area of the black body.
    *   		\f[ B_{\tilde {\nu }} = 2 h c^2 \tilde {\nu }^3 \dfrac{1}{e^{\frac{hc \tilde {\nu }}{k_B T}} - 1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Planck%27s_law
    *
    *   @param surfaceTempretureInK \f$T\ (K)\f$ Surface tempreture of the black body in Kelvin.
    *   @param wavenumberInInversem \f$\tilde {\nu }\ (\frac{1}{m})\f$ Wavemnumber at which to find spectral radiance at in inverse meters.
    *   @return \f$B_{\tilde {\nu }}\ ( \dfrac{W}{sr\ m})\f$ Spectral radiance of a black body at the wavenumber, \f$\tilde {\nu }\f$ in watts per steradian meter.
    *   @see SpectralRadianceFromWavenumber for alias.
    *   @see PlancksLawFromFrequency for spectral radiance calulations using frequency.
    *   @see PlancksLawFromWavelength for spectral radiance calulations using wavelenght.
    *   @see PlancksLawFromAngularFrequency for spectral radiance calulations using angular frequency.
    *   @see PlancksLawFromAngularWavelength for spectral radiance calulations using angular wavelenght.
    *   @see PlancksLawFromAngularWavenumber for spectral radiance calulations using angular wavenumber.
    */
    template<typename T>
    T PlancksLawFromWavenumber(const T wavenumberInInversem, const T surfaceTempretureInK);


    /**
    *   @brief Calculates the spectral radiance, \f$B_{\omega}\f$, in watt radians per steradian meter squared hertz of a black body from the surface tempreture, \f$T\f$ of the black body using Plank's Law. The spectral radience is the amount of power emmited per steradian at a specific angular frequency, \f$\omega\f$, for a unit surface area of the black body.
    *   		\f[ B_{\omega} = \dfrac{\hbar \omega^3}{4\pi^3c^2} \dfrac{1}{e^{\frac{\hbar\omega}{k_B T}} - 1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Planck%27s_law
    *
    *   @param surfaceTempretureInK \f$T\ (K)\f$ Surface tempreture of the black body in Kelvin.
    *   @param angularFrequencyInRadiansPers \f$\omega\ (\frac{rad}{Hz})\f$ Angular frequency at which to find spectral radiance at in radians per hertz.
    *   @return \f$B_{\omega}\ ( \dfrac{W Hz}{sr\ m^2 rad})\f$ Spectral radiance of a black body at the angular frequency, \f$\omega\f$, in watt hertz per steradian meter squared radian.
    *   @see SpectralRadianceFromAngularFrequency for alias.
    *   @see PlancksLawFromFrequency for spectral radiance calulations using frequency.
    *   @see PlancksLawFromWavelength for spectral radiance calulations using wavelenght.
    *   @see PlancksLawFromWavenumber for spectral radiance calulations using wavenumber.
    *   @see PlancksLawFromAngularWavelength for spectral radiance calulations using angular wavelenght.
    *   @see PlancksLawFromAngularWavenumber for spectral radiance calulations using angular wavenumber.
    */
    template<typename T>
    T PlancksLawFromAngularFrequency(const T angularFrequencyInRadiansPers, const T surfaceTempretureInK);

    /**
    *   @brief Calculates the spectral radiance, \f$B_{y}\f$, in watts per steradian meter cubed of a black body from the surface tempreture, \f$T\f$ of the black body using Plank's Law. The spectral radience is the amount of power emmited per steradian at a specific angular wavelength, /f$y/f$, for a unit surface area of the black body.
    *   		\f[ B_{y} = \dfrac{\hbar c^2}{4\pi^3y^5} \dfrac{1}{e^{\frac{\hbar c}{y k_B T}} - 1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Planck%27s_law
    *
    *   @param surfaceTempretureInK \f$T\ (K)\f$ Surface tempreture of the black body in Kelvin.
    *   @param angularWavelengthInm \f$y\ (m)\f$ Angular wavelength at which to find spectral radiance at in meters.
    *   @return \f$B_{y}\ ( \dfrac{W}{sr\ m^3})\f$ Spectral radiance of a black body at the angular wavelength, \f$y\f$ in watts per steradian meter cubed.
    *   @see SpectralRadianceFromAngularWavelength for alias.
    *   @see PlancksLawFromFrequency for spectral radiance calulations using frequency.
    *   @see PlancksLawFromWavelength for spectral radiance calulations using wavelenght.
    *   @see PlancksLawFromWavenumber for spectral radiance calulations using wavenumber.
    *   @see PlancksLawFromAngularFrequency for spectral radiance calulations using angular frequency.
    *   @see PlancksLawFromAngularWavenumber for spectral radiance calulations using angular wavenumber.
    */
    template<typename T>
    T PlancksLawFromAngularWavelength(const T angularWavelengthInm, const T surfaceTempretureInK);

    /**
    *   @brief Calculates the spectral radiance, \f$B_{k}\f$, in watts per steradian meter of a black body from the surface tempreture, \f$T\f$ of the black body using Plank's Law. The spectral radience is the amount of power emmited per steradian at a specific angular wavenumber, \f$k\f$, for a unit surface area of the black body.
    *   		\f[ B_{k} = \dfrac{\hbar c^2 k^3}{4\pi^3} \dfrac{1}{e^{\frac{\hbar c k}{k_B T}} - 1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Planck%27s_law
    *
    *   @param surfaceTempretureInK \f$T\ (K)\f$ Surface tempreture of the black body in Kelvin.
    *   @param angularWavenumberInRadianPerm \f$k\ (\frac{rad}{m})\f$ Angular wavenumber at which to find spectral radiance at in radians per meter.
    *   @return \f$B_{k}\ ( \dfrac{W}{sr\ m\ rad})\f$ Spectral radiance of a black body at the angular wavenumber, \f$k\f$, in watts per steradian meter radian.
    *   @see SpectralRadianceFromAngularWavenumber for alias.
    *   @see PlancksLawFromFrequency for spectral radiance calulations using frequency.
    *   @see PlancksLawFromWavelength for spectral radiance calulations using wavelenght.
    *   @see PlancksLawFromWavenumber for spectral radiance calulations using wavenumber.
    *   @see PlancksLawFromAngularFrequency for spectral radiance calulations using angular frequency.
    *   @see PlancksLawFromAngularWavelength for spectral radiance calulations using angular wavelenght.
    */
    template<typename T>
    T PlancksLawFromAngularWavenumber(const T angularWavenumberInRadianPerm, const T surfaceTempretureInK);
    /// @}
} //namespace EGXPhys

#include "PlancksLaw.inl"
