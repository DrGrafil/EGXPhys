/// @file EGXMath/Geometry/3D/Ellipsoid/EllipsoidSurfaceArea.inl
///
/// @brief Implimentation of functions related to the surface area of an ellipsoid.
/// @author Elliot Grafil (Metex)
/// @date 5/23/18


namespace EGXMath {

    template <typename T>
    T EllipsoidSurfaceArea(const T aSemiPrincipleAxisInm, const T bSemiPrincipleAxisInm, const T cSemiPrincipleAxisInm) {
        T powConst = 1.6075;
        return (T)4.0 * pi * pow(
                (
                pow(aSemiPrincipleAxisInm * bSemiPrincipleAxisInm, powConst) + 
                pow(aSemiPrincipleAxisInm * cSemiPrincipleAxisInm, powConst) +
                pow(bSemiPrincipleAxisInm * cSemiPrincipleAxisInm, powConst)
                )
            /
            (T)3.0
            , (T)1.0 / powConst);

    }

}//namespace EGXMath
