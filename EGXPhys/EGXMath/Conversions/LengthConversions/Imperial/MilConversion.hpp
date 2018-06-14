/// @file EGXMath/Conversions/LengthConversions/Imperial/MilConversion.hpp
///
/// @brief Converts length measurements in mils into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/11/18

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Mil Mil
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Mil-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Mil

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Mil-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Mil

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Mil-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Mil

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Mil-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Mil

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Mil-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Mil

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Mil-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Mil

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Mil-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in mils to astronomical units.
    *		\f[ l_{au}=\frac{0.0254}{149597870700} l_{mil} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T MilToAstronomicalUnit(const T lengthInMil);

    /**
    *   @brief Converts a length mils in to light-years.
    *		\f[ l_{ly}=\frac{0.0254 * 10^{-3}}{9460730472580800} l_{mil} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T MilToLightYear(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to parsecs.
    *		\f[ l_{pc}=\frac{0.0254 * 10^{-3} * \pi}{149597870700 * 648000} l_{mil}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T MilToParsec(const T lengthInMil);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Mil-SI
    /// @{
    /**
    *   @brief Converts a length in mils to meters.
    *		\f[ l_{m}=0.0254 * l_{mil}  * 10^{-3} \f]
    *
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T MilToMeter(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to yottameters.
    *		\f[ l_{Ym}=0.0254* l_{mil} * 10^{-27} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T MilToYottameter(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to zettameters.
    *		\f[ l_{Zm}=0.0254* l_{mil} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T MilToZettameter(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to exameters.
    *		\f[ l_{Em}=0.0254* l_{mil} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T MilToExameter(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to petameters.
    *		\f[ l_{Pm}=0.0254* l_{mil} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T MilToPetameter(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to terameters.
    *		\f[ l_{Tm}=0.0254* l_{mil} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T MilToTerameter(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to gigameters.
    *		\f[ l_{Gm}=0.0254* l_{mil} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T MilToGigameter(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to megameters.
    *		\f[ l_{Mm}=0.0254* l_{mil} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T MilToMegameter(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to kilometers.
    *		\f[ l_{km}=0.0254 * l_{mil} * 10^{-6}\f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T MilToKilometer(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to hectometers.
    *		\f[ l_{hm}=0.0254* l_{mil} * 10^{-5} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T MilToHectometer(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to decameters.
    *		\f[ l_{dam}=0.0254* l_{mil} * 10^{-4} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T MilToDecameter(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to decimeters.
    *		\f[ l_{dm}=0.0254* l_{mil} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T MilToDecimeter(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to centimeters.
    *		\f[ l_{cm}=0.0254* l_{mil} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T MilToCentimeter(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to millimeters.
    *		\f[ l_{mm}=0.0254* l_{mil} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T MilToMillimeter(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to micrometers.
    *		\f[ l_{\mu m}=0.0254* l_{mil} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see MilToMicron() for alias.
    */
    template<typename T>
    T MilToMicrometer(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to nanometers.
    *		\f[ l_{nm}=0.0254* l_{mil} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see MilToMicron() for alias.
    */
    template<typename T>
    T MilToNanometer(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to picometers.
    *		\f[ l_{pm}=0.0254* l_{mil} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see MilToAngstrom() for angstrom conversion.
    *   @see MilToCuXUnit() for copper x unit conversion.
    *   @see MilToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MilToPicometer(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to femtometers.
    *		\f[ l_{fm}=0.0254* l_{mil} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see MilToFermi() for alias.
    */
    template<typename T>
    T MilToFemtometer(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to attometers.
    *		\f[ l_{am}=0.0254* l_{mil} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T MilToAttometer(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to zeptometers.
    *		\f[ l_{zm}=0.0254 * l_{mil} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T MilToZeptometer(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to yoctometers.
    *		\f[ l_{ym}=0.0254 * l_{mil} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T MilToYoctometer(const T lengthInMil);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Mil-Non-SI
    /// @{

    /**
    *   @brief Converts a length in mils to angstroms.
    *		\f[ l_{\unicode{x212B}}=0.0254 * l_{mil} * 10^{7} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see MilToPicometer() for picometer conversion.
    *   @see MilToCuXUnit() for copper x unit conversion.
    *   @see MilToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MilToAngstrom(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to fermis.
    *		\f[ l_{fm}=0.0254 * l_{mil} * 10^{12} \f]
    *
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T MilToFermi(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to microns.
    *		\f[ l_{\mu m}=0.0254 * l_{mil} * 10^{3} \f]
    *
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see MilToMicrometer() for alias.
    */
    template<typename T>
    T MilToMicron(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}=\frac{0.0254 * 10^{-3}}{1.00207697*10^{-13}} l_{mil}\f]
    *
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ (xu)\f$ Length in copper x units.
    *   @see MilToAngstrom() for angstrom conversion.
    *   @see MilToPicometer() for picometer conversion.
    *   @see MilToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MilToCuXUnit(const T lengthInMil);
   
    /**
    *   @brief Converts a length in mils to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{0.0254 * 10^{-3}}{1.00209952*10^{-13}} l_{mil}\f]
    *
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see MilToAngstrom() for angstrom conversion.
    *   @see MilToPicometer() for picometer conversion.
    *   @see MilToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T MilToMoXUnit(const T lengthInMil);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Mil-Imperial
    /// @{

    /**
    *   @brief Converts a length in mils to miles.
    *		\f[ l_{mi}=\frac{10^{-3}}{63360} l_{mil} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T MilToMile(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to yards.
    *		\f[ l_{yd}=  \frac{10^{-3}}{36} l_{mil}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T MilToYard(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to feet.
    *		\f[ l_{ft}= \frac{10^{-3}}{12} l_{mil} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T MilToFoot(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to inches.
    *		\f[ l_{in}= l_{mil} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T MilToInch(const T lengthInMil);


    /**
    *   @brief Converts a length in mils to thous (thousandth of an inch).
    *		\f[ l_{mil}= l_{mil} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    */
    template<typename T>
    T MilToThou(const T lengthInMil);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Mil-Nautical
    /// @{

    /**
    *   @brief Converts a length in mils to nautical mile.
    *		\f[ l_{NM}= \frac{0.0254 * 10^{-3}}{1852} l_{mil}  \f]
    *
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T MilToNauticalMile(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to fathoms.
    *		\f[ l_{fathom}= \frac{10^{-3}}{72} l_{mil}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T MilToFathom(const T lengthInMil);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Mil-Surveyors
    /// @{

    /**
    *   @brief Converts a length in mils to rods.
    *		\f[ l_{rod}= \frac{10^{-3}}{198} l_{mil} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T MilToRod(const T lengthInMil);

    /**
    *   @brief Converts a length in mils to chains.
    *		\f[ l_{ch}= \frac{10^{-3}}{792}  l_{mil} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInMil \f$ l_{mil}\ (mil)\f$ Length in mils.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T MilToChain(const T lengthInMil);

	/// @}
} //namespace EGXMath

#include "MilConversion.inl"
