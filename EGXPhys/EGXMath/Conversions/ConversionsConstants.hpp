/// @file EGXMath/Conversions/Conversions.hpp
///
/// @brief Constants pertaining to unit conversions
/// @author Elliot Grafil (Metex)
/// @date 3/21/18


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
    const double lightYearInMeters = 9460730472580800.0;
    const double auInMeters = 149597870700.0;
    const double parsecInMeters = auInMeters * 648000.0 / pi;

#ifdef USING_NISTCONST_HEADER
    const double CuXUnit = NISTConst::CuXUnit;
    const double MoXUnit = NISTConst::MoXUnit;
#else
    const double CuXUnit = 1.00207697e-13;
    const double MoXUnit = 1.00209952e-13;
#endif
} //namespace EGXMath


