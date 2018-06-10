/// @file EGXMath/Conversions/LengthConversions/SI/FemtometerConversion.inl
///
/// @brief Implimentation of Femtometer conversions
/// @author Elliot Grafil (Metex)
/// @date 6/8/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T FemtometerToAstronomicalUnit(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) / (T)auInMeters;
    }

    template<typename T>
    T FemtometerToLightYear(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) / (T)lightYearInMeters;
    }

    template<typename T>
    T FemtometerToParsec(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T FemtometerToMeter(const T lengthInFemtometer) {
        return lengthInFemtometer * (T)1e-15;
    }

    template<typename T>
    T FemtometerToYottameter(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) * (T)1e-24;
    }


    template<typename T>
    T FemtometerToZettameter(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) * (T)1e-21;
    }

    template<typename T>
    T FemtometerToExameter(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) * (T)1e-18;
    }

    template<typename T>
    T FemtometerToPetameter(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) * (T)1e-15;
    }


    template<typename T>
    T FemtometerToTerameter(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) * (T)1e-12;
    }

    template<typename T>
    T FemtometerToGigameter(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) * (T)1e-9;
    }

    template<typename T>
    T FemtometerToMegameter(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) * (T)1e-6;
    }

    template<typename T>
    T FemtometerToKilometer(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) * (T)1e-3;
    }

    template<typename T>
    T FemtometerToHectometer(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) * (T)1e-2;
    }

    template<typename T>
    T FemtometerToDecameter(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) * (T)1e-1;
    }

    template<typename T>
    T FemtometerToDecimeter(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) * (T)1e1;
    }

    template<typename T>
    T FemtometerToCentimeter(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) * (T)1e2;
    }

    template<typename T>
    T FemtometerToMillimeter(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) * (T)1e3;
    }

    template<typename T>
    T FemtometerToMicrometer(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) * (T)1e6;
    }

    template<typename T>
    T FemtometerToNanometer(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) * (T)1e9;
    }

    template<typename T>
    T FemtometerToPicometer(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) * (T)1e12;
    }


    template<typename T>
    T FemtometerToAttometer(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) * (T)1e18;
    }

    template<typename T>
    T FemtometerToZeptometer(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) * (T)1e21;
    }

    template<typename T>
    T FemtometerToYoctometer(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) * (T)1e24;
    }




    template<typename T>
    T FemtometerToAngstrom(const T lengthInFemtometer) {
        return FemtometerToPicometer(lengthInFemtometer) * (T)1e-2;
    }

    template<typename T>
    T FemtometerToFermi(const T lengthInFemtometer) {
        return FemtometerTofemtometer(lengthInFemtometer);
    }

    template<typename T>
    T FemtometerToMicron(const T lengthInFemtometer) {
        return FemtometerToMicrometer(lengthInFemtometer);
    }

    template<typename T>
    T FemtometerToCuXUnit(const T lengthInFemtometer) {
        
        return FemtometerToMeter(lengthInFemtometer) / (T)CuXUnit;
    }

    template<typename T>
    T FemtometerToMoXUnit(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T FemtometerToMile(const T lengthInFemtometer) {
        return FemtometerToInch(lengthInFemtometer) / (T)63360.0;
    }

    template<typename T>
    T FemtometerToYard(const T lengthInFemtometer) {
        return FemtometerToInch(lengthInFemtometer) / (T)36.0;
    }

    template<typename T>
    T FemtometerToFoot(const T lengthInFemtometer) {
        return FemtometerToInch(lengthInFemtometer) / (T)12.0;
    }

    template<typename T>
    T FemtometerToInch(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) / (T)0.0254;
    }

    template<typename T>
    T FemtometerToMil(const T lengthInFemtometer) {
        return FemtometerToInch(lengthInFemtometer) * (T)1000.0;
    }

    template<typename T>
    T FemtometerToThou(const T lengthInFemtometer) {
        return FemtometerToInch(lengthInFemtometer) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T FemtometerToNauticalMile(const T lengthInFemtometer) {
        return FemtometerToMeter(lengthInFemtometer) / (T)1852.0;
    }

    template<typename T>
    T FemtometerToFathom(const T lengthInFemtometer) {
        return FemtometerToInch(lengthInFemtometer) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T FemtometerToRod(const T lengthInFemtometer) {
        return FemtometerToInch(lengthInFemtometer) / (T)198.0;
    }

    template<typename T>
    T FemtometerToChain(const T lengthInFemtometer) {
        return FemtometerToInch(lengthInFemtometer) / (T)792.0;
    }

}//namespace EGXPhys
