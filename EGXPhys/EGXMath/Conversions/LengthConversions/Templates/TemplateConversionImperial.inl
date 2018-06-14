/// @file EGXMath/Conversions/LengthConversions/Imperial/uzitzsConversion.inl
///
/// @brief Implimentation of uzitzs conversions
/// @author Elliot Grafil (Metex)
/// @date 6/13/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T uzitzsToAstronomicalUnit(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) / (T)auInMeters;
    }

    template<typename T>
    T uzitzsToLightYear(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) / (T)lightYearInMeters;
    }

    template<typename T>
    T uzitzsToParsec(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T uzitzsToMeter(const T lengthInuzitzs) {
        return uzitzsToInch(lengthInuzitzs) * (T)0.0254;
    }

    template<typename T>
    T uzitzsToYottameter(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) * (T)1e-24;
    }


    template<typename T>
    T uzitzsToZettameter(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) * (T)1e-21;
    }

    template<typename T>
    T uzitzsToExameter(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) * (T)1e-18;
    }

    template<typename T>
    T uzitzsToPetameter(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) * (T)1e-15;
    }


    template<typename T>
    T uzitzsToTerameter(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) * (T)1e-12;
    }

    template<typename T>
    T uzitzsToGigameter(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) * (T)1e-9;
    }

    template<typename T>
    T uzitzsToMegameter(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) * (T)1e-6;
    }

    template<typename T>
    T uzitzsToKilometer(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) * (T)1e-3;
    }

    template<typename T>
    T uzitzsToHectometer(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) * (T)1e-2;
    }

    template<typename T>
    T uzitzsToDecameter(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) * (T)1e-1;
    }

    template<typename T>
    T uzitzsToDecimeter(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) * (T)1e1;
    }

    template<typename T>
    T uzitzsToCentimeter(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) * (T)1e2;
    }

    template<typename T>
    T uzitzsToMillimeter(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) * (T)1e3;
    }

    template<typename T>
    T uzitzsToMicrometer(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) * (T)1e6;
    }

    template<typename T>
    T uzitzsToNanometer(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) * (T)1e9;
    }

    template<typename T>
    T uzitzsToPicometer(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) * (T)1e12;
    }

    template<typename T>
    T uzitzsToFemtometer(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) * (T)1e15;
    }

    template<typename T>
    T uzitzsToAttometer(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) * (T)1e18;
    }

    template<typename T>
    T uzitzsToZeptometer(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) * (T)1e21;
    }

    template<typename T>
    T uzitzsToYoctometer(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) * (T)1e24;
    }




    template<typename T>
    T uzitzsToAngstrom(const T lengthInuzitzs) {
        return uzitzsToPicometer(lengthInuzitzs) * (T)1e-2;
    }

    template<typename T>
    T uzitzsToFermi(const T lengthInuzitzs) {
        return uzitzsTofemtometer(lengthInuzitzs);
    }

    template<typename T>
    T uzitzsToMicron(const T lengthInuzitzs) {
        return uzitzsToMicrometer(lengthInuzitzs);
    }

    template<typename T>
    T uzitzsToCuXUnit(const T lengthInuzitzs) {
        
        return uzitzsToMeter(lengthInuzitzs) / (T)CuXUnit;
    }

    template<typename T>
    T uzitzsToMoXUnit(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T uzitzsToMile(const T lengthInuzitzs) {
        return uzitzsToInch(lengthInuzitzs) / (T)63360.0;
    }

    template<typename T>
    T uzitzsToYard(const T lengthInuzitzs) {
        return uzitzsToInch(lengthInuzitzs) / (T)36.0;
    }

    template<typename T>
    T uzitzsToFoot(const T lengthInuzitzs) {
        return uzitzsToInch(lengthInuzitzs) / (T)12.0;
    }

    template<typename T>
    T uzitzsToInch(const T lengthInuzitzs) {
        return lengthInuzitzs;
    }

    template<typename T>
    T uzitzsToMil(const T lengthInuzitzs) {
        return uzitzsToInch(lengthInuzitzs) * (T)1000.0;
    }

    template<typename T>
    T uzitzsToThou(const T lengthInuzitzs) {
        return uzitzsToInch(lengthInuzitzs) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T uzitzsToNauticalMile(const T lengthInuzitzs) {
        return uzitzsToMeter(lengthInuzitzs) / (T)1852.0;
    }

    template<typename T>
    T uzitzsToFathom(const T lengthInuzitzs) {
        return uzitzsToInch(lengthInuzitzs) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T uzitzsToRod(const T lengthInuzitzs) {
        return uzitzsToInch(lengthInuzitzs) / (T)198.0;
    }

    template<typename T>
    T uzitzsToChain(const T lengthInuzitzs) {
        return uzitzsToInch(lengthInuzitzs) / (T)792.0;
    }

}//namespace EGXPhys
