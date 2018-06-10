/// @file EGXMath/Conversions/LengthConversions/TerameterConversion.hpp
///
/// @brief Converts length measurements in terameters into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-Terameter Terameter
/// @ingroup EGXMath-Conversions-LengthConversions

/// @defgroup EGXMath-Conversions-LengthConversions-Terameter-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Terameter

/// @defgroup EGXMath-Conversions-LengthConversions-Terameter-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Terameter

/// @defgroup EGXMath-Conversions-LengthConversions-Terameter-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Terameter

/// @defgroup EGXMath-Conversions-LengthConversions-Terameter-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Terameter

/// @defgroup EGXMath-Conversions-LengthConversions-Terameter-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Terameter

/// @defgroup EGXMath-Conversions-LengthConversions-Terameter-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Terameter

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Terameter-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in terameters to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{Tm} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T TerameterToAstronomicalUnit(const T lengthInTerameter);

    /**
    *   @brief Converts a length terameters in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{Tm} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T TerameterToLightYear(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{Tm} * 10^{12}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T TerameterToParsec(const T lengthInTerameter);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Terameter-SI
    /// @{
    /**
    *   @brief Converts a length in terameters to meters.
    *		\f[ l_{m}=l_{Tm} * 10^{12} \f]
    *
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T TerameterToMeter(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to yottameters.
    *		\f[ l_{Ym}=l_{Tm} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T TerameterToYottameter(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to zettameters.
    *		\f[ l_{Zm}=l_{Tm} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T TerameterToZettameter(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to exameters.
    *		\f[ l_{Em}=l_{Tm} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T TerameterToExameter(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to petameters.
    *		\f[ l_{Pm}=l_{Tm} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T TerameterToPetameter(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to gigameters.
    *		\f[ l_{Gm}=l_{Tm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T TerameterToGigameter(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to megameters.
    *		\f[ l_{Mm}=l_{Tm} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T TerameterToMegameter(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to kilometers.
    *		\f[ l_{km}=l_{Tm} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T TerameterToKilometer(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to hectometers.
    *		\f[ l_{hm}=l_{Tm} * 10^{10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T TerameterToHectometer(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to decameters.
    *		\f[ l_{dam}=l_{Tm} * 10^{11} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T TerameterToDecameter(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to decimeters.
    *		\f[ l_{dm}=l_{Tm} * 10^{13} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T TerameterToDecimeter(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to centimeters.
    *		\f[ l_{cm}=l_{Tm} * 10^{14} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T TerameterToCentimeter(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to millimeters.
    *		\f[ l_{mm}=l_{Tm} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T TerameterToMillimeter(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to micrometers.
    *		\f[ l_{\mu m}=l_{Tm} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see TerameterToMicron() for alias.
    */
    template<typename T>
    T TerameterToMicrometer(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to nanometers.
    *		\f[ l_{nm}=l_{Tm} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see TerameterToMicron() for alias.
    */
    template<typename T>
    T TerameterToNanometer(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to picometers.
    *		\f[ l_{pm}=l_{Tm} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see TerameterToAngstrom() for angstrom conversion.
    *   @see TerameterToCuXUnit() for copper x unit conversion.
    *   @see TerameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T TerameterToPicometer(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to femtometers.
    *		\f[ l_{fm}=l_{Tm} * 10^{27} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see TerameterToFermi() for alias.
    */
    template<typename T>
    T TerameterToFemtometer(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to attometers.
    *		\f[ l_{am}=l_{Tm} * 10^{30} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T TerameterToAttometer(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to zeptometers.
    *		\f[ l_{zm}=l_{Tm} * 10^{33} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T TerameterToZeptometer(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to Yoctometers.
    *		\f[ l_{ym}=l_{Tm} * 10^{36} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T TerameterToYoctometer(const T lengthInTerameter);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Terameter-Non-SI
    /// @{

    /**
    *   @brief Converts a length in terameters to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{Tm} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see TerameterToPicometer() for picometer conversion.
    *   @see TerameterToCuXUnit() for copper x unit conversion.
    *   @see TerameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T TerameterToAngstrom(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to fermis.
    *		\f[ l_{fm}=l_{Tm} * 10^{27} \f]
    *
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T TerameterToFermi(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to microns.
    *		\f[ l_{\mu m}=l_{Tm} * 10^{18} \f]
    *
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see TerameterToMicrometer() for alias.
    */
    template<typename T>
    T TerameterToMicron(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{Tm} * 10^{12}\f]
    *
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see TerameterToAngstrom() for angstrom conversion.
    *   @see TerameterToPicometer() for picometer conversion.
    *   @see TerameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T TerameterToCuXUnit(const T lengthInTerameter);
   
    /**
    *   @brief Converts a length in terameters to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{Tm} * 10^{12}\f]
    *
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see TerameterToAngstrom() for angstrom conversion.
    *   @see TerameterToPicometer() for picometer conversion.
    *   @see TerameterToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T TerameterToMoXUnit(const T lengthInTerameter);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Terameter-Imperial
    /// @{

    /**
    *   @brief Converts a length in terameters to miles.
    *		\f[ l_{mi}=\frac{10^{12}}{0.0254 * 63360} l_{Tm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T TerameterToMile(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to yards.
    *		\f[ l_{yd}=  \frac{10^{12}}{0.0254 * 36} \frac{1}{36} l_{Tm}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T TerameterToYard(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to feet.
    *		\f[ l_{ft}= \frac{10^{12}}{0.0254 * 12} l_{Tm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T TerameterToFoot(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to inches.
    *		\f[ l_{in}=  \frac{10^{12}}{0.0254} l_{Tm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T TerameterToInch(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{12}}{0.0254} l_{Tm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see TerameterToThou() for alias.
    */
    template<typename T>
    T TerameterToMil(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{12}}{0.0254} l_{Tm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see TerameterToMil() for alias.
    */
    template<typename T>
    T TerameterToThou(const T lengthInTerameter);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Terameter-Nautical
    /// @{

    /**
    *   @brief Converts a length in terameters to nautical mile.
    *		\f[ l_{NM}= \frac{10^{12}}{0.0254 * 1852} l_{Tm}  \f]
    *
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T TerameterToNauticalMile(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to fathoms.
    *		\f[ l_{fathom}= \frac{10^{12}}{0.0254 * 72} l_{Tm}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T TerameterToFathom(const T lengthInTerameter);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Terameter-Surveyors
    /// @{

    /**
    *   @brief Converts a length in terameters to rods.
    *		\f[ l_{rod}= \frac{10^{12}}{0.0254 * 198} l_{Tm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T TerameterToRod(const T lengthInTerameter);

    /**
    *   @brief Converts a length in terameters to chains.
    *		\f[ l_{ch}= \frac{10^{12}}{0.0254 * 792}  l_{Tm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInTerameter \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T TerameterToChain(const T lengthInTerameter);

	/// @}
} //namespace EGXMath

#include "TemplateConversion.inl"
