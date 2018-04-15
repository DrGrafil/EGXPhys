/// @file EGXPhys/Astrophysics/ColorTemperature.hpp
///
/// @brief Calculates color temperature and related information derived from it.
///
/// @author Elliot Grafil (Metex)
/// @date 4/14/18

/// @defgroup EGXPhys-Astrophysics-ColorTemperature Color Temperature
/// @ingroup EGXPhys-Astrophysics

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <math.h>  

#include "AstrophysicsConstants.hpp"

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{
	/// @addtogroup EGXPhys-Astrophysics-ColorTemperature
	/// @{
	
	/**
	*   @brief Calculates the color RGB values from the color tempreture, \f$T_{black}\f$, assuming the color was emitted via black body radiation.
	*
	*	See http://www.tannerhelland.com/4435/convert-temperature-rgb-algorithm-code/ for equation used
	*
	*   @param temperatureInK \f$T_{black}\ (K)\f$ Tempreture of the black body emittor.
	*   @param R \f$R\ (dimensionless)\f$ Red color in an RGB color. Values varies from 0-1.
	*   @param G \f$G\ (dimensionless)\f$ Green color in an RGB color. Values varies from 0-1.
	*   @param B \f$B\ (dimensionless)\f$ Blue color in an RGB color. Values varies from 0-1.
	*/
	template<typename T>
	T ColorTemperatureToRGB(const T temperatureInK, T& R, T& G, T& B);

#ifdef EGXPHYS_GLM

	/**
	*   @brief Calculates the color RGB values from the color tempreture, \f$T_{black}\f$, assuming the color was emitted via black body radiation.
	*
	*	See http://www.tannerhelland.com/4435/convert-temperature-rgb-algorithm-code/ for equation used
	*
	*   @param temperatureInK \f$T_{black}\ (K)\f$ Tempreture of the black body emittor.
	*   @return \f$RGB\ (dimensionless)\f$ RGB color vector. Values varies from 0-1.
	*/
	template<typename T>
	glm::vec3 ColorTemperatureToRGB(const T temperatureInK);

#endif // EGXPHYS_GLM

    /// @}
} //namespace EGXPhys

#include "ColorTemperature.inl"
