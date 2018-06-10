/// @file EGXMath/Conversions/LengthConversions/Non-SI/FermiConversion.inl
///
/// @brief Implimentation of Fermi conversions
/// @author Elliot Grafil (Metex)
/// @date 6/10/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T FermiToAstronomicalUnit(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) / (T)auInMeters;
    }

    template<typename T>
    T FermiToLightYear(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) / (T)lightYearInMeters;
    }

    template<typename T>
    T FermiToParsec(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T FermiToMeter(const T lengthInFermi) {
        return lengthInFermi * (T)1e-15;
    }

    template<typename T>
    T FermiToYottameter(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) * (T)1e-24;
    }


    template<typename T>
    T FermiToZettameter(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) * (T)1e-21;
    }

    template<typename T>
    T FermiToExameter(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) * (T)1e-18;
    }

    template<typename T>
    T FermiToPetameter(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) * (T)1e-15;
    }


    template<typename T>
    T FermiToTerameter(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) * (T)1e-12;
    }

    template<typename T>
    T FermiToGigameter(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) * (T)1e-9;
    }

    template<typename T>
    T FermiToMegameter(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) * (T)1e-6;
    }

    template<typename T>
    T FermiToKilometer(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) * (T)1e-3;
    }

    template<typename T>
    T FermiToHectometer(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) * (T)1e-2;
    }

    template<typename T>
    T FermiToDecameter(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) * (T)1e-1;
    }

    template<typename T>
    T FermiToDecimeter(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) * (T)1e1;
    }

    template<typename T>
    T FermiToCentimeter(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) * (T)1e2;
    }

    template<typename T>
    T FermiToMillimeter(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) * (T)1e3;
    }

    template<typename T>
    T FermiToMicrometer(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) * (T)1e6;
    }

    template<typename T>
    T FermiToNanometer(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) * (T)1e9;
    }

    template<typename T>
    T FermiToPicometer(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) * (T)1e12;
    }

    template<typename T>
    T FermiToFemtometer(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) * (T)1e15;
    }

    template<typename T>
    T FermiToAttometer(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) * (T)1e18;
    }

    template<typename T>
    T FermiToZeptometer(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) * (T)1e21;
    }

    template<typename T>
    T FermiToYoctometer(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) * (T)1e24;
    }




    template<typename T>
    T FermiToAngstrom(const T lengthInFermi) {
        return FermiToPicometer(lengthInFermi) * (T)1e-2;
    }

    template<typename T>
    T FermiToMicron(const T lengthInFermi) {
        return FermiToMicrometer(lengthInFermi);
    }

    template<typename T>
    T FermiToCuXUnit(const T lengthInFermi) {
        
        return FermiToMeter(lengthInFermi) / (T)CuXUnit;
    }

    template<typename T>
    T FermiToMoXUnit(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T FermiToMile(const T lengthInFermi) {
        return FermiToInch(lengthInFermi) / (T)63360.0;
    }

    template<typename T>
    T FermiToYard(const T lengthInFermi) {
        return FermiToInch(lengthInFermi) / (T)36.0;
    }

    template<typename T>
    T FermiToFoot(const T lengthInFermi) {
        return FermiToInch(lengthInFermi) / (T)12.0;
    }

    template<typename T>
    T FermiToInch(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) / (T)0.0254;
    }

    template<typename T>
    T FermiToMil(const T lengthInFermi) {
        return FermiToInch(lengthInFermi) * (T)1000.0;
    }

    template<typename T>
    T FermiToThou(const T lengthInFermi) {
        return FermiToInch(lengthInFermi) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T FermiToNauticalMile(const T lengthInFermi) {
        return FermiToMeter(lengthInFermi) / (T)1852.0;
    }

    template<typename T>
    T FermiToFathom(const T lengthInFermi) {
        return FermiToInch(lengthInFermi) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T FermiToRod(const T lengthInFermi) {
        return FermiToInch(lengthInFermi) / (T)198.0;
    }

    template<typename T>
    T FermiToChain(const T lengthInFermi) {
        return FermiToInch(lengthInFermi) / (T)792.0;
    }

}//namespace EGXPhys
