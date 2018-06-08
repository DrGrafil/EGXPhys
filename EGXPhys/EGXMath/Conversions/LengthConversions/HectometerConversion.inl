/// @file EGXMath/Conversions/DistanceConversions/HectometerConversion.inl
///
/// @brief Implimentation of Hectometer conversions
/// @author Elliot Grafil (Metex)
/// @date 6/8/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T HectometerToAstronomicalUnit(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) / (T)auInMeters;
    }

    template<typename T>
    T HectometerToLightYear(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) / (T)lightYearInMeters;
    }

    template<typename T>
    T HectometerToParsec(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T HectometerToMeter(const T lengthInHectometer) {
        return lengthInHectometer * (T)1e2;
    }

    template<typename T>
    T HectometerToYottameter(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) * (T)1e-24;
    }


    template<typename T>
    T HectometerToZettameter(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) * (T)1e-21;
    }

    template<typename T>
    T HectometerToExameter(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) * (T)1e-18;
    }

    template<typename T>
    T HectometerToPetameter(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) * (T)1e-15;
    }


    template<typename T>
    T HectometerToTerameter(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) * (T)1e-12;
    }

    template<typename T>
    T HectometerToGigameter(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) * (T)1e-9;
    }

    template<typename T>
    T HectometerToMegameter(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) * (T)1e-6;
    }

    template<typename T>
    T HectometerToKilometer(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) * (T)1e-3;
    }

    template<typename T>
    T HectometerToHectometer(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) * (T)1e-2;
    }

    template<typename T>
    T HectometerToDecameter(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) * (T)1e-1;
    }

    template<typename T>
    T HectometerToDecimeter(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) * (T)1e1;
    }

    template<typename T>
    T HectometerToCentimeter(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) * (T)1e2;
    }

    template<typename T>
    T HectometerToMillimeter(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) * (T)1e3;
    }

    template<typename T>
    T HectometerToMicrometer(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) * (T)1e6;
    }

    template<typename T>
    T HectometerToNanometer(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) * (T)1e9;
    }

    template<typename T>
    T HectometerToPicometer(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) * (T)1e12;
    }

    template<typename T>
    T HectometerToFemtometer(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) * (T)1e15;
    }

    template<typename T>
    T HectometerToAttometer(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) * (T)1e18;
    }

    template<typename T>
    T HectometerToZeptometer(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) * (T)1e21;
    }

    template<typename T>
    T HectometerToYoctometer(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) * (T)1e24;
    }




    template<typename T>
    T HectometerToAngstrom(const T lengthInHectometer) {
        return HectometerToPicometer(lengthInHectometer) * (T)1e-2;
    }

    template<typename T>
    T HectometerToFermi(const T lengthInHectometer) {
        return HectometerTofemtometer(lengthInHectometer);
    }

    template<typename T>
    T HectometerToMicron(const T lengthInHectometer) {
        return HectometerToMicrometer(lengthInHectometer);
    }

    template<typename T>
    T HectometerToCuXUnit(const T lengthInHectometer) {
        
        return HectometerToMeter(lengthInHectometer) / (T)CuXUnit;
    }

    template<typename T>
    T HectometerToMoXUnit(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T HectometerToMile(const T lengthInHectometer) {
        return HectometerToInch(lengthInHectometer) / (T)63360.0;
    }

    template<typename T>
    T HectometerToYard(const T lengthInHectometer) {
        return HectometerToInch(lengthInHectometer) / (T)36.0;
    }

    template<typename T>
    T HectometerToFoot(const T lengthInHectometer) {
        return HectometerToInch(lengthInHectometer) / (T)12.0;
    }

    template<typename T>
    T HectometerToInch(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) / (T)0.0254;
    }

    template<typename T>
    T HectometerToMil(const T lengthInHectometer) {
        return HectometerToInch(lengthInHectometer) * (T)1000.0;
    }

    template<typename T>
    T HectometerToThou(const T lengthInHectometer) {
        return HectometerToInch(lengthInHectometer) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T HectometerToNauticalMile(const T lengthInHectometer) {
        return HectometerToMeter(lengthInHectometer) / (T)1852.0;
    }

    template<typename T>
    T HectometerToFathom(const T lengthInHectometer) {
        return HectometerToInch(lengthInHectometer) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T HectometerToRod(const T lengthInHectometer) {
        return HectometerToInch(lengthInHectometer) / (T)198.0;
    }

    template<typename T>
    T HectometerToChain(const T lengthInHectometer) {
        return HectometerToInch(lengthInHectometer) / (T)792.0;
    }

}//namespace EGXPhys
