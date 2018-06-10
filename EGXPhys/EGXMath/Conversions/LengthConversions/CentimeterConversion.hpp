/// @file EGXMath/Conversions/LengthConversions/CentimeterConversion.hpp
///
/// @brief Converts length measurements in centimeters into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-Centimeter Centimeter
/// @ingroup EGXMath-Conversions-LengthConversions

/// @defgroup EGXMath-Conversions-LengthConversions-Centimeter-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Centimeter

/// @defgroup EGXMath-Conversions-LengthConversions-Centimeter-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Centimeter

/// @defgroup EGXMath-Conversions-LengthConversions-Centimeter-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Centimeter

/// @defgroup EGXMath-Conversions-LengthConversions-Centimeter-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Centimeter

/// @defgroup EGXMath-Conversions-LengthConversions-Centimeter-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Centimeter

/// @defgroup EGXMath-Conversions-LengthConversions-Centimeter-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Centimeter

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Centimeter-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in centimeters to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{cm} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T CentimeterToAstronomicalUnit(const T lengthInCentimeter);

    /**
    *   @brief Converts a length centimeters in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{cm} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T CentimeterToLightYear(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{cm} * 10^{-2}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T CentimeterToParsec(const T lengthInCentimeter);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Centimeter-SI
    /// @{
    /**
    *   @brief Converts a length in centimeters to meters.
    *		\f[ l_{m}=l_{cm} * 10^{-2} \f]
    *
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T CentimeterToMeter(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to yottameters.
    *		\f[ l_{Ym}=l_{cm} * 10^{-26} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T CentimeterToYottameter(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to zettameters.
    *		\f[ l_{Zm}=l_{cm} * 10^{-23} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T CentimeterToZettameter(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to exameters.
    *		\f[ l_{Em}=l_{cm} * 10^{-20} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T CentimeterToExameter(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to petameters.
    *		\f[ l_{Pm}=l_{cm} * 10^{-17} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T CentimeterToPetameter(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to terameters.
    *		\f[ l_{Tm}=l_{cm} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T CentimeterToTerameter(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to gigameters.
    *		\f[ l_{Gm}=l_{cm} * 10^{-11} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T CentimeterToGigameter(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to megameters.
    *		\f[ l_{Mm}=l_{cm} * 10^{-8} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T CentimeterToMegameter(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to kilometers.
    *		\f[ l_{km}=l_{cm} * 10^{-5} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T CentimeterToKilometer(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to hectometers.
    *		\f[ l_{hm}=l_{cm} * 10^{-4} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T CentimeterToHectometer(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to decameters.
    *		\f[ l_{dam}=l_{cm} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T CentimeterToDecameter(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to decimeters.
    *		\f[ l_{dm}=l_{cm} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T CentimeterToDecimeter(const T lengthInCentimeter);


    /**
    *   @brief Converts a length in centimeters to millimeters.
    *		\f[ l_{mm}=l_{cm} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T CentimeterToMillimeter(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to micrometers.
    *		\f[ l_{\mu m}=l_{cm} * 10^{4} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see CentimeterToMicron() for alias.
    */
    template<typename T>
    T CentimeterToMicrometer(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to nanometers.
    *		\f[ l_{nm}=l_{cm} * 10^{7} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see CentimeterToMicron() for alias.
    */
    template<typename T>
    T CentimeterToNanometer(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to picometers.
    *		\f[ l_{pm}=l_{cm} * 10^{10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see CentimeterToAngstrom() for angstrom conversion.
    *   @see CentimeterToCuXUnit() for copper x unit conversion.
    *   @see CentimeterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T CentimeterToPicometer(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to femtometers.
    *		\f[ l_{fm}=l_{cm} * 10^{13} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see CentimeterToFermi() for alias.
    */
    template<typename T>
    T CentimeterToFemtometer(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to attometers.
    *		\f[ l_{am}=l_{cm} * 10^{16} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T CentimeterToAttometer(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to zeptometers.
    *		\f[ l_{zm}=l_{cm} * 10^{19} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T CentimeterToZeptometer(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to yoctometers.
    *		\f[ l_{ym}=l_{cm} * 10^{22} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T CentimeterToYoctometer(const T lengthInCentimeter);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Centimeter-Non-SI
    /// @{

    /**
    *   @brief Converts a length in centimeters to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{cm} * 10^{8} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see CentimeterToPicometer() for picometer conversion.
    *   @see CentimeterToCuXUnit() for copper x unit conversion.
    *   @see CentimeterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T CentimeterToAngstrom(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to fermis.
    *		\f[ l_{fm}=l_{cm} * 10^{13} \f]
    *
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T CentimeterToFermi(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to microns.
    *		\f[ l_{\mu m}=l_{cm} * 10^{4} \f]
    *
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see CentimeterToMicrometer() for alias.
    */
    template<typename T>
    T CentimeterToMicron(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{cm} * 10^{-2}\f]
    *
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see CentimeterToAngstrom() for angstrom conversion.
    *   @see CentimeterToPicometer() for picometer conversion.
    *   @see CentimeterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T CentimeterToCuXUnit(const T lengthInCentimeter);
   
    /**
    *   @brief Converts a length in centimeters to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{cm} * 10^{-2}\f]
    *
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see CentimeterToAngstrom() for angstrom conversion.
    *   @see CentimeterToPicometer() for picometer conversion.
    *   @see CentimeterToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T CentimeterToMoXUnit(const T lengthInCentimeter);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Centimeter-Imperial
    /// @{

    /**
    *   @brief Converts a length in centimeters to miles.
    *		\f[ l_{mi}=\frac{10^{-2}}{0.0254 * 63360} l_{cm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T CentimeterToMile(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to yards.
    *		\f[ l_{yd}=  \frac{10^{-2}}{0.0254 * 36} \frac{1}{36} l_{cm}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T CentimeterToYard(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to feet.
    *		\f[ l_{ft}= \frac{10^{-2}}{0.0254 * 12} l_{cm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T CentimeterToFoot(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to inches.
    *		\f[ l_{in}=  \frac{10^{-2}}{0.0254} l_{cm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T CentimeterToInch(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-2}}{0.0254} l_{cm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see CentimeterToThou() for alias.
    */
    template<typename T>
    T CentimeterToMil(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-2}}{0.0254} l_{cm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see CentimeterToMil() for alias.
    */
    template<typename T>
    T CentimeterToThou(const T lengthInCentimeter);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Centimeter-Nautical
    /// @{

    /**
    *   @brief Converts a length in centimeters to nautical mile.
    *		\f[ l_{NM}= \frac{10^{-2}}{0.0254 * 1852} l_{cm}  \f]
    *
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T CentimeterToNauticalMile(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to fathoms.
    *		\f[ l_{fathom}= \frac{10^{-2}}{0.0254 * 72} l_{cm}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T CentimeterToFathom(const T lengthInCentimeter);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Centimeter-Surveyors
    /// @{

    /**
    *   @brief Converts a length in centimeters to rods.
    *		\f[ l_{rod}= \frac{10^{-2}}{0.0254 * 198} l_{cm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T CentimeterToRod(const T lengthInCentimeter);

    /**
    *   @brief Converts a length in centimeters to chains.
    *		\f[ l_{ch}= \frac{10^{-2}}{0.0254 * 792}  l_{cm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInCentimeter \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T CentimeterToChain(const T lengthInCentimeter);

	/// @}
} //namespace EGXMath

#include "CentimeterConversion.inl"
