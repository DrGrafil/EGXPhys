/// @file EGXMath/Conversions/LengthConversions/KilometerConversion.inl
///
/// @brief Implimentation of Kilometer conversions
/// @author Elliot Grafil (Metex)
/// @date 6/8/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T KilometerToAstronomicalUnit(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) / (T)auInMeters;
    }

    template<typename T>
    T KilometerToLightYear(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) / (T)lightYearInMeters;
    }

    template<typename T>
    T KilometerToParsec(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T KilometerToMeter(const T lengthInKilometer) {
        return lengthInKilometer * (T)1e3;
    }

    template<typename T>
    T KilometerToYottameter(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) * (T)1e-24;
    }


    template<typename T>
    T KilometerToZettameter(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) * (T)1e-21;
    }

    template<typename T>
    T KilometerToExameter(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) * (T)1e-18;
    }

    template<typename T>
    T KilometerToPetameter(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) * (T)1e-15;
    }


    template<typename T>
    T KilometerToTerameter(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) * (T)1e-12;
    }

    template<typename T>
    T KilometerToGigameter(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) * (T)1e-9;
    }

    template<typename T>
    T KilometerToMegameter(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) * (T)1e-6;
    }

    template<typename T>
    T KilometerToKilometer(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) * (T)1e-3;
    }

    template<typename T>
    T KilometerToHectometer(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) * (T)1e-2;
    }

    template<typename T>
    T KilometerToDecameter(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) * (T)1e-1;
    }

    template<typename T>
    T KilometerToDecimeter(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) * (T)1e1;
    }

    template<typename T>
    T KilometerToCentimeter(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) * (T)1e2;
    }

    template<typename T>
    T KilometerToMillimeter(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) * (T)1e3;
    }

    template<typename T>
    T KilometerToMicrometer(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) * (T)1e6;
    }

    template<typename T>
    T KilometerToNanometer(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) * (T)1e9;
    }

    template<typename T>
    T KilometerToPicometer(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) * (T)1e12;
    }

    template<typename T>
    T KilometerToFemtometer(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) * (T)1e15;
    }

    template<typename T>
    T KilometerToAttometer(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) * (T)1e18;
    }

    template<typename T>
    T KilometerToZeptometer(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) * (T)1e21;
    }

    template<typename T>
    T KilometerToYoctometer(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) * (T)1e24;
    }




    template<typename T>
    T KilometerToAngstrom(const T lengthInKilometer) {
        return KilometerToPicometer(lengthInKilometer) * (T)1e-2;
    }

    template<typename T>
    T KilometerToFermi(const T lengthInKilometer) {
        return KilometerTofemtometer(lengthInKilometer);
    }

    template<typename T>
    T KilometerToMicron(const T lengthInKilometer) {
        return KilometerToMicrometer(lengthInKilometer);
    }

    template<typename T>
    T KilometerToCuXUnit(const T lengthInKilometer) {
        
        return KilometerToMeter(lengthInKilometer) / (T)CuXUnit;
    }

    template<typename T>
    T KilometerToMoXUnit(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T KilometerToMile(const T lengthInKilometer) {
        return KilometerToInch(lengthInKilometer) / (T)63360.0;
    }

    template<typename T>
    T KilometerToYard(const T lengthInKilometer) {
        return KilometerToInch(lengthInKilometer) / (T)36.0;
    }

    template<typename T>
    T KilometerToFoot(const T lengthInKilometer) {
        return KilometerToInch(lengthInKilometer) / (T)12.0;
    }

    template<typename T>
    T KilometerToInch(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) / (T)0.0254;
    }

    template<typename T>
    T KilometerToMil(const T lengthInKilometer) {
        return KilometerToInch(lengthInKilometer) * (T)1000.0;
    }

    template<typename T>
    T KilometerToThou(const T lengthInKilometer) {
        return KilometerToInch(lengthInKilometer) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T KilometerToNauticalMile(const T lengthInKilometer) {
        return KilometerToMeter(lengthInKilometer) / (T)1852.0;
    }

    template<typename T>
    T KilometerToFathom(const T lengthInKilometer) {
        return KilometerToInch(lengthInKilometer) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T KilometerToRod(const T lengthInKilometer) {
        return KilometerToInch(lengthInKilometer) / (T)198.0;
    }

    template<typename T>
    T KilometerToChain(const T lengthInKilometer) {
        return KilometerToInch(lengthInKilometer) / (T)792.0;
    }

}//namespace EGXPhys
