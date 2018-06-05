/// @file EGXMath/Conversions/DistanceConversions/MeterConversion.inl
///
/// @brief Implimentation of meters conversions
/// @author Elliot Grafil (Metex)
/// @date 6/4/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T MeterToAstronomicalUnit(const T lengthInMeter) {
        return lengthInMeter / (T)auInMeters;
    }

    template<typename T>
    T MeterToLightYear(const T lengthInMeter) {
        return lengthInMeter / (T)lightYearInMeters;
    }

    template<typename T>
    T MeterToParsec(const T lengthInMeter) {
        return lengthInMeter / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T MeterToYottameter(const T lengthInMeter) {
        return lengthInMeter * (T)1e-24;
    }


    template<typename T>
    T MeterToZettameter(const T lengthInMeter) {
        return lengthInMeter * (T)1e-21;
    }

    template<typename T>
    T MeterToExameter(const T lengthInMeter) {
        return lengthInMeter * (T)1e-18;
    }

    template<typename T>
    T MeterToPetameter(const T lengthInMeter) {
        return lengthInMeter * (T)1e-15;
    }


    template<typename T>
    T MeterToTerameter(const T lengthInMeter) {
        return lengthInMeter * (T)1e-12;
    }

    template<typename T>
    T MeterToGigameter(const T lengthInMeter) {
        return lengthInMeter * (T)1e-9;
    }

    template<typename T>
    T MeterToMegameter(const T lengthInMeter) {
        return lengthInMeter * (T)1e-6;
    }

    template<typename T>
    T MeterToKilometer(const T lengthInMeter) {
        return lengthInMeter * (T)1e-3;
    }

    template<typename T>
    T MeterToHectometer(const T lengthInMeter) {
        return lengthInMeter * (T)1e-2;
    }

    template<typename T>
    T MeterToDecameter(const T lengthInMeter) {
        return lengthInMeter * (T)1e-1;
    }

    template<typename T>
    T MeterToDecimeter(const T lengthInMeter) {
        return lengthInMeter * (T)1e1;
    }

    template<typename T>
    T MeterToCentimeter(const T lengthInMeter) {
        return lengthInMeter * (T)1e2;
    }

    template<typename T>
    T MeterToMillimeter(const T lengthInMeter) {
        return lengthInMeter * (T)1e3;
    }

    template<typename T>
    T MeterToMicrometer(const T lengthInMeter) {
        return lengthInMeter * (T)1e6;
    }

    template<typename T>
    T MeterToNanometer(const T lengthInMeter) {
        return lengthInMeter * (T)1e9;
    }

    template<typename T>
    T MeterToPicometer(const T lengthInMeter) {
        return lengthInMeter * (T)1e12;
    }

    template<typename T>
    T MeterToFemtometer(const T lengthInMeter) {
        return lengthInMeter * (T)1e15;
    }

    template<typename T>
    T MeterToAttometer(const T lengthInMeter) {
        return lengthInMeter * (T)1e18;
    }

    template<typename T>
    T MeterToZeptometer(const T lengthInMeter) {
        return lengthInMeter * (T)1e21;
    }

    template<typename T>
    T MeterToYoctometer(const T lengthInMeter) {
        return lengthInMeter * (T)1e24;
    }




    template<typename T>
    T MeterToAngstrom(const T lengthInMeter) {
        return MeterToPicometer(lengthInMeter) * (T)1e-2;
    }

    template<typename T>
    T MeterToFermi(const T lengthInMeter) {
        return MeterTofemtometer(lengthInMeter);
    }

    template<typename T>
    T MeterToMicron(const T lengthInMeter) {
        return MeterToMicrometer(lengthInMeter);
    }

    template<typename T>
    T MeterToCuXUnit(const T lengthInMeter) {
        
        return lengthInMeter / (T)CuXUnit;
    }

    template<typename T>
    T MeterToMoXUnit(const T lengthInMeter) {
        return lengthInMeter / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T MeterToMile(const T lengthInMeter) {
        return MeterToInch(lengthInMeter) / (T)63360.0;
    }

    template<typename T>
    T MeterToYard(const T lengthInMeter) {
        return MeterToInch(lengthInMeter) / (T)36.0;
    }

    template<typename T>
    T MeterToFoot(const T lengthInMeter) {
        return MeterToInch(lengthInMeter) / (T)12.0;
    }

    template<typename T>
    T MeterToInch(const T lengthInMeter) {
        return lengthInMeter / (T)0.0254;
    }

    template<typename T>
    T MeterToMil(const T lengthInMeter) {
        return MeterToInch(lengthInMeter) * (T)1000.0;
    }

    template<typename T>
    T MeterToThou(const T lengthInMeter) {
        return MeterToInch(lengthInMeter) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T MeterToNauticalMile(const T lengthInMeter) {
        return lengthInMeter / (T)1852.0;
    }

    template<typename T>
    T MeterToFathom(const T lengthInMeter) {
        return MeterToInch(lengthInMeter) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T MeterToRod(const T lengthInMeter) {
        return MeterToInch(lengthInMeter) / (T)198.0;
    }

    template<typename T>
    T MeterToChain(const T lengthInMeter) {
        return MeterToInch(lengthInMeter) / (T)792.0;
    }

}//namespace EGXPhys
