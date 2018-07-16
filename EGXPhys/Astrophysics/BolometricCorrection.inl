/// @file EGXPhys/Astrophysics/BolometricCorrection.inl
///
/// @brief Implimentation of bolometric correction calculations
/// @author Elliot Grafil (Metex)
/// @date 7/16/18


namespace EGXPhys{

    template<typename T>
    T BolometricCorrectionVisual(const T starEffectiveSurfaceTemperatureInK) {

        T logTeff = log10(starEffectiveSurfaceTemperatureInK);

        //For logTeff < 3.7
        T a = -0.190537291496456e5;
        T b =  0.155144866764412e5;
        T c = -0.421278819301717e4;
        T d =  0.381476328422343e3;
        T e =  0.0;
        T f =  0.0;

        if (logTeff >= 3.9) {
            a = -0.118115450538963e6;
            b =  0.137145973583929e6;
            c = -0.636233812100225e5;
            d =  0.147412923562646e5;
            e = -0.170587278406872e4;
            f =  0.788731721804990e2;
        }
        else if (logTeff >= 3.7) {
            a = -0.370510203809015e5;
            b =  0.385672629965804e5;
            c = -0.150651486316025e5;
            d =  0.261724637119416e4;
            e = -0.170623810323864e3;
            f =  0.0;
        }
        
        return a +  b * logTeff +
                    c * logTeff * logTeff +
                    d * logTeff * logTeff * logTeff +
                    e * logTeff * logTeff * logTeff * logTeff +
                    f * logTeff * logTeff * logTeff * logTeff * logTeff;
    }

}//namespace EGXPhys
