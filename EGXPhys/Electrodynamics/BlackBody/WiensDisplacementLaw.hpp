/// @file EGXPhys/Electrodynamics/BlackBody/WiensDisplacementLaw.hpp
///
/// @brief Calculates the peak wavelength/frequency of a black body using Wien's Displacement Law.
///
/// @author Elliot Grafil (Metex)
/// @date 5/25/18

/// @defgroup EGXPhys-Electrodynamics-BlackBody-WiensDisplacementLaw Wien's Displacement Law
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


namespace EGXPhys
{
	/// @addtogroup EGXPhys-Electrodynamics-BlackBody-WiensDisplacementLaw
	/// @{
	
	/**
	*   @brief Calculates the peak wavelength, \f$\lambda_{max}\f$, in meters emmited by a black body using Wien's displacement law from the surface tempreture, \f$T\f$ of the black body. \f$b\f$ is a measured constant called Wien's displacement constant.
	*   		\f[\lambda_{max} = \dfrac{b_\lambda}{T} \f]
	*      
	*	See http://hyperphysics.phy-astr.gsu.edu/hbase/wien.html and https://en.wikipedia.org/wiki/Wien%27s_displacement_law
	*
	*   @param surfaceTempInK \f$T\ (K)\f$ Surface tempreture of the black body in kelvin.
	*   @return \f$\lambda_{max}\ (m)\f$ Peak wavelength emmited by black body in meters.
    *	@see WiensDisplacementLawInm() for alias.
    *	@see WiensDisplacementLawInHz() for peak frequency of the black body.
	*/
    template<typename T>
    T WiensDisplacementLaw(const T surfaceTempInK);

    /**
    *   @brief Calculates the peak wavelength, \f$\lambda_{max}\f$, in meters emmited by a black body using Wien's displacement law from the surface tempreture, \f$T\f$ of the black body. \f$b\f$ is a measured constant called Wien's displacement constant.
    *   		\f[\lambda_{max} = \dfrac{b_\lambda}{T} \f]
    *
    *	See http://hyperphysics.phy-astr.gsu.edu/hbase/wien.html and https://en.wikipedia.org/wiki/Wien%27s_displacement_law
    *
    *   @param surfaceTempInK \f$T\ (K)\f$ Surface tempreture of the black body in kelvin.
    *   @return \f$\lambda_{max}\ (m)\f$ Peak wavelength emmited by black body in meters.
    *	@see WiensDisplacementLawInm() for alias.
    *	@see WiensDisplacementLawInHz() for peak frequency of the black body.
    */
    template<typename T>
    T WiensDisplacementLawInm(const T surfaceTempInK);

    /**
    *   @brief Calculates the peak frequency, \f$\nu_{max}\f$, in Hz emmited by a black body using Wien's displacement law from the surface tempreture, \f$T\f$ of the black body. \f$b\f$ is a measured constant called Wien's displacement constant.
    *   		\f[\nu_{max} = b_\nu\ T \f]
    *
    *	See http://hyperphysics.phy-astr.gsu.edu/hbase/wien.html and https://en.wikipedia.org/wiki/Wien%27s_displacement_law
    *
    *   @param surfaceTempInK \f$T\ (K)\f$ Surface tempreture of the black body in kelvin.
    *   @return \f$\nu_{max}\ (Hz)\f$ Peak frequency emmited by black body in Hz.
    *	@see WiensDisplacementLaw() for peak wavelength of the black body.
    *	@see WiensDisplacementLawInm() for peak wavelength of the black body.
    */
    template<typename T>
    T WiensDisplacementLawInHz(const T surfaceTempInK);

    /// @}
} //namespace EGXPhys

#include "WiensDisplacementLaw.inl"
