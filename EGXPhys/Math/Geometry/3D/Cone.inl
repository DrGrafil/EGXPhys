///  Created by Elliot Grafil on 7/25/17.
///  Copyright © 2017 Elliot Grafil. All rights reserved.
/// @ref templates
/// @file templates/header.inl

namespace EGXPhys{
    template<typename T>
    T getBigger(const T& a, const T& b)
    {
        return a>b?a:b;
    }
}//namespace EGXPhys
