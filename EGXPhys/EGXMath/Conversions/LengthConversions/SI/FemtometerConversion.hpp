/// @file EGXMath/Conversions/LengthConversions/SI/FemtometerConversion.hpp
///
/// @brief Converts length measurements in femtometers into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Femtometer Femtometer
/// @ingroup EGXMath-Conversions-LengthConversions-SI

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Femtometer-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Femtometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Femtometer-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Femtometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Femtometer-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Femtometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Femtometer-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Femtometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Femtometer-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Femtometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Femtometer-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Femtometer

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-SI-Femtometer-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in femtometers to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{fm} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T FemtometerToAstronomicalUnit(const T lengthInFemtometer);

    /**
    *   @brief Converts a length femtometers in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{fm} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T FemtometerToLightYear(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{fm} * 10^{-15}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T FemtometerToParsec(const T lengthInFemtometer);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Femtometer-SI
    /// @{
    /**
    *   @brief Converts a length in femtometers to meters.
    *		\f[ l_{m}=l_{fm} * 10^{-15} \f]
    *
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T FemtometerToMeter(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to yottameters.
    *		\f[ l_{Ym}=l_{fm} * 10^{-39} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T FemtometerToYottameter(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to zettameters.
    *		\f[ l_{Zm}=l_{fm} * 10^{-36} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T FemtometerToZettameter(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to exameters.
    *		\f[ l_{Em}=l_{fm} * 10^{-33} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T FemtometerToExameter(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to petameters.
    *		\f[ l_{Pm}=l_{fm} * 10^{-30} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T FemtometerToPetameter(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to terameters.
    *		\f[ l_{Tm}=l_{fm} * 10^{-27} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T FemtometerToTerameter(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to gigameters.
    *		\f[ l_{Gm}=l_{fm} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T FemtometerToGigameter(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to megameters.
    *		\f[ l_{Mm}=l_{fm} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T FemtometerToMegameter(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to kilometers.
    *		\f[ l_{km}=l_{fm} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T FemtometerToKilometer(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to hectometers.
    *		\f[ l_{hm}=l_{fm} * 10^{-17} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T FemtometerToHectometer(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to decameters.
    *		\f[ l_{dam}=l_{fm} * 10^{-16} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T FemtometerToDecameter(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to decimeters.
    *		\f[ l_{dm}=l_{fm} * 10^{-14} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T FemtometerToDecimeter(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to centimeters.
    *		\f[ l_{cm}=l_{fm} * 10^{-13} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T FemtometerToCentimeter(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to millimeters.
    *		\f[ l_{mm}=l_{fm} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T FemtometerToMillimeter(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to micrometers.
    *		\f[ l_{\mu m}=l_{fm} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see FemtometerToMicron() for alias.
    */
    template<typename T>
    T FemtometerToMicrometer(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to nanometers.
    *		\f[ l_{nm}=l_{fm} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see FemtometerToMicron() for alias.
    */
    template<typename T>
    T FemtometerToNanometer(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to picometers.
    *		\f[ l_{pm}=l_{fm} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see FemtometerToAngstrom() for angstrom conversion.
    *   @see FemtometerToCuXUnit() for copper x unit conversion.
    *   @see FemtometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T FemtometerToPicometer(const T lengthInFemtometer);


    /**
    *   @brief Converts a length in femtometers to attometers.
    *		\f[ l_{am}=l_{fm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T FemtometerToAttometer(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to zeptometers.
    *		\f[ l_{zm}=l_{fm} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T FemtometerToZeptometer(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to yoctometers.
    *		\f[ l_{ym}=l_{fm} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T FemtometerToYoctometer(const T lengthInFemtometer);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Femtometer-Non-SI
    /// @{

    /**
    *   @brief Converts a length in femtometers to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{fm} * 10^{-5} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see FemtometerToPicometer() for picometer conversion.
    *   @see FemtometerToCuXUnit() for copper x unit conversion.
    *   @see FemtometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T FemtometerToAngstrom(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to fermis.
    *		\f[ l_{fm}=l_{fm} \f]
    *
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T FemtometerToFermi(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to microns.
    *		\f[ l_{\mu m}=l_{fm} * 10^{-11} \f]
    *
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see FemtometerToMicrometer() for alias.
    */
    template<typename T>
    T FemtometerToMicron(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{fm} * 10^{-15}\f]
    *
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see FemtometerToAngstrom() for angstrom conversion.
    *   @see FemtometerToPicometer() for picometer conversion.
    *   @see FemtometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T FemtometerToCuXUnit(const T lengthInFemtometer);
   
    /**
    *   @brief Converts a length in femtometers to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{fm} * 10^{-15}\f]
    *
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see FemtometerToAngstrom() for angstrom conversion.
    *   @see FemtometerToPicometer() for picometer conversion.
    *   @see FemtometerToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T FemtometerToMoXUnit(const T lengthInFemtometer);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Femtometer-Imperial
    /// @{

    /**
    *   @brief Converts a length in femtometers to miles.
    *		\f[ l_{mi}=\frac{10^{-15}}{0.0254 * 63360} l_{fm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T FemtometerToMile(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to yards.
    *		\f[ l_{yd}=  \frac{10^{-15}}{0.0254 * 36} \frac{1}{36} l_{fm}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T FemtometerToYard(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to feet.
    *		\f[ l_{ft}= \frac{10^{-15}}{0.0254 * 12} l_{fm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T FemtometerToFoot(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to inches.
    *		\f[ l_{in}=  \frac{10^{-15}}{0.0254} l_{fm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T FemtometerToInch(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-15}}{0.0254} l_{fm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see FemtometerToThou() for alias.
    */
    template<typename T>
    T FemtometerToMil(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-15}}{0.0254} l_{fm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see FemtometerToMil() for alias.
    */
    template<typename T>
    T FemtometerToThou(const T lengthInFemtometer);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Femtometer-Nautical
    /// @{

    /**
    *   @brief Converts a length in femtometers to nautical mile.
    *		\f[ l_{NM}= \frac{10^{-15}}{0.0254 * 1852} l_{fm}  \f]
    *
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T FemtometerToNauticalMile(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to fathoms.
    *		\f[ l_{fathom}= \frac{10^{-15}}{0.0254 * 72} l_{fm}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T FemtometerToFathom(const T lengthInFemtometer);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Femtometer-Surveyors
    /// @{

    /**
    *   @brief Converts a length in femtometers to rods.
    *		\f[ l_{rod}= \frac{10^{-15}}{0.0254 * 198} l_{fm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T FemtometerToRod(const T lengthInFemtometer);

    /**
    *   @brief Converts a length in femtometers to chains.
    *		\f[ l_{ch}= \frac{10^{-15}}{0.0254 * 792}  l_{fm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInFemtometer \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T FemtometerToChain(const T lengthInFemtometer);

	/// @}
} //namespace EGXMath

#include "FemtometerConversion.inl"
