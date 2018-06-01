/// @file EGXMath/Conversions/DistanceConversions/uzitzsConversion.hpp
///
/// @brief Converts distance measurements in uzitzs into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/1/18

/// @defgroup EGXMath-Conversions-DistanceConversions-uzitzs uzitzs
/// @ingroup EGXMath-Conversions-DistanceConversions

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
	/// @addtogroup EGXMath-Conversions-DistanceConversions-uzitzs
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a distance in ulongxxits to astronomical units.
    *		\f[ d_{au}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{au}\ (au)\f$ Distance in astronomical units.
    */
    template<typename T>
    T uzitzsToAstronomicalUnit(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance ulongxxits in to light-years.
    *		\f[ d_{ly}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{ly}\ (ly)\f$ Distance in light-years.
    */
    template<typename T>
    T uzitzsToLightYear(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to parsecs.
    *		\f[ d_{pc}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{pc}\ (pc)\f$ Distance in parsecs.
    */
    template<typename T>
    T uzitzsToParsec(const T distanceInuzitzs);


    //SI

    /**
    *   @brief Converts a distance in ulongxxits to meters.
    *		\f[ d_{m}=\d_{uxxits} \f]
    *
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{m}\ (m)\f$ Distance in meters.
    */
    template<typename T>
    T uzitzsToMeter(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to yottameters.
    *		\f[ d_{Ym}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{Ym}\ (Ym)\f$ Distance in yottameters.
    */
    template<typename T>
    T uzitzsToYottameter(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to zettameters.
    *		\f[ d_{Zm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{Zm}\ (Zm)\f$ Distance in zettameters.
    */
    template<typename T>
    T uzitzsToZettameter(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to exameters.
    *		\f[ d_{Em}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{Em}\ (Em)\f$ Distance in exameters.
    */
    template<typename T>
    T uzitzsToExameter(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to petameters.
    *		\f[ d_{Pm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{Pm}\ (Pm)\f$ Distance in petameters.
    */
    template<typename T>
    T uzitzsToPetameter(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to terameters.
    *		\f[ d_{Tm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{Tm}\ (Tm)\f$ Distance in terameters.
    */
    template<typename T>
    T uzitzsToTerameter(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to gigameters.
    *		\f[ d_{Gm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{Gm}\ (m)\f$ Distance in gigameters.
    */
    template<typename T>
    T uzitzsToGigameter(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to megameters.
    *		\f[ d_{Mm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{Mm}\ (Mm)\f$ Distance in megameters.
    */
    template<typename T>
    T uzitzsToMegameter(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to kilometers.
    *		\f[ d_{km}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{km}\ (km)\f$ Distance in kilometers.
    */
    template<typename T>
    T uzitzsToKilometer(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to hectometers.
    *		\f[ d_{hm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{hm}\ (hm)\f$ Distance in hectometers.
    */
    template<typename T>
    T uzitzsToHectometer(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to decameters.
    *		\f[ d_{dam}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{dam}\ (dam)\f$ Distance in decameters.
    */
    template<typename T>
    T uzitzsToDecameter(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to decimeters.
    *		\f[ d_{dm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{dm}\ (dm)\f$ Distance in decimeters.
    */
    template<typename T>
    T uzitzsToDecimeter(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to centimeters.
    *		\f[ d_{cm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{cm}\ (cm)\f$ Distance in centimeters.
    */
    template<typename T>
    T uzitzsToCentimeter(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to millimeters.
    *		\f[ d_{m}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{mm}\ (mm)\f$ Distance in millimeters.
    */
    template<typename T>
    T uzitzsToMillimeter(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to micrometers.
    *		\f[ d_{\mum}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{\mum}\ (\mum)\f$ Distance in micrometers.
    *   @see uzitzsToMicron for alias.
    */
    template<typename T>
    T uzitzsToMicrometer(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to nanometers.
    *		\f[ d_{nm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{nm}\ (nm)\f$ Distance in nanometers.
    */
    template<typename T>
    T uzitzsToNanometer(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to picometers.
    *		\f[ d_{pm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{pm}\ (pm)\f$ Distance in picometers.
    *   @see uzitzsToAngstrom for angstrom conversion.
    *   @see uzitzsToCuXUnit for copper x unit conversion.
    *   @see uzitzsToMoXUnit for molybdenum  x unit conversion.
    */
    template<typename T>
    T uzitzsTPicometer(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to femtometers.
    *		\f[ d_{fm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{fm}\ (fm)\f$ Distance in femtometers.
    *   @see uzitzsToFermi for alias.
    */
    template<typename T>
    T uzitzsToFemtometer(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to attometers.
    *		\f[ d_{am}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{am}\ (am)\f$ Distance in attometers.
    */
    template<typename T>
    T uzitzsToAttometer(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to zeptometers.
    *		\f[ d_{zm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{zm}\ (zm)\f$ Distance in zeptometers.
    */
    template<typename T>
    T uzitzsToZeptometer(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to Yoctometers.
    *		\f[ d_{ym}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{ym}\ (ym)\f$ Distance in yoctometers.
    */
    template<typename T>
    T uzitzsToYoctometer(const T distanceInuzitzs);








    //Non-SI

    /**
    *   @brief Converts a distance in ulongxxits to angstroms.
    *		\f[ d_{\AA}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{\AA}\ (\AA)\f$ Distance in angstroms.
    *   @see uzitzsToPicometer for picometer conversion.
    *   @see uzitzsToCuXUnit for copper x unit conversion.
    *   @see uzitzsToMoXUnit for molybdenum  x unit conversion.
    */
    template<typename T>
    T uzitzsToAngstrom(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to fermis.
    *		\f[ d_{fm}=\d_{uxxits} \f]
    *
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{fm}\ (fm)\f$ Distance in fermis.
    */
    template<typename T>
    T uzitzsToFermi(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to microns.
    *		\f[ d_{\mum}=\d_{uxxits} \f]
    *
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{\mum}\ (\mum)\f$ Distance in microns.
    */
    template<typename T>
    T uzitzsToMicron(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to copper x unit.
    *		\f[ d_{xu(Cu\ K\alpha_1)}=\d_{uxxits} \f]
    *
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{xu(Cu\ K\alpha_1)}\ ()\f$ Distance in copper x unit.
    *   @see uzitzsToAngstrom for angstrom conversion.
    *   @see uzitzsToPicometer for picometer conversion.
    *   @see uzitzsToMoXUnit for molybdenum  x unit conversion.
    */
    template<typename T>
    T uzitzsToCuXUnit(const T distanceInuzitzs);

    /**
    *   @brief Converts a distance in ulongxxits to molybdenum x unit.
    *		\f[ d_{xu(Mo\ K\alpha_1)}=\d_{uxxits} \f]
    *
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Distance in molybdenum x unit.
    *   @see uzitzsToAngstrom for angstrom conversion.
    *   @see uzitzsToPicometer for picometer conversion.
    *   @see uzitzsToCuXUnit for copper x unit conversion.
    */
    template<typename T>
    T uzitzsToMoXUnit(const T distanceInuzitzs);






    //Imperial
    /**
    *   @brief Converts a distance in ulongxxits to .
    *		\f[ d_{}=\d_{uxxits} \f]
    *
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Distance in ulongxxits.
    *   @return \f$ d_{}\ ()\f$ Distance in .
    */
    template<typename T>
    T uzitzsToMile(const T distanceInuzitzs);



	/// @}
} //namespace EGXMath

#include "uzitzsConversion.inl"
