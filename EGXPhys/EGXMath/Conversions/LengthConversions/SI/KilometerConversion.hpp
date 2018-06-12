/// @file EGXMath/Conversions/LengthConversions/SI/KilometerConversion.hpp
///
/// @brief Converts length measurements in kilometers into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Kilometer Kilometer
/// @ingroup EGXMath-Conversions-LengthConversions-SI

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Kilometer-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Kilometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Kilometer-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Kilometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Kilometer-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Kilometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Kilometer-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Kilometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Kilometer-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Kilometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Kilometer-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Kilometer

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-SI-Kilometer-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in kilometers to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{km} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T KilometerToAstronomicalUnit(const T lengthInKilometer);

    /**
    *   @brief Converts a length kilometers in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{km} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T KilometerToLightYear(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{km} * 10^{3}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T KilometerToParsec(const T lengthInKilometer);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Kilometer-SI
    /// @{
    /**
    *   @brief Converts a length in kilometers to meters.
    *		\f[ l_{m}=l_{km} * 10^{3} \f]
    *
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T KilometerToMeter(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to yottameters.
    *		\f[ l_{Ym}=l_{km} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T KilometerToYottameter(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to zettameters.
    *		\f[ l_{Zm}=l_{km} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T KilometerToZettameter(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to exameters.
    *		\f[ l_{Em}=l_{km} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T KilometerToExameter(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to petameters.
    *		\f[ l_{Pm}=l_{km} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T KilometerToPetameter(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to terameters.
    *		\f[ l_{Tm}=l_{km} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T KilometerToTerameter(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to gigameters.
    *		\f[ l_{Gm}=l_{km} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T KilometerToGigameter(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to megameters.
    *		\f[ l_{Mm}=l_{km} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T KilometerToMegameter(const T lengthInKilometer);


    /**
    *   @brief Converts a length in kilometers to hectometers.
    *		\f[ l_{hm}=l_{km} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T KilometerToHectometer(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to decameters.
    *		\f[ l_{dam}=l_{km} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T KilometerToDecameter(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to decimeters.
    *		\f[ l_{dm}=l_{km} * 10^{4} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T KilometerToDecimeter(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to centimeters.
    *		\f[ l_{cm}=l_{km} * 10^{5} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T KilometerToCentimeter(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to millimeters.
    *		\f[ l_{mm}=l_{km} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T KilometerToMillimeter(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to micrometers.
    *		\f[ l_{\mu m}=l_{km} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see KilometerToMicron() for alias.
    */
    template<typename T>
    T KilometerToMicrometer(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to nanometers.
    *		\f[ l_{nm}=l_{km} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see KilometerToMicron() for alias.
    */
    template<typename T>
    T KilometerToNanometer(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to picometers.
    *		\f[ l_{pm}=l_{km} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see KilometerToAngstrom() for angstrom conversion.
    *   @see KilometerToCuXUnit() for copper x unit conversion.
    *   @see KilometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T KilometerToPicometer(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to femtometers.
    *		\f[ l_{fm}=l_{km} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see KilometerToFermi() for alias.
    */
    template<typename T>
    T KilometerToFemtometer(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to attometers.
    *		\f[ l_{am}=l_{km} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T KilometerToAttometer(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to zeptometers.
    *		\f[ l_{zm}=l_{km} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T KilometerToZeptometer(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to yoctometers.
    *		\f[ l_{ym}=l_{km} * 10^{27} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T KilometerToYoctometer(const T lengthInKilometer);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Kilometer-Non-SI
    /// @{

    /**
    *   @brief Converts a length in kilometers to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{km} * 10^{13} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see KilometerToPicometer() for picometer conversion.
    *   @see KilometerToCuXUnit() for copper x unit conversion.
    *   @see KilometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T KilometerToAngstrom(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to fermis.
    *		\f[ l_{fm}=l_{km} * 10^{18} \f]
    *
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T KilometerToFermi(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to microns.
    *		\f[ l_{\mu m}=l_{km} * 10^{9} \f]
    *
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see KilometerToMicrometer() for alias.
    */
    template<typename T>
    T KilometerToMicron(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{km} * 10^{3}\f]
    *
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see KilometerToAngstrom() for angstrom conversion.
    *   @see KilometerToPicometer() for picometer conversion.
    *   @see KilometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T KilometerToCuXUnit(const T lengthInKilometer);
   
    /**
    *   @brief Converts a length in kilometers to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{km} * 10^{3}\f]
    *
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see KilometerToAngstrom() for angstrom conversion.
    *   @see KilometerToPicometer() for picometer conversion.
    *   @see KilometerToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T KilometerToMoXUnit(const T lengthInKilometer);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Kilometer-Imperial
    /// @{

    /**
    *   @brief Converts a length in kilometers to miles.
    *		\f[ l_{mi}=\frac{10^{3}}{0.0254 * 63360} l_{km} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T KilometerToMile(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to yards.
    *		\f[ l_{yd}=  \frac{10^{3}}{0.0254 * 36} l_{km}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T KilometerToYard(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to feet.
    *		\f[ l_{ft}= \frac{10^{3}}{0.0254 * 12} l_{km} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T KilometerToFoot(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to inches.
    *		\f[ l_{in}=  \frac{10^{3}}{0.0254} l_{km} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T KilometerToInch(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{3}}{0.0254} l_{km} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see KilometerToThou() for alias.
    */
    template<typename T>
    T KilometerToMil(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{3}}{0.0254} l_{km} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see KilometerToMil() for alias.
    */
    template<typename T>
    T KilometerToThou(const T lengthInKilometer);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Kilometer-Nautical
    /// @{

    /**
    *   @brief Converts a length in kilometers to nautical mile.
    *		\f[ l_{NM}= \frac{10^{3}}{1852} l_{km}  \f]
    *
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T KilometerToNauticalMile(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to fathoms.
    *		\f[ l_{fathom}= \frac{10^{3}}{0.0254 * 72} l_{km}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T KilometerToFathom(const T lengthInKilometer);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Kilometer-Surveyors
    /// @{

    /**
    *   @brief Converts a length in kilometers to rods.
    *		\f[ l_{rod}= \frac{10^{3}}{0.0254 * 198} l_{km} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T KilometerToRod(const T lengthInKilometer);

    /**
    *   @brief Converts a length in kilometers to chains.
    *		\f[ l_{ch}= \frac{10^{3}}{0.0254 * 792}  l_{km} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInKilometer \f$ l_{km}\ (km)\f$ Length in kilometers.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T KilometerToChain(const T lengthInKilometer);

	/// @}
} //namespace EGXMath

#include "KilometerConversion.inl"
