/// @file EGXMath/Conversions/LengthConversions/Non-SI/CuXUnitConversion.hpp
///
/// @brief Converts length measurements in Cu x units into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-CuXUnit CuXUnit
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-CuXUnit-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-CuXUnit

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-CuXUnit-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-CuXUnit

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-CuXUnit-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-CuXUnit

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-CuXUnit-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-CuXUnit

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-CuXUnit-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-CuXUnit

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-CuXUnit-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-CuXUnit

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-CuXUnit-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in Cu x units to astronomical units.
    *		\f[ l_{au}=  \frac{1.00207697*10^{-13}}{149597870700} l_{xu(Cu\ K\alpha_1)} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T CuXUnitToAstronomicalUnit(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length Cu x units in to light-years.
    *		\f[ l_{ly}= \frac{1.00207697*10^{-13}}{9460730472580800} l_{xu(Cu\ K\alpha_1)} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T CuXUnitToLightYear(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to parsecs.
    *		\f[ l_{pc}=\frac{1.00207697*10^{-13} * \pi}{149597870700 * 648000} l_{xu(Cu\ K\alpha_1)}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T CuXUnitToParsec(const T lengthInCuXUnit);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-CuXUnit-SI
    /// @{
    /**
    *   @brief Converts a length in Cu x units to meters.
    *		\f[ l_{m}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} \f]
    *
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T CuXUnitToMeter(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to yottameters.
    *		\f[ l_{Ym}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T CuXUnitToYottameter(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to zettameters.
    *		\f[ l_{Zm}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T CuXUnitToZettameter(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to exameters.
    *		\f[ l_{Em}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T CuXUnitToExameter(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to petameters.
    *		\f[ l_{Pm}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T CuXUnitToPetameter(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to terameters.
    *		\f[ l_{Tm}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T CuXUnitToTerameter(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to gigameters.
    *		\f[ l_{Gm}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T CuXUnitToGigameter(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to megameters.
    *		\f[ l_{Mm}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T CuXUnitToMegameter(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to kilometers.
    *		\f[ l_{km}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T CuXUnitToKilometer(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to hectometers.
    *		\f[ l_{hm}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T CuXUnitToHectometer(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to decameters.
    *		\f[ l_{dam}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T CuXUnitToDecameter(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to decimeters.
    *		\f[ l_{dm}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T CuXUnitToDecimeter(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to centimeters.
    *		\f[ l_{cm}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T CuXUnitToCentimeter(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to millimeters.
    *		\f[ l_{mm}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T CuXUnitToMillimeter(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to micrometers.
    *		\f[ l_{\mu m}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see CuXUnitToMicron() for alias.
    */
    template<typename T>
    T CuXUnitToMicrometer(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to nanometers.
    *		\f[ l_{nm}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see CuXUnitToMicron() for alias.
    */
    template<typename T>
    T CuXUnitToNanometer(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to picometers.
    *		\f[ l_{pm}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see CuXUnitToAngstrom() for angstrom conversion.
    *   @see CuXUnitToCuXUnit() for copper x unit conversion.
    *   @see CuXUnitToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T CuXUnitToPicometer(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to femtometers.
    *		\f[ l_{fm}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see CuXUnitToFermi() for alias.
    */
    template<typename T>
    T CuXUnitToFemtometer(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to attometers.
    *		\f[ l_{am}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T CuXUnitToAttometer(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to zeptometers.
    *		\f[ l_{zm}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T CuXUnitToZeptometer(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to yoctometers.
    *		\f[ l_{ym}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T CuXUnitToYoctometer(const T lengthInCuXUnit);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-CuXUnit-Non-SI
    /// @{

    /**
    *   @brief Converts a length in Cu x units to angstroms.
    *		\f[ l_{\unicode{x212B}}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see CuXUnitToPicometer() for picometer conversion.
    *   @see CuXUnitToCuXUnit() for copper x unit conversion.
    *   @see CuXUnitToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T CuXUnitToAngstrom(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to fermis.
    *		\f[ l_{fm}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{15} \f]
    *
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T CuXUnitToFermi(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to microns.
    *		\f[ l_{\mu m}=1.00207697*10^{-13} * l_{xu(Cu\ K\alpha_1)} * 10^{6} \f]
    *
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see CuXUnitToMicrometer() for alias.
    */
    template<typename T>
    T CuXUnitToMicron(const T lengthInCuXUnit);
   
    /**
    *   @brief Converts a length in Cu x units to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1.00207697*10^{-13}}{1.00209952*10^{-13}} l_{xu(Cu\ K\alpha_1)}\f]
    *
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see CuXUnitToAngstrom() for angstrom conversion.
    *   @see CuXUnitToPicometer() for picometer conversion.
    *   @see CuXUnitToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T CuXUnitToMoXUnit(const T lengthInCuXUnit);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-CuXUnit-Imperial
    /// @{

    /**
    *   @brief Converts a length in Cu x units to miles.
    *		\f[ l_{mi}=\frac{1.00207697*10^{-13}}{0.0254 * 63360} l_{xu(Cu\ K\alpha_1)} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T CuXUnitToMile(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to yards.
    *		\f[ l_{yd}=  \frac{1.00207697*10^{-13}}{0.0254 * 36} \frac{1}{36} l_{xu(Cu\ K\alpha_1)}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T CuXUnitToYard(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to feet.
    *		\f[ l_{ft}= \frac{1.00207697*10^{-13}}{0.0254 * 12} l_{xu(Cu\ K\alpha_1)} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T CuXUnitToFoot(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to inches.
    *		\f[ l_{in}=  \frac{1.00207697*10^{-13}}{0.0254} l_{xu(Cu\ K\alpha_1)} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T CuXUnitToInch(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{1.00207697*10^{-13}}{0.0254} l_{xu(Cu\ K\alpha_1)} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see CuXUnitToThou() for alias.
    */
    template<typename T>
    T CuXUnitToMil(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{1.00207697*10^{-13}}{0.0254} l_{xu(Cu\ K\alpha_1)} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see CuXUnitToMil() for alias.
    */
    template<typename T>
    T CuXUnitToThou(const T lengthInCuXUnit);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-CuXUnit-Nautical
    /// @{

    /**
    *   @brief Converts a length in Cu x units to nautical mile.
    *		\f[ l_{NM}= \frac{1.00207697*10^{-13}}{0.0254 * 1852} l_{xu(Cu\ K\alpha_1)}  \f]
    *
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T CuXUnitToNauticalMile(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to fathoms.
    *		\f[ l_{fathom}= \frac{1.00207697*10^{-13}}{0.0254 * 72} l_{xu(Cu\ K\alpha_1)}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T CuXUnitToFathom(const T lengthInCuXUnit);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-CuXUnit-Surveyors
    /// @{

    /**
    *   @brief Converts a length in Cu x units to rods.
    *		\f[ l_{rod}= \frac{1.00207697*10^{-13}}{0.0254 * 198} l_{xu(Cu\ K\alpha_1)} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T CuXUnitToRod(const T lengthInCuXUnit);

    /**
    *   @brief Converts a length in Cu x units to chains.
    *		\f[ l_{ch}= \frac{1.00207697*10^{-13}}{0.0254 * 792}  l_{xu(Cu\ K\alpha_1)} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInCuXUnit \f$ l_{xu(Cu\ K\alpha_1)}\ (xu(Cu\ K\alpha_1))\f$ Length in Cu x units.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T CuXUnitToChain(const T lengthInCuXUnit);

	/// @}
} //namespace EGXMath

#include "CuXUnitConversion.inl"
