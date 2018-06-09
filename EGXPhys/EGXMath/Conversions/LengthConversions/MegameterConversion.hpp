/// @file EGXMath/Conversions/LengthConversions/MegameterConversion.hpp
///
/// @brief Converts length measurements in megameters into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-Megameter Megameter
/// @ingroup EGXMath-Conversions-LengthConversions

/// @defgroup EGXMath-Conversions-LengthConversions-Megameter-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Megameter

/// @defgroup EGXMath-Conversions-LengthConversions-Megameter-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Megameter

/// @defgroup EGXMath-Conversions-LengthConversions-Megameter-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Megameter

/// @defgroup EGXMath-Conversions-LengthConversions-Megameter-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Megameter

/// @defgroup EGXMath-Conversions-LengthConversions-Megameter-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Megameter

/// @defgroup EGXMath-Conversions-LengthConversions-Megameter-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Megameter

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Megameter-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in megameters to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{Mm} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T MegameterToAstronomicalUnit(const T lengthInMegameter);

    /**
    *   @brief Converts a length megameters in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{Mm} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T MegameterToLightYear(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{Mm} * 10^{6}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T MegameterToParsec(const T lengthInMegameter);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Megameter-SI
    /// @{
    /**
    *   @brief Converts a length in megameters to meters.
    *		\f[ l_{m}=l_{Mm} \f]
    *
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T MegameterToMeter(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to yottameters.
    *		\f[ l_{Ym}=l_{Mm} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T MegameterToYottameter(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to zettameters.
    *		\f[ l_{Zm}=l_{Mm} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T MegameterToZettameter(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to exameters.
    *		\f[ l_{Em}=l_{Mm} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T MegameterToExameter(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to petameters.
    *		\f[ l_{Pm}=l_{Mm} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T MegameterToPetameter(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to terameters.
    *		\f[ l_{Tm}=l_{Mm} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T MegameterToTerameter(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to gigameters.
    *		\f[ l_{Gm}=l_{Mm} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T MegameterToGigameter(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to kilometers.
    *		\f[ l_{km}=l_{Mm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T MegameterToKilometer(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to hectometers.
    *		\f[ l_{hm}=l_{Mm} * 10^{4} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T MegameterToHectometer(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to decameters.
    *		\f[ l_{dam}=l_{Mm} * 10^{5} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T MegameterToDecameter(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to decimeters.
    *		\f[ l_{dm}=l_{Mm} * 10^{7} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T MegameterToDecimeter(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to centimeters.
    *		\f[ l_{cm}=l_{Mm} * 10^{8} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T MegameterToCentimeter(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to millimeters.
    *		\f[ l_{m}=l_{Mm} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T MegameterToMillimeter(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to micrometers.
    *		\f[ l_{\mu m}=l_{Mm} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see MegameterToMicron() for alias.
    */
    template<typename T>
    T MegameterToMicrometer(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to nanometers.
    *		\f[ l_{nm}=l_{Mm} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see MegameterToMicron() for alias.
    */
    template<typename T>
    T MegameterToNanometer(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to picometers.
    *		\f[ l_{pm}=l_{Mm} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see MegameterToAngstrom() for angstrom conversion.
    *   @see MegameterToCuXUnit() for copper x unit conversion.
    *   @see MegameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MegameterToPicometer(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to femtometers.
    *		\f[ l_{fm}=l_{Mm} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see MegameterToFermi() for alias.
    */
    template<typename T>
    T MegameterToFemtometer(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to attometers.
    *		\f[ l_{am}=l_{Mm} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T MegameterToAttometer(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to zeptometers.
    *		\f[ l_{zm}=l_{Mm} * 10^{27} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T MegameterToZeptometer(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to Yoctometers.
    *		\f[ l_{ym}=l_{Mm} * 10^{30} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T MegameterToYoctometer(const T lengthInMegameter);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Megameter-Non-SI
    /// @{

    /**
    *   @brief Converts a length in megameters to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{Mm} * 10^{16} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see MegameterToPicometer() for picometer conversion.
    *   @see MegameterToCuXUnit() for copper x unit conversion.
    *   @see MegameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MegameterToAngstrom(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to fermis.
    *		\f[ l_{fm}=l_{Mm} * 10^{21} \f]
    *
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T MegameterToFermi(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to microns.
    *		\f[ l_{\mu m}=l_{Mm} * 10^{12} \f]
    *
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see MegameterToMicrometer() for alias.
    */
    template<typename T>
    T MegameterToMicron(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{Mm} * 10^{6}\f]
    *
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see MegameterToAngstrom() for angstrom conversion.
    *   @see MegameterToPicometer() for picometer conversion.
    *   @see MegameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MegameterToCuXUnit(const T lengthInMegameter);
   
    /**
    *   @brief Converts a length in megameters to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{Mm} * 10^{6}\f]
    *
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see MegameterToAngstrom() for angstrom conversion.
    *   @see MegameterToPicometer() for picometer conversion.
    *   @see MegameterToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T MegameterToMoXUnit(const T lengthInMegameter);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Megameter-Imperial
    /// @{

    /**
    *   @brief Converts a length in megameters to miles.
    *		\f[ l_{mi}=\frac{10^{6}}{0.0254 * 63360} l_{Mm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T MegameterToMile(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to yards.
    *		\f[ l_{yd}=  \frac{10^{6}}{0.0254 * 36} \frac{1}{36} l_{Mm}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T MegameterToYard(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to feet.
    *		\f[ l_{ft}= \frac{10^{6}}{0.0254 * 12} l_{Mm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T MegameterToFoot(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to inches.
    *		\f[ l_{in}=  \frac{10^{6}}{0.0254} l_{Mm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T MegameterToInch(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{6}}{0.0254} l_{Mm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see MegameterToThou() for alias.
    */
    template<typename T>
    T MegameterToMil(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{6}}{0.0254} l_{Mm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see MegameterToMil() for alias.
    */
    template<typename T>
    T MegameterToThou(const T lengthInMegameter);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Megameter-Nautical
    /// @{

    /**
    *   @brief Converts a length in megameters to nautical mile.
    *		\f[ l_{NM}= \frac{10^{6}}{0.0254 * 1852} l_{Mm}  \f]
    *
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T MegameterToNauticalMile(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to fathoms.
    *		\f[ l_{fathom}= \frac{10^{6}}{0.0254 * 72} l_{Mm}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T MegameterToFathom(const T lengthInMegameter);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Megameter-Surveyors
    /// @{

    /**
    *   @brief Converts a length in megameters to rods.
    *		\f[ l_{rod}= \frac{10^{6}}{0.0254 * 198} l_{Mm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T MegameterToRod(const T lengthInMegameter);

    /**
    *   @brief Converts a length in megameters to chains.
    *		\f[ l_{ch}= \frac{10^{6}}{0.0254 * 792}  l_{Mm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInMegameter \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T MegameterToChain(const T lengthInMegameter);

	/// @}
} //namespace EGXMath

#include "TemplateConversion.inl"
