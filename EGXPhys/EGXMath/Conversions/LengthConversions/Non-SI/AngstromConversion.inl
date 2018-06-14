/// @file EGXMath/Conversions/LengthConversions/Non-SI/AngstromConversion.inl
///
/// @brief Implimentation of Angstrom conversions
/// @author Elliot Grafil (Metex)
/// @date 6/10/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T AngstromToAstronomicalUnit(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) / (T)auInMeters;
    }

    template<typename T>
    T AngstromToLightYear(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) / (T)lightYearInMeters;
    }

    template<typename T>
    T AngstromToParsec(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T AngstromToMeter(const T lengthInAngstrom) {
        return lengthInAngstrom * (T)1e-10;
    }

    template<typename T>
    T AngstromToYottameter(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) * (T)1e-24;
    }


    template<typename T>
    T AngstromToZettameter(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) * (T)1e-21;
    }

    template<typename T>
    T AngstromToExameter(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) * (T)1e-18;
    }

    template<typename T>
    T AngstromToPetameter(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) * (T)1e-15;
    }


    template<typename T>
    T AngstromToTerameter(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) * (T)1e-12;
    }

    template<typename T>
    T AngstromToGigameter(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) * (T)1e-9;
    }

    template<typename T>
    T AngstromToMegameter(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) * (T)1e-6;
    }

    template<typename T>
    T AngstromToKilometer(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) * (T)1e-3;
    }

    template<typename T>
    T AngstromToHectometer(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) * (T)1e-2;
    }

    template<typename T>
    T AngstromToDecameter(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) * (T)1e-1;
    }

    template<typename T>
    T AngstromToDecimeter(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) * (T)1e1;
    }

    template<typename T>
    T AngstromToCentimeter(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) * (T)1e2;
    }

    template<typename T>
    T AngstromToMillimeter(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) * (T)1e3;
    }

    template<typename T>
    T AngstromToMicrometer(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) * (T)1e6;
    }

    template<typename T>
    T AngstromToNanometer(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) * (T)1e9;
    }

    template<typename T>
    T AngstromToPicometer(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) * (T)1e12;
    }

    template<typename T>
    T AngstromToFemtometer(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) * (T)1e15;
    }

    template<typename T>
    T AngstromToAttometer(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) * (T)1e18;
    }

    template<typename T>
    T AngstromToZeptometer(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) * (T)1e21;
    }

    template<typename T>
    T AngstromToYoctometer(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) * (T)1e24;
    }





    template<typename T>
    T AngstromToFermi(const T lengthInAngstrom) {
        return AngstromToFemtometer(lengthInAngstrom);
    }

    template<typename T>
    T AngstromToMicron(const T lengthInAngstrom) {
        return AngstromToMicrometer(lengthInAngstrom);
    }

    template<typename T>
    T AngstromToCuXUnit(const T lengthInAngstrom) {
        
        return AngstromToMeter(lengthInAngstrom) / (T)CuXUnit;
    }

    template<typename T>
    T AngstromToMoXUnit(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T AngstromToMile(const T lengthInAngstrom) {
        return AngstromToInch(lengthInAngstrom) / (T)63360.0;
    }

    template<typename T>
    T AngstromToYard(const T lengthInAngstrom) {
        return AngstromToInch(lengthInAngstrom) / (T)36.0;
    }

    template<typename T>
    T AngstromToFoot(const T lengthInAngstrom) {
        return AngstromToInch(lengthInAngstrom) / (T)12.0;
    }

    template<typename T>
    T AngstromToInch(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) / (T)0.0254;
    }

    template<typename T>
    T AngstromToMil(const T lengthInAngstrom) {
        return AngstromToInch(lengthInAngstrom) * (T)1000.0;
    }

    template<typename T>
    T AngstromToThou(const T lengthInAngstrom) {
        return AngstromToInch(lengthInAngstrom) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T AngstromToNauticalMile(const T lengthInAngstrom) {
        return AngstromToMeter(lengthInAngstrom) / (T)1852.0;
    }

    template<typename T>
    T AngstromToFathom(const T lengthInAngstrom) {
        return AngstromToInch(lengthInAngstrom) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T AngstromToRod(const T lengthInAngstrom) {
        return AngstromToInch(lengthInAngstrom) / (T)198.0;
    }

    template<typename T>
    T AngstromToChain(const T lengthInAngstrom) {
        return AngstromToInch(lengthInAngstrom) / (T)792.0;
    }

}//namespace EGXPhys
