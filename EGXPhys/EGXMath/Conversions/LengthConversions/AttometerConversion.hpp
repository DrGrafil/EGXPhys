/// @file EGXMath/Conversions/LengthConversions/AttometerConversion.hpp
///
/// @brief Converts length measurements in attometers into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/1/18

/// @defgroup EGXMath-Conversions-LengthConversions-Attometer Attometer
/// @ingroup EGXMath-Conversions-LengthConversions

/// @defgroup EGXMath-Conversions-LengthConversions-Attometer-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Attometer

/// @defgroup EGXMath-Conversions-LengthConversions-Attometer-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Attometer

/// @defgroup EGXMath-Conversions-LengthConversions-Attometer-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Attometer

/// @defgroup EGXMath-Conversions-LengthConversions-Attometer-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Attometer

/// @defgroup EGXMath-Conversions-LengthConversions-Attometer-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Attometer

/// @defgroup EGXMath-Conversions-LengthConversions-Attometer-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Attometer

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Attometer-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in attometers to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{am} * 10^{-18}\f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T AttometerToAstronomicalUnit(const T lengthInAttometer);

    /**
    *   @brief Converts a length attometers in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{am} * 10^{-18}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T AttometerToLightYear(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{am} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T AttometerToParsec(const T lengthInAttometer);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Attometer-SI
    /// @{
    /**
    *   @brief Converts a length in attometers to meters.
    *		\f[ l_{m}=l_{am}* 10^{-18} \f]
    *
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T AttometerToMeter(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to yottameters.
    *		\f[ l_{Ym}=l_{am} * 10^{-42} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T AttometerToYottameter(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to zettameters.
    *		\f[ l_{Zm}=l_{am} * 10^{-39} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T AttometerToZettameter(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to exameters.
    *		\f[ l_{Em}=l_{am} * 10^{-36} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T AttometerToExameter(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to petameters.
    *		\f[ l_{Pm}=l_{am} * 10^{-33} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T AttometerToPetameter(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to terameters.
    *		\f[ l_{Tm}=l_{am} * 10^{-30} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T AttometerToTerameter(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to gigameters.
    *		\f[ l_{Gm}=l_{am} * 10^{-27} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T AttometerToGigameter(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to megameters.
    *		\f[ l_{Mm}=l_{am} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T AttometerToMegameter(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to kilometers.
    *		\f[ l_{km}=l_{am} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T AttometerToKilometer(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to hectometers.
    *		\f[ l_{hm}=l_{am} * 10^{-20} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T AttometerToHectometer(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to decameters.
    *		\f[ l_{dam}=l_{am} * 10^{-19} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T AttometerToDecameter(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to decimeters.
    *		\f[ l_{dm}=l_{am} * 10^{-17} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T AttometerToDecimeter(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to centimeters.
    *		\f[ l_{cm}=l_{am} * 10^{-16} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T AttometerToCentimeter(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to millimeters.
    *		\f[ l_{m}=l_{am} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T AttometerToMillimeter(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to micrometers.
    *		\f[ l_{\mu m}=l_{am} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see AttometerToMicron() for alias.
    */
    template<typename T>
    T AttometerToMicrometer(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to nanometers.
    *		\f[ l_{nm}=l_{am} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see AttometerToMicron() for alias.
    */
    template<typename T>
    T AttometerToNanometer(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to picometers.
    *		\f[ l_{pm}=l_{am} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see AttometerToAngstrom() for angstrom conversion.
    *   @see AttometerToCuXUnit() for copper x unit conversion.
    *   @see AttometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T AttometerToPicometer(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to femtometers.
    *		\f[ l_{fm}=l_{am} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see AttometerToFermi() for alias.
    */
    template<typename T>
    T AttometerToFemtometer(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to zeptometers.
    *		\f[ l_{zm}=l_{am} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T AttometerToZeptometer(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to Yoctometers.
    *		\f[ l_{ym}=l_{am} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T AttometerToYoctometer(const T lengthInAttometer);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Attometer-Non-SI
    /// @{
    
    /**
    *   @brief Converts a length in attometers to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{am} * 10^{-8} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see AttometerToPicometer() for picometer conversion.
    *   @see AttometerToCuXUnit() for copper x unit conversion.
    *   @see AttometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T AttometerToAngstrom(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to fermis.
    *		\f[ l_{fm}=l_{am} * 10^{-3} \f]
    *
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T AttometerToFermi(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to microns.
    *		\f[ l_{\mu m}=l_{am} * 10^{-12} \f]
    *
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see AttometerToMicrometer() for alias.
    */
    template<typename T>
    T AttometerToMicron(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{am} * 10^{-18} \f]
    *
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see AttometerToAngstrom() for angstrom conversion.
    *   @see AttometerToPicometer() for picometer conversion.
    *   @see AttometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T AttometerToCuXUnit(const T lengthInAttometer);
   
    /**
    *   @brief Converts a length in attometers to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{am} * 10^{-18}  \f]
    *
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see AttometerToAngstrom() for angstrom conversion.
    *   @see AttometerToPicometer() for picometer conversion.
    *   @see AttometerToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T AttometerToMoXUnit(const T lengthInAttometer);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Attometer-Imperial
    /// @{
    
    /**
    *   @brief Converts a length in attometers to miles.
    *		\f[ l_{mi}=\frac{10^{-18}}{0.0254 * 63360} l_{am} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T AttometerToMile(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to yards.
    *		\f[ l_{yd}= \frac{10^{-18}}{0.0254 * 36} l_{am}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T AttometerToYard(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to feet.
    *		\f[ l_{ft}= \frac{10^{-18}}{0.0254 * 12} l_{am} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T AttometerToFoot(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to inches.
    *		\f[ l_{in}= \frac{10^{-18}}{0.0254} l_{am} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T AttometerToInch(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-18}}{0.0254} l_{am} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see AttometerToThou() for alias.
    */
    template<typename T>
    T AttometerToMil(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-18}}{0.0254} l_{am} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see AttometerToMil() for alias.
    */
    template<typename T>
    T AttometerToThou(const T lengthInAttometer);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Attometer-Nautical
    /// @{

    /**
    *   @brief Converts a length in attometers to nautical mile.
    *		\f[ l_{NM}= \frac{10^{-18}}{0.0254 * 1852} l_{am}  \f]
    *
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T AttometerToNauticalMile(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to fathoms.
    *		\f[ l_{fathom}= \frac{10^{-18}}{0.0254 * 72} l_{am}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T AttometerToFathom(const T lengthInAttometer);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Attometer-Surveyors
    /// @{

    /**
    *   @brief Converts a length in attometers to rods.
    *		\f[ l_{rod}= \frac{10^{-18}}{0.0254 * 198} l_{am} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T AttometerToRod(const T lengthInAttometer);

    /**
    *   @brief Converts a length in attometers to chains.
    *		\f[ l_{ch}= \frac{10^{-18}}{0.0254 * 792} l_{am} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInAttometer \f$ l_{am}\ (am)\f$ Length in attometers.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T AttometerToChain(const T lengthInAttometer);

	/// @}
} //namespace EGXMath

#include "AttometerConversion.inl"
