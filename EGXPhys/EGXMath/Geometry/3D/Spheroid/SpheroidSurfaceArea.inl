/// @file EGXMath/Geometry/2D/Ellipse/EllipseSurfaceArea.inl
///
/// @brief Implimentation of functions related to ellipse surface area.
/// @author Elliot Grafil (Metex)
/// @date 4/23/18


namespace EGXMath {

    template <typename T>
    T SpheroidSurfaceArea(const T symmetricSemiPrincipleAxisInm, const T uniqueSemiPrincipleAxisInm) {
        T a = symmetricSemiPrincipleAxisInm;
        T c = uniqueSemiPrincipleAxisInm;
        

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
