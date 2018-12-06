/// @file EGXMath/Geometry/3D/Spheroid/SpheroidSurfaceArea.inl
///
/// @brief Implimentation of functions related to the surface area of an spheroid.
/// @author Elliot Grafil 
/// @date 5/23/18


namespace EGXMath {

    template <typename T>
    T SpheroidSurfaceArea(const T equatorialRadiusInm, const T polarRadiusInm) {
        T a = equatorialRadiusInm;
        T c = polarRadiusInm;
        

        if (c > a) {
            T e = sqrt(c * c - a * a) / c;
            return (T)2.0 * (T)pi * a * a + (T)2.0 * (T)pi * a * c * asin(e) / e;
        }
        else if (c < a) {
            T e = sqrt(a*a - c * c) / a;
            return (T)2.0 * (T)pi * a * a + (T)pi * (c * c / e) * log(((T)1.0 + e)/((T)1.0 - e));
        }
        else { //Sphere
            return (T) 4.0 * (T) pi * a * a;
        }

    }

}//namespace EGXMath
