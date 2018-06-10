/// @file EGXMath/Conversions/LengthConversions/SI/NanometerConversion.hpp
///
/// @brief Converts length measurements in nanometers into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/9/18

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Nanometer Nanometer
/// @ingroup EGXMath-Conversions-LengthConversions-SI

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Nanometer-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Nanometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Nanometer-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Nanometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Nanometer-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Nanometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Nanometer-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Nanometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Nanometer-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Nanometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Nanometer-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Nanometer

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-SI-Nanometer-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in nanometers to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{nm} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T NanometerToAstronomicalUnit(const T lengthInNanometer);

    /**
    *   @brief Converts a length nanometers in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{nm} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T NanometerToLightYear(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{nm} * 10^{-9}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T NanometerToParsec(const T lengthInNanometer);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Nanometer-SI
    /// @{
    /**
    *   @brief Converts a length in nanometers to meters.
    *		\f[ l_{m}=l_{nm} * 10^{-9} \f]
    *
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T NanometerToMeter(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to yottameters.
    *		\f[ l_{Ym}=l_{nm} * 10^{-33} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T NanometerToYottameter(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to zettameters.
    *		\f[ l_{Zm}=l_{nm} * 10^{-30} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T NanometerToZettameter(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to exameters.
    *		\f[ l_{Em}=l_{nm} * 10^{-27} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T NanometerToExameter(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to petameters.
    *		\f[ l_{Pm}=l_{nm} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T NanometerToPetameter(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to terameters.
    *		\f[ l_{Tm}=l_{nm} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T NanometerToTerameter(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to gigameters.
    *		\f[ l_{Gm}=l_{nm} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T NanometerToGigameter(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to megameters.
    *		\f[ l_{Mm}=l_{nm} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T NanometerToMegameter(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to kilometers.
    *		\f[ l_{km}=l_{nm} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T NanometerToKilometer(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to hectometers.
    *		\f[ l_{hm}=l_{nm} * 10^{-11} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T NanometerToHectometer(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to decameters.
    *		\f[ l_{dam}=l_{nm} * 10^{-10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T NanometerToDecameter(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to decimeters.
    *		\f[ l_{dm}=l_{nm} * 10^{-8} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T NanometerToDecimeter(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to centimeters.
    *		\f[ l_{cm}=l_{nm} * 10^{-7} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T NanometerToCentimeter(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to millimeters.
    *		\f[ l_{mm}=l_{nm} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T NanometerToMillimeter(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to micrometers.
    *		\f[ l_{\mu m}=l_{nm} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see NanometerToMicron() for alias.
    */
    template<typename T>
    T NanometerToMicrometer(const T lengthInNanometer);


    /**
    *   @brief Converts a length in nanometers to picometers.
    *		\f[ l_{pm}=l_{nm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see NanometerToAngstrom() for angstrom conversion.
    *   @see NanometerToCuXUnit() for copper x unit conversion.
    *   @see NanometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T NanometerToPicometer(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to femtometers.
    *		\f[ l_{fm}=l_{nm} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see NanometerToFermi() for alias.
    */
    template<typename T>
    T NanometerToFemtometer(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to attometers.
    *		\f[ l_{am}=l_{nm} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T NanometerToAttometer(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to zeptometers.
    *		\f[ l_{zm}=l_{nm} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T NanometerToZeptometer(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to yoctometers.
    *		\f[ l_{ym}=l_{nm} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T NanometerToYoctometer(const T lengthInNanometer);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Nanometer-Non-SI
    /// @{

    /**
    *   @brief Converts a length in nanometers to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{nm} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see NanometerToPicometer() for picometer conversion.
    *   @see NanometerToCuXUnit() for copper x unit conversion.
    *   @see NanometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T NanometerToAngstrom(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to fermis.
    *		\f[ l_{fm}=l_{nm} * 10^{6} \f]
    *
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T NanometerToFermi(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to microns.
    *		\f[ l_{\mu m}=l_{nm} * 10^{-3} \f]
    *
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see NanometerToMicrometer() for alias.
    */
    template<typename T>
    T NanometerToMicron(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{nm} * 10^{-9}\f]
    *
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see NanometerToAngstrom() for angstrom conversion.
    *   @see NanometerToPicometer() for picometer conversion.
    *   @see NanometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T NanometerToCuXUnit(const T lengthInNanometer);
   
    /**
    *   @brief Converts a length in nanometers to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{nm} * 10^{-9}\f]
    *
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see NanometerToAngstrom() for angstrom conversion.
    *   @see NanometerToPicometer() for picometer conversion.
    *   @see NanometerToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T NanometerToMoXUnit(const T lengthInNanometer);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Nanometer-Imperial
    /// @{

    /**
    *   @brief Converts a length in nanometers to miles.
    *		\f[ l_{mi}=\frac{10^{-9}}{0.0254 * 63360} l_{nm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T NanometerToMile(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to yards.
    *		\f[ l_{yd}=  \frac{10^{-9}}{0.0254 * 36} \frac{1}{36} l_{nm}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T NanometerToYard(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to feet.
    *		\f[ l_{ft}= \frac{10^{-9}}{0.0254 * 12} l_{nm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T NanometerToFoot(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to inches.
    *		\f[ l_{in}=  \frac{10^{-9}}{0.0254} l_{nm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T NanometerToInch(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-9}}{0.0254} l_{nm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see NanometerToThou() for alias.
    */
    template<typename T>
    T NanometerToMil(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-9}}{0.0254} l_{nm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see NanometerToMil() for alias.
    */
    template<typename T>
    T NanometerToThou(const T lengthInNanometer);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Nanometer-Nautical
    /// @{

    /**
    *   @brief Converts a length in nanometers to nautical mile.
    *		\f[ l_{NM}= \frac{10^{-9}}{0.0254 * 1852} l_{nm}  \f]
    *
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T NanometerToNauticalMile(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to fathoms.
    *		\f[ l_{fathom}= \frac{10^{-9}}{0.0254 * 72} l_{nm}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T NanometerToFathom(const T lengthInNanometer);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Nanometer-Surveyors
    /// @{

    /**
    *   @brief Converts a length in nanometers to rods.
    *		\f[ l_{rod}= \frac{10^{-9}}{0.0254 * 198} l_{nm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T NanometerToRod(const T lengthInNanometer);

    /**
    *   @brief Converts a length in nanometers to chains.
    *		\f[ l_{ch}= \frac{10^{-9}}{0.0254 * 792}  l_{nm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInNanometer \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T NanometerToChain(const T lengthInNanometer);

	/// @}
} //namespace EGXMath

#include "NanometerConversion.inl"
