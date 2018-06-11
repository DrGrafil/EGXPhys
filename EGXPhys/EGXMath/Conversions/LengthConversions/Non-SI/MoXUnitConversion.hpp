/// @file EGXMath/Conversions/LengthConversions/Non-SI/MoXUnitConversion.hpp
///
/// @brief Converts length measurements in Mo x units into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-MoXUnit MoXUnit
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-MoXUnit-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-MoXUnit

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-MoXUnit-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-MoXUnit

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-MoXUnit-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-MoXUnit

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-MoXUnit-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-MoXUnit

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-MoXUnit-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-MoXUnit

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-MoXUnit-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-MoXUnit

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-MoXUnit-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in Mo x units to astronomical units.
    *		\f[ l_{au}=  \frac{1.00209952*10^{-13}}{149597870700} l_{xu(Mo\ K\alpha_1)} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T MoXUnitToAstronomicalUnit(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length Mo x units in to light-years.
    *		\f[ l_{ly}= \frac{1.00209952*10^{-13}}{9460730472580800} l_{xu(Mo\ K\alpha_1)} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T MoXUnitToLightYear(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to parsecs.
    *		\f[ l_{pc}=\frac{1.00209952*10^{-13} * \pi}{149597870700 * 648000} l_{xu(Mo\ K\alpha_1)} \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T MoXUnitToParsec(const T lengthInMoXUnit);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-MoXUnit-SI
    /// @{
    /**
    *   @brief Converts a length in Mo x units to meters.
    *		\f[ l_{m}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} \f]
    *
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T MoXUnitToMeter(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to yottameters.
    *		\f[ l_{Ym}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T MoXUnitToYottameter(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to zettameters.
    *		\f[ l_{Zm}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T MoXUnitToZettameter(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to exameters.
    *		\f[ l_{Em}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T MoXUnitToExameter(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to petameters.
    *		\f[ l_{Pm}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T MoXUnitToPetameter(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to terameters.
    *		\f[ l_{Tm}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T MoXUnitToTerameter(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to gigameters.
    *		\f[ l_{Gm}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T MoXUnitToGigameter(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to megameters.
    *		\f[ l_{Mm}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T MoXUnitToMegameter(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to kilometers.
    *		\f[ l_{km}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T MoXUnitToKilometer(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to hectometers.
    *		\f[ l_{hm}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T MoXUnitToHectometer(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to decameters.
    *		\f[ l_{dam}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T MoXUnitToDecameter(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to decimeters.
    *		\f[ l_{dm}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T MoXUnitToDecimeter(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to centimeters.
    *		\f[ l_{cm}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T MoXUnitToCentimeter(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to millimeters.
    *		\f[ l_{mm}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T MoXUnitToMillimeter(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to micrometers.
    *		\f[ l_{\mu m}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see MoXUnitToMicron() for alias.
    */
    template<typename T>
    T MoXUnitToMicrometer(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to nanometers.
    *		\f[ l_{nm}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see MoXUnitToMicron() for alias.
    */
    template<typename T>
    T MoXUnitToNanometer(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to picometers.
    *		\f[ l_{pm}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see MoXUnitToAngstrom() for angstrom conversion.
    *   @see MoXUnitToCuXUnit() for copper x unit conversion.
    *   @see MoXUnitToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MoXUnitToPicometer(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to femtometers.
    *		\f[ l_{fm}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see MoXUnitToFermi() for alias.
    */
    template<typename T>
    T MoXUnitToFemtometer(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to attometers.
    *		\f[ l_{am}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T MoXUnitToAttometer(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to zeptometers.
    *		\f[ l_{zm}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T MoXUnitToZeptometer(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to yoctometers.
    *		\f[ l_{ym}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T MoXUnitToYoctometer(const T lengthInMoXUnit);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-MoXUnit-Non-SI
    /// @{

    /**
    *   @brief Converts a length in Mo x units to angstroms.
    *		\f[ l_{\unicode{x212B}}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see MoXUnitToPicometer() for picometer conversion.
    *   @see MoXUnitToCuXUnit() for copper x unit conversion.
    *   @see MoXUnitToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MoXUnitToAngstrom(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to fermis.
    *		\f[ l_{fm}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{15} \f]
    *
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T MoXUnitToFermi(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to microns.
    *		\f[ l_{\mu m}=1.00209952*10^{-13} * l_{xu(Mo\ K\alpha_1)} * 10^{6} \f]
    *
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see MoXUnitToMicrometer() for alias.
    */
    template<typename T>
    T MoXUnitToMicron(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1.00209952*10^{-13}}{1.00207697*10^{-13}} l_{xu(Mo\ K\alpha_1)}\f]
    *
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see MoXUnitToAngstrom() for angstrom conversion.
    *   @see MoXUnitToPicometer() for picometer conversion.
    *   @see MoXUnitToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MoXUnitToCuXUnit(const T lengthInMoXUnit);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-MoXUnit-Imperial
    /// @{

    /**
    *   @brief Converts a length in Mo x units to miles.
    *		\f[ l_{mi}=\frac{1.00209952*10^{-13}}{0.0254 * 63360} l_{xu(Mo\ K\alpha_1)} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T MoXUnitToMile(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to yards.
    *		\f[ l_{yd}=  \frac{1.00209952*10^{-13}}{0.0254 * 36} \frac{1}{36} l_{xu(Mo\ K\alpha_1)}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T MoXUnitToYard(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to feet.
    *		\f[ l_{ft}= \frac{1.00209952*10^{-13}}{0.0254 * 12} l_{xu(Mo\ K\alpha_1)} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T MoXUnitToFoot(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to inches.
    *		\f[ l_{in}=  \frac{1.00209952*10^{-13}}{0.0254} l_{xu(Mo\ K\alpha_1)} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T MoXUnitToInch(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{1.00209952*10^{-13}}{0.0254} l_{xu(Mo\ K\alpha_1)} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see MoXUnitToThou() for alias.
    */
    template<typename T>
    T MoXUnitToMil(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{1.00209952*10^{-13}}{0.0254} l_{xu(Mo\ K\alpha_1)} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see MoXUnitToMil() for alias.
    */
    template<typename T>
    T MoXUnitToThou(const T lengthInMoXUnit);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-MoXUnit-Nautical
    /// @{

    /**
    *   @brief Converts a length in Mo x units to nautical mile.
    *		\f[ l_{NM}= \frac{1.00209952*10^{-13}}{1852} l_{xu(Mo\ K\alpha_1)}  \f]
    *
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T MoXUnitToNauticalMile(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to fathoms.
    *		\f[ l_{fathom}= \frac{1.00209952*10^{-13}}{0.0254 * 72} l_{xu(Mo\ K\alpha_1)}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T MoXUnitToFathom(const T lengthInMoXUnit);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-MoXUnit-Surveyors
    /// @{

    /**
    *   @brief Converts a length in Mo x units to rods.
    *		\f[ l_{rod}= \frac{1.00209952*10^{-13}}{0.0254 * 198} l_{xu(Mo\ K\alpha_1)} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T MoXUnitToRod(const T lengthInMoXUnit);

    /**
    *   @brief Converts a length in Mo x units to chains.
    *		\f[ l_{ch}= \frac{1.00209952*10^{-13}}{0.0254 * 792}  l_{xu(Mo\ K\alpha_1)} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInMoXUnit \f$ l_{xu(Mo\ K\alpha_1)}\ (xu(Mo\ K\alpha_1))\f$ Length in Mo x units.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T MoXUnitToChain(const T lengthInMoXUnit);

	/// @}
} //namespace EGXMath

#include "MoXUnitConversion.inl"
