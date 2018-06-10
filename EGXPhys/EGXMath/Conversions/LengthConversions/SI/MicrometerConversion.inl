/// @file EGXMath/Conversions/LengthConversions/SI/MicrometerConversion.inl
///
/// @brief Implimentation of Micrometer conversions
/// @author Elliot Grafil (Metex)
/// @date 6/8/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T MicrometerToAstronomicalUnit(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) / (T)auInMeters;
    }

    template<typename T>
    T MicrometerToLightYear(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) / (T)lightYearInMeters;
    }

    template<typename T>
    T MicrometerToParsec(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T MicrometerToMeter(const T lengthInMicrometer) {
        return lengthInMicrometer * (T)1e-6;
    }

    template<typename T>
    T MicrometerToYottameter(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) * (T)1e-24;
    }


    template<typename T>
    T MicrometerToZettameter(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) * (T)1e-21;
    }

    template<typename T>
    T MicrometerToExameter(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) * (T)1e-18;
    }

    template<typename T>
    T MicrometerToPetameter(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) * (T)1e-15;
    }


    template<typename T>
    T MicrometerToTerameter(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) * (T)1e-12;
    }

    template<typename T>
    T MicrometerToGigameter(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) * (T)1e-9;
    }

    template<typename T>
    T MicrometerToMegameter(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) * (T)1e-6;
    }

    template<typename T>
    T MicrometerToKilometer(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) * (T)1e-3;
    }

    template<typename T>
    T MicrometerToHectometer(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) * (T)1e-2;
    }

    template<typename T>
    T MicrometerToDecameter(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) * (T)1e-1;
    }

    template<typename T>
    T MicrometerToDecimeter(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) * (T)1e1;
    }

    template<typename T>
    T MicrometerToCentimeter(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) * (T)1e2;
    }

    template<typename T>
    T MicrometerToMillimeter(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) * (T)1e3;
    }

    template<typename T>
    T MicrometerToNanometer(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) * (T)1e9;
    }

    template<typename T>
    T MicrometerToPicometer(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) * (T)1e12;
    }

    template<typename T>
    T MicrometerToFemtometer(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) * (T)1e15;
    }

    template<typename T>
    T MicrometerToAttometer(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) * (T)1e18;
    }

    template<typename T>
    T MicrometerToZeptometer(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) * (T)1e21;
    }

    template<typename T>
    T MicrometerToYoctometer(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) * (T)1e24;
    }




    template<typename T>
    T MicrometerToAngstrom(const T lengthInMicrometer) {
        return MicrometerToPicometer(lengthInMicrometer) * (T)1e-2;
    }

    template<typename T>
    T MicrometerToFermi(const T lengthInMicrometer) {
        return MicrometerTofemtometer(lengthInMicrometer);
    }

    template<typename T>
    T MicrometerToMicron(const T lengthInMicrometer) {
        return MicrometerToMicrometer(lengthInMicrometer);
    }

    template<typename T>
    T MicrometerToCuXUnit(const T lengthInMicrometer) {
        
        return MicrometerToMeter(lengthInMicrometer) / (T)CuXUnit;
    }

    template<typename T>
    T MicrometerToMoXUnit(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T MicrometerToMile(const T lengthInMicrometer) {
        return MicrometerToInch(lengthInMicrometer) / (T)63360.0;
    }

    template<typename T>
    T MicrometerToYard(const T lengthInMicrometer) {
        return MicrometerToInch(lengthInMicrometer) / (T)36.0;
    }

    template<typename T>
    T MicrometerToFoot(const T lengthInMicrometer) {
        return MicrometerToInch(lengthInMicrometer) / (T)12.0;
    }

    template<typename T>
    T MicrometerToInch(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) / (T)0.0254;
    }

    template<typename T>
    T MicrometerToMil(const T lengthInMicrometer) {
        return MicrometerToInch(lengthInMicrometer) * (T)1000.0;
    }

    template<typename T>
    T MicrometerToThou(const T lengthInMicrometer) {
        return MicrometerToInch(lengthInMicrometer) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T MicrometerToNauticalMile(const T lengthInMicrometer) {
        return MicrometerToMeter(lengthInMicrometer) / (T)1852.0;
    }

    template<typename T>
    T MicrometerToFathom(const T lengthInMicrometer) {
        return MicrometerToInch(lengthInMicrometer) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T MicrometerToRod(const T lengthInMicrometer) {
        return MicrometerToInch(lengthInMicrometer) / (T)198.0;
    }

    template<typename T>
    T MicrometerToChain(const T lengthInMicrometer) {
        return MicrometerToInch(lengthInMicrometer) / (T)792.0;
    }

}//namespace EGXPhys
