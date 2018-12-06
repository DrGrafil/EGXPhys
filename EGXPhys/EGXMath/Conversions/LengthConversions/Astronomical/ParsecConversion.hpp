/// @file EGXMath/Conversions/LengthConversions/Astronomical/ParsecConversion.hpp
///
/// @brief Converts length measurements in parsecs into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil 
/// @date 6/11/18

/// @defgroup EGXMath-Conversions-LengthConversions-Astronomical-Parsec Parsec
/// @ingroup EGXMath-Conversions-LengthConversions-Astronomical

/// @defgroup EGXMath-Conversions-LengthConversions-Astronomical-Parsec-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Astronomical-Parsec

/// @defgroup EGXMath-Conversions-LengthConversions-Astronomical-Parsec-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Astronomical-Parsec

/// @defgroup EGXMath-Conversions-LengthConversions-Astronomical-Parsec-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Astronomical-Parsec

/// @defgroup EGXMath-Conversions-LengthConversions-Astronomical-Parsec-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Astronomical-Parsec

/// @defgroup EGXMath-Conversions-LengthConversions-Astronomical-Parsec-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Astronomical-Parsec

/// @defgroup EGXMath-Conversions-LengthConversions-Astronomical-Parsec-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Astronomical-Parsec

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Astronomical-Parsec-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in parsecs to astronomical units.
    *		\f[ l_{au}=  \frac{648000}{\pi} l_{pc} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T ParsecToAstronomicalUnit(const T lengthInParsec);

    /**
    *   @brief Converts a length parsecs in to light-years.
    *		\f[ l_{ly}= \frac{149597870700 * 648000}{\pi 9460730472580800} l_{pc} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T ParsecToLightYear(const T lengthInParsec);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Astronomical-Parsec-SI
    /// @{
    /**
    *   @brief Converts a length in parsecs to meters.
    *		\f[ l_{m}=\frac{149597870700 * 648000}{\pi}l_{pc} \f]
    *
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T ParsecToMeter(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to yottameters.
    *		\f[ l_{Ym}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T ParsecToYottameter(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to zettameters.
    *		\f[ l_{Zm}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T ParsecToZettameter(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to exameters.
    *		\f[ l_{Em}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T ParsecToExameter(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to petameters.
    *		\f[ l_{Pm}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T ParsecToPetameter(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to terameters.
    *		\f[ l_{Tm}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T ParsecToTerameter(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to gigameters.
    *		\f[ l_{Gm}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T ParsecToGigameter(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to megameters.
    *		\f[ l_{Mm}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T ParsecToMegameter(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to kilometers.
    *		\f[ l_{km}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T ParsecToKilometer(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to hectometers.
    *		\f[ l_{hm}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T ParsecToHectometer(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to decameters.
    *		\f[ l_{dam}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T ParsecToDecameter(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to decimeters.
    *		\f[ l_{dm}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T ParsecToDecimeter(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to centimeters.
    *		\f[ l_{cm}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T ParsecToCentimeter(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to millimeters.
    *		\f[ l_{mm}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T ParsecToMillimeter(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to micrometers.
    *		\f[ l_{\mu m}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see ParsecToMicron() for alias.
    */
    template<typename T>
    T ParsecToMicrometer(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to nanometers.
    *		\f[ l_{nm}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see ParsecToMicron() for alias.
    */
    template<typename T>
    T ParsecToNanometer(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to picometers.
    *		\f[ l_{pm}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see ParsecToAngstrom() for angstrom conversion.
    *   @see ParsecToCuXUnit() for copper x unit conversion.
    *   @see ParsecToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T ParsecToPicometer(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to femtometers.
    *		\f[ l_{fm}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see ParsecToFermi() for alias.
    */
    template<typename T>
    T ParsecToFemtometer(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to attometers.
    *		\f[ l_{am}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T ParsecToAttometer(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to zeptometers.
    *		\f[ l_{zm}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T ParsecToZeptometer(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to yoctometers.
    *		\f[ l_{ym}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T ParsecToYoctometer(const T lengthInParsec);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Astronomical-Parsec-Non-SI
    /// @{

    /**
    *   @brief Converts a length in parsecs to angstroms.
    *		\f[ l_{\unicode{x212B}}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see ParsecToPicometer() for picometer conversion.
    *   @see ParsecToCuXUnit() for copper x unit conversion.
    *   @see ParsecToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T ParsecToAngstrom(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to fermis.
    *		\f[ l_{fm}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{15} \f]
    *
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T ParsecToFermi(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to microns.
    *		\f[ l_{\mu m}=\frac{149597870700 * 648000}{\pi}l_{pc} * 10^{6} \f]
    *
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see ParsecToMicrometer() for alias.
    */
    template<typename T>
    T ParsecToMicron(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{149597870700 * 648000}{1.00207697*10^{-13} * \pi} l_{pc}\f]
    *
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ (xu)\f$ Length in copper x units.
    *   @see ParsecToAngstrom() for angstrom conversion.
    *   @see ParsecToPicometer() for picometer conversion.
    *   @see ParsecToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T ParsecToCuXUnit(const T lengthInParsec);
   
    /**
    *   @brief Converts a length in parsecs to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{149597870700 * 648000}{1.00209952*10^{-13}* \pi} l_{pc}\f]
    *
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see ParsecToAngstrom() for angstrom conversion.
    *   @see ParsecToPicometer() for picometer conversion.
    *   @see ParsecToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T ParsecToMoXUnit(const T lengthInParsec);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Astronomical-Parsec-Imperial
    /// @{

    /**
    *   @brief Converts a length in parsecs to miles.
    *		\f[ l_{mi}=\frac{149597870700 * 648000}{ 0.0254 * 63360 * \pi} l_{pc} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T ParsecToMile(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to yards.
    *		\f[ l_{yd}=  \frac{149597870700 * 648000}{0.0254 * 36 * \pi} l_{pc}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T ParsecToYard(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to feet.
    *		\f[ l_{ft}= \frac{149597870700 * 648000}{0.0254 * 12 * \pi} l_{pc} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T ParsecToFoot(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to inches.
    *		\f[ l_{in}=  \frac{149597870700 * 648000}{0.0254 * \pi} l_{pc} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T ParsecToInch(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{149597870700 * 648000}{0.0254 * \pi} l_{pc} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see ParsecToThou() for alias.
    */
    template<typename T>
    T ParsecToMil(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{149597870700 * 648000}{0.0254 * \pi} l_{pc} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see ParsecToMil() for alias.
    */
    template<typename T>
    T ParsecToThou(const T lengthInParsec);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Astronomical-Parsec-Nautical
    /// @{

    /**
    *   @brief Converts a length in parsecs to nautical mile.
    *		\f[ l_{NM}= \frac{149597870700 * 648000}{1852 * \pi} l_{pc}  \f]
    *
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T ParsecToNauticalMile(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to fathoms.
    *		\f[ l_{fathom}= \frac{149597870700 * 648000}{0.0254 * 72 * \pi} l_{pc}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T ParsecToFathom(const T lengthInParsec);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Astronomical-Parsec-Surveyors
    /// @{

    /**
    *   @brief Converts a length in parsecs to rods.
    *		\f[ l_{rod}= \frac{149597870700 * 648000}{0.0254 * 198 * \pi} l_{pc} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T ParsecToRod(const T lengthInParsec);

    /**
    *   @brief Converts a length in parsecs to chains.
    *		\f[ l_{ch}= \frac{149597870700 * 648000}{0.0254 * 792 * \pi}  l_{pc} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInParsec \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T ParsecToChain(const T lengthInParsec);

	/// @}
} //namespace EGXMath

#include "ParsecConversion.inl"
