/// @file EGXPhys/EGXPhysConstants.hpp
///
/// @brief Link to all header files that includes constants.
///
/// @author Elliot Grafil (Metex)
/// @date 7/25/17
/// @bug No known bugs.

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{
    /// @addtogroup templates
    /// @{
    
    /// Compates two numbers and returns largest one.
    template<typename T>
    T getBigger(const T& a, const T& b);
    
    /// @}
} //namespace EGXPhys

#include "header.inl"
