/// @file EGXMath/Conversions/LengthConversions/Non-SI/AngstromConversion.hpp
///
/// @brief Converts length measurements in angstroms into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil 
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-Angstrom Angstrom
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-Angstrom-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-Angstrom

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-Angstrom-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-Angstrom

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-Angstrom-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-Angstrom

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-Angstrom-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-Angstrom

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-Angstrom-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-Angstrom

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-Angstrom-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-Angstrom

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-Angstrom-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in angstroms to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{\unicode{x212B}} * 10^{-10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T AngstromToAstronomicalUnit(const T lengthInAngstrom);

    /**
    *   @brief Converts a length angstroms in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{\unicode{x212B}} * 10^{-10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T AngstromToLightYear(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{\unicode{x212B}} * 10^{-10}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T AngstromToParsec(const T lengthInAngstrom);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-Angstrom-SI
    /// @{
    /**
    *   @brief Converts a length in angstroms to meters.
    *		\f[ l_{m}=l_{\unicode{x212B}} * 10^{-10} \f]
    *
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T AngstromToMeter(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to yottameters.
    *		\f[ l_{Ym}=l_{\unicode{x212B}} * 10^{-34} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T AngstromToYottameter(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to zettameters.
    *		\f[ l_{Zm}=l_{\unicode{x212B}} * 10^{-31} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T AngstromToZettameter(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to exameters.
    *		\f[ l_{Em}=l_{\unicode{x212B}} * 10^{-28} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T AngstromToExameter(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to petameters.
    *		\f[ l_{Pm}=l_{\unicode{x212B}} * 10^{-25} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T AngstromToPetameter(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to terameters.
    *		\f[ l_{Tm}=l_{\unicode{x212B}} * 10^{-22} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T AngstromToTerameter(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to gigameters.
    *		\f[ l_{Gm}=l_{\unicode{x212B}} * 10^{-19} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T AngstromToGigameter(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to megameters.
    *		\f[ l_{Mm}=l_{\unicode{x212B}} * 10^{-16} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T AngstromToMegameter(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to kilometers.
    *		\f[ l_{km}=l_{\unicode{x212B}} * 10^{-13} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T AngstromToKilometer(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to hectometers.
    *		\f[ l_{hm}=l_{\unicode{x212B}} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T AngstromToHectometer(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to decameters.
    *		\f[ l_{dam}=l_{\unicode{x212B}} * 10^{-11} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T AngstromToDecameter(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to decimeters.
    *		\f[ l_{dm}=l_{\unicode{x212B}} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T AngstromToDecimeter(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to centimeters.
    *		\f[ l_{cm}=l_{\unicode{x212B}} * 10^{-8} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T AngstromToCentimeter(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to millimeters.
    *		\f[ l_{mm}=l_{\unicode{x212B}} * 10^{-7} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T AngstromToMillimeter(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to micrometers.
    *		\f[ l_{\mu m}=l_{\unicode{x212B}} * 10^{-4} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see AngstromToMicron() for alias.
    */
    template<typename T>
    T AngstromToMicrometer(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to nanometers.
    *		\f[ l_{nm}=l_{\unicode{x212B}} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see AngstromToMicron() for alias.
    */
    template<typename T>
    T AngstromToNanometer(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to picometers.
    *		\f[ l_{pm}=l_{\unicode{x212B}} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see AngstromToAngstrom() for angstrom conversion.
    *   @see AngstromToCuXUnit() for copper x unit conversion.
    *   @see AngstromToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T AngstromToPicometer(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to femtometers.
    *		\f[ l_{fm}=l_{\unicode{x212B}} * 10^{5} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see AngstromToFermi() for alias.
    */
    template<typename T>
    T AngstromToFemtometer(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to attometers.
    *		\f[ l_{am}=l_{\unicode{x212B}} * 10^{8} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T AngstromToAttometer(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to zeptometers.
    *		\f[ l_{zm}=l_{\unicode{x212B}} * 10^{11} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T AngstromToZeptometer(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to yoctometers.
    *		\f[ l_{ym}=l_{\unicode{x212B}} * 10^{14} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T AngstromToYoctometer(const T lengthInAngstrom);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-Angstrom-Non-SI
    /// @{

    /**
    *   @brief Converts a length in angstroms to fermis.
    *		\f[ l_{fm}=l_{\unicode{x212B}} * 10^{5} \f]
    *
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T AngstromToFermi(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to microns.
    *		\f[ l_{\mu m}=l_{\unicode{x212B}} * 10^{-4} \f]
    *
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see AngstromToMicrometer() for alias.
    */
    template<typename T>
    T AngstromToMicron(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{\unicode{x212B}} * 10^{-10}\f]
    *
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ (xu)\f$ Length in copper x units.
    *   @see AngstromToAngstrom() for angstrom conversion.
    *   @see AngstromToPicometer() for picometer conversion.
    *   @see AngstromToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T AngstromToCuXUnit(const T lengthInAngstrom);
   
    /**
    *   @brief Converts a length in angstroms to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{\unicode{x212B}} * 10^{-10}\f]
    *
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see AngstromToAngstrom() for angstrom conversion.
    *   @see AngstromToPicometer() for picometer conversion.
    *   @see AngstromToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T AngstromToMoXUnit(const T lengthInAngstrom);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-Angstrom-Imperial
    /// @{

    /**
    *   @brief Converts a length in angstroms to miles.
    *		\f[ l_{mi}=\frac{10^{-10}}{0.0254 * 63360} l_{\unicode{x212B}} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T AngstromToMile(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to yards.
    *		\f[ l_{yd}=  \frac{10^{-10}}{0.0254 * 36} l_{\unicode{x212B}}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T AngstromToYard(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to feet.
    *		\f[ l_{ft}= \frac{10^{-10}}{0.0254 * 12} l_{\unicode{x212B}} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T AngstromToFoot(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to inches.
    *		\f[ l_{in}=  \frac{10^{-10}}{0.0254} l_{\unicode{x212B}} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T AngstromToInch(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-10}}{0.0254} l_{\unicode{x212B}} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see AngstromToThou() for alias.
    */
    template<typename T>
    T AngstromToMil(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-10}}{0.0254} l_{\unicode{x212B}} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see AngstromToMil() for alias.
    */
    template<typename T>
    T AngstromToThou(const T lengthInAngstrom);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-Angstrom-Nautical
    /// @{

    /**
    *   @brief Converts a length in angstroms to nautical mile.
    *		\f[ l_{NM}= \frac{10^{-10}}{1852} l_{\unicode{x212B}}  \f]
    *
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T AngstromToNauticalMile(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to fathoms.
    *		\f[ l_{fathom}= \frac{10^{-10}}{0.0254 * 72} l_{\unicode{x212B}}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T AngstromToFathom(const T lengthInAngstrom);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-Angstrom-Surveyors
    /// @{

    /**
    *   @brief Converts a length in angstroms to rods.
    *		\f[ l_{rod}= \frac{10^{-10}}{0.0254 * 198} l_{\unicode{x212B}} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T AngstromToRod(const T lengthInAngstrom);

    /**
    *   @brief Converts a length in angstroms to chains.
    *		\f[ l_{ch}= \frac{10^{-10}}{0.0254 * 792}  l_{\unicode{x212B}} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInAngstrom \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T AngstromToChain(const T lengthInAngstrom);

	/// @}
} //namespace EGXMath

#include "AngstromConversion.inl"
