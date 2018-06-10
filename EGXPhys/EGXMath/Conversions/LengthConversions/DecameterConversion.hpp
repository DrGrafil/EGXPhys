/// @file EGXMath/Conversions/LengthConversions/DecameterConversion.hpp
///
/// @brief Converts length measurements in decameters into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-Decameter Decameter
/// @ingroup EGXMath-Conversions-LengthConversions

/// @defgroup EGXMath-Conversions-LengthConversions-Decameter-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Decameter

/// @defgroup EGXMath-Conversions-LengthConversions-Decameter-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Decameter

/// @defgroup EGXMath-Conversions-LengthConversions-Decameter-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Decameter

/// @defgroup EGXMath-Conversions-LengthConversions-Decameter-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Decameter

/// @defgroup EGXMath-Conversions-LengthConversions-Decameter-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Decameter

/// @defgroup EGXMath-Conversions-LengthConversions-Decameter-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Decameter

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Decameter-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in decameters to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{dam} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T DecameterToAstronomicalUnit(const T lengthInDecameter);

    /**
    *   @brief Converts a length decameters in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{dam} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T DecameterToLightYear(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{dam} * 10^{1}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T DecameterToParsec(const T lengthInDecameter);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Decameter-SI
    /// @{
    /**
    *   @brief Converts a length in decameters to meters.
    *		\f[ l_{m}=l_{dam} * 10^{1} \f]
    *
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T DecameterToMeter(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to yottameters.
    *		\f[ l_{Ym}=l_{dam} * 10^{-23} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T DecameterToYottameter(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to zettameters.
    *		\f[ l_{Zm}=l_{dam} * 10^{-20} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T DecameterToZettameter(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to exameters.
    *		\f[ l_{Em}=l_{dam} * 10^{-17} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T DecameterToExameter(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to petameters.
    *		\f[ l_{Pm}=l_{dam} * 10^{-14} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T DecameterToPetameter(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to terameters.
    *		\f[ l_{Tm}=l_{dam} * 10^{-11} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T DecameterToTerameter(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to gigameters.
    *		\f[ l_{Gm}=l_{dam} * 10^{-8} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T DecameterToGigameter(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to megameters.
    *		\f[ l_{Mm}=l_{dam} * 10^{-5} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T DecameterToMegameter(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to kilometers.
    *		\f[ l_{km}=l_{dam} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T DecameterToKilometer(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to hectometers.
    *		\f[ l_{hm}=l_{dam} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T DecameterToHectometer(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to decimeters.
    *		\f[ l_{dm}=l_{dam} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T DecameterToDecimeter(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to centimeters.
    *		\f[ l_{cm}=l_{dam} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T DecameterToCentimeter(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to millimeters.
    *		\f[ l_{mm}=l_{dam} * 10^{4} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T DecameterToMillimeter(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to micrometers.
    *		\f[ l_{\mu m}=l_{dam} * 10^{7} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see DecameterToMicron() for alias.
    */
    template<typename T>
    T DecameterToMicrometer(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to nanometers.
    *		\f[ l_{nm}=l_{dam} * 10^{10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see DecameterToMicron() for alias.
    */
    template<typename T>
    T DecameterToNanometer(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to picometers.
    *		\f[ l_{pm}=l_{dam} * 10^{13} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see DecameterToAngstrom() for angstrom conversion.
    *   @see DecameterToCuXUnit() for copper x unit conversion.
    *   @see DecameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T DecameterToPicometer(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to femtometers.
    *		\f[ l_{fm}=l_{dam} * 10^{16} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see DecameterToFermi() for alias.
    */
    template<typename T>
    T DecameterToFemtometer(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to attometers.
    *		\f[ l_{am}=l_{dam} * 10^{19} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T DecameterToAttometer(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to zeptometers.
    *		\f[ l_{zm}=l_{dam} * 10^{22} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T DecameterToZeptometer(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to yoctometers.
    *		\f[ l_{ym}=l_{dam} * 10^{25} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T DecameterToYoctometer(const T lengthInDecameter);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Decameter-Non-SI
    /// @{

    /**
    *   @brief Converts a length in decameters to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{dam} * 10^{11} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see DecameterToPicometer() for picometer conversion.
    *   @see DecameterToCuXUnit() for copper x unit conversion.
    *   @see DecameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T DecameterToAngstrom(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to fermis.
    *		\f[ l_{fm}=l_{dam} * 10^{16} \f]
    *
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T DecameterToFermi(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to microns.
    *		\f[ l_{\mu m}=l_{dam} * 10^{7} \f]
    *
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see DecameterToMicrometer() for alias.
    */
    template<typename T>
    T DecameterToMicron(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{dam} * 10^{1}\f]
    *
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see DecameterToAngstrom() for angstrom conversion.
    *   @see DecameterToPicometer() for picometer conversion.
    *   @see DecameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T DecameterToCuXUnit(const T lengthInDecameter);
   
    /**
    *   @brief Converts a length in decameters to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{dam} * 10^{1}\f]
    *
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see DecameterToAngstrom() for angstrom conversion.
    *   @see DecameterToPicometer() for picometer conversion.
    *   @see DecameterToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T DecameterToMoXUnit(const T lengthInDecameter);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Decameter-Imperial
    /// @{

    /**
    *   @brief Converts a length in decameters to miles.
    *		\f[ l_{mi}=\frac{10^{1}}{0.0254 * 63360} l_{dam} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T DecameterToMile(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to yards.
    *		\f[ l_{yd}=  \frac{10^{1}}{0.0254 * 36} \frac{1}{36} l_{dam}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T DecameterToYard(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to feet.
    *		\f[ l_{ft}= \frac{10^{1}}{0.0254 * 12} l_{dam} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T DecameterToFoot(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to inches.
    *		\f[ l_{in}=  \frac{10^{1}}{0.0254} l_{dam} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T DecameterToInch(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{1}}{0.0254} l_{dam} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see DecameterToThou() for alias.
    */
    template<typename T>
    T DecameterToMil(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{1}}{0.0254} l_{dam} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see DecameterToMil() for alias.
    */
    template<typename T>
    T DecameterToThou(const T lengthInDecameter);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Decameter-Nautical
    /// @{

    /**
    *   @brief Converts a length in decameters to nautical mile.
    *		\f[ l_{NM}= \frac{10^{1}}{0.0254 * 1852} l_{dam}  \f]
    *
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T DecameterToNauticalMile(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to fathoms.
    *		\f[ l_{fathom}= \frac{10^{1}}{0.0254 * 72} l_{dam}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T DecameterToFathom(const T lengthInDecameter);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Decameter-Surveyors
    /// @{

    /**
    *   @brief Converts a length in decameters to rods.
    *		\f[ l_{rod}= \frac{10^{1}}{0.0254 * 198} l_{dam} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T DecameterToRod(const T lengthInDecameter);

    /**
    *   @brief Converts a length in decameters to chains.
    *		\f[ l_{ch}= \frac{10^{1}}{0.0254 * 792}  l_{dam} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInDecameter \f$ l_{dam}\ (dam)\f$ Length in decameters.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T DecameterToChain(const T lengthInDecameter);

	/// @}
} //namespace EGXMath

#include "DecameterConversion.inl"
