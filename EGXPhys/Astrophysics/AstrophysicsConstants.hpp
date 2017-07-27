/// @file templates/header.hpp
///
/// @brief Allows you to use get bigger numbers
///
/// <templates/template.hpp> need to be included to use these functionalities.
/// @author Elliot Grafil (Metex)
/// @date 7/25/17
/// @bug No known bugs.

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include "Engine/ManagerTemplate.hpp"
#include "Engine/Shader/Shader.hpp"

//=================================
// Forward declared dependencies
#include "Common/CommonTypedefs.hpp"
class GLContainer;
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
