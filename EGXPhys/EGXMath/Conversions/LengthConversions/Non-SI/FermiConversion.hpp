/// @file EGXMath/Conversions/LengthConversions/Non-SI/FermiConversion.hpp
///
/// @brief Converts length measurements in fermis into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-Fermi Fermi
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-Fermi-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-Fermi

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-Fermi-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-Fermi

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-Fermi-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-Fermi

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-Fermi-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-Fermi

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-Fermi-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-Fermi

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-Fermi-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-Fermi

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXMath
{
	/// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-Fermi-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in fermis to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{fm} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T FermiToAstronomicalUnit(const T lengthInFermi);

    /**
    *   @brief Converts a length fermis in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{fm} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T FermiToLightYear(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{fm} * 10^{-15}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T FermiToParsec(const T lengthInFermi);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-Fermi-SI
    /// @{
    /**
    *   @brief Converts a length in fermis to meters.
    *		\f[ l_{m}=l_{fm} * 10^{-15} \f]
    *
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T FermiToMeter(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to yottameters.
    *		\f[ l_{Ym}=l_{fm} * 10^{-39} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T FermiToYottameter(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to zettameters.
    *		\f[ l_{Zm}=l_{fm} * 10^{-36} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T FermiToZettameter(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to exameters.
    *		\f[ l_{Em}=l_{fm} * 10^{-33} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T FermiToExameter(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to petameters.
    *		\f[ l_{Pm}=l_{fm} * 10^{-30} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T FermiToPetameter(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to terameters.
    *		\f[ l_{Tm}=l_{fm} * 10^{-27} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T FermiToTerameter(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to gigameters.
    *		\f[ l_{Gm}=l_{fm} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T FermiToGigameter(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to megameters.
    *		\f[ l_{Mm}=l_{fm} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T FermiToMegameter(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to kilometers.
    *		\f[ l_{km}=l_{fm} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T FermiToKilometer(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to hectometers.
    *		\f[ l_{hm}=l_{fm} * 10^{-17} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T FermiToHectometer(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to decameters.
    *		\f[ l_{dam}=l_{fm} * 10^{-16} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T FermiToDecameter(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to decimeters.
    *		\f[ l_{dm}=l_{fm} * 10^{-14} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T FermiToDecimeter(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to centimeters.
    *		\f[ l_{cm}=l_{fm} * 10^{-13} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T FermiToCentimeter(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to millimeters.
    *		\f[ l_{mm}=l_{fm} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T FermiToMillimeter(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to micrometers.
    *		\f[ l_{\mu m}=l_{fm} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see FermiToMicron() for alias.
    */
    template<typename T>
    T FermiToMicrometer(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to nanometers.
    *		\f[ l_{nm}=l_{fm} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see FermiToMicron() for alias.
    */
    template<typename T>
    T FermiToNanometer(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to picometers.
    *		\f[ l_{pm}=l_{fm} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see FermiToAngstrom() for angstrom conversion.
    *   @see FermiToCuXUnit() for copper x unit conversion.
    *   @see FermiToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T FermiToPicometer(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to femtometers.
    *		\f[ l_{fm}=l_{fm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    */
    template<typename T>
    T FermiToFemtometer(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to attometers.
    *		\f[ l_{am}=l_{fm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T FermiToAttometer(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to zeptometers.
    *		\f[ l_{zm}=l_{fm} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T FermiToZeptometer(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to yoctometers.
    *		\f[ l_{ym}=l_{fm} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T FermiToYoctometer(const T lengthInFermi);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-Fermi-Non-SI
    /// @{

    /**
    *   @brief Converts a length in fermis to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{fm} * 10^{-5} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see FermiToPicometer() for picometer conversion.
    *   @see FermiToCuXUnit() for copper x unit conversion.
    *   @see FermiToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T FermiToAngstrom(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to microns.
    *		\f[ l_{\mu m}=l_{fm} * 10^{-9} \f]
    *
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see FermiToMicrometer() for alias.
    */
    template<typename T>
    T FermiToMicron(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{fm} * 10^{-15}\f]
    *
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see FermiToAngstrom() for angstrom conversion.
    *   @see FermiToPicometer() for picometer conversion.
    *   @see FermiToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T FermiToCuXUnit(const T lengthInFermi);
   
    /**
    *   @brief Converts a length in fermis to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{fm} * 10^{-15}\f]
    *
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see FermiToAngstrom() for angstrom conversion.
    *   @see FermiToPicometer() for picometer conversion.
    *   @see FermiToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T FermiToMoXUnit(const T lengthInFermi);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-Fermi-Imperial
    /// @{

    /**
    *   @brief Converts a length in fermis to miles.
    *		\f[ l_{mi}=\frac{10^{-15}}{0.0254 * 63360} l_{fm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T FermiToMile(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to yards.
    *		\f[ l_{yd}=  \frac{10^{-15}}{0.0254 * 36} l_{fm}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T FermiToYard(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to feet.
    *		\f[ l_{ft}= \frac{10^{-15}}{0.0254 * 12} l_{fm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T FermiToFoot(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to inches.
    *		\f[ l_{in}=  \frac{10^{-15}}{0.0254} l_{fm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T FermiToInch(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-15}}{0.0254} l_{fm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see FermiToThou() for alias.
    */
    template<typename T>
    T FermiToMil(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-15}}{0.0254} l_{fm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see FermiToMil() for alias.
    */
    template<typename T>
    T FermiToThou(const T lengthInFermi);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-Fermi-Nautical
    /// @{

    /**
    *   @brief Converts a length in fermis to nautical mile.
    *		\f[ l_{NM}= \frac{10^{-15}}{1852} l_{fm}  \f]
    *
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T FermiToNauticalMile(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to fathoms.
    *		\f[ l_{fathom}= \frac{10^{-15}}{0.0254 * 72} l_{fm}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T FermiToFathom(const T lengthInFermi);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-Fermi-Surveyors
    /// @{

    /**
    *   @brief Converts a length in fermis to rods.
    *		\f[ l_{rod}= \frac{10^{-15}}{0.0254 * 198} l_{fm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T FermiToRod(const T lengthInFermi);

    /**
    *   @brief Converts a length in fermis to chains.
    *		\f[ l_{ch}= \frac{10^{-15}}{0.0254 * 792}  l_{fm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInFermi \f$ l_{fm}\ (fm)\f$ Length in fermis.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T FermiToChain(const T lengthInFermi);

	/// @}
} //namespace EGXMath

#include "FermiConversion.inl"
