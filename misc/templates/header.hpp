//  Created by Elliot Grafil on 7/25/17.
//  Copyright © 2017 Elliot Grafil. All rights reserved.

/// @ref templates
/// @file templates/header.hpp
///
/// @see core (dependence)
/// @see templates (dependence)
///
/// @defgroup templates
/// @ingroup gtc
///
/// @brief Allows you to use get bigger numbers
///
/// <templates/template.hpp> need to be included to use these functionalities.

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
