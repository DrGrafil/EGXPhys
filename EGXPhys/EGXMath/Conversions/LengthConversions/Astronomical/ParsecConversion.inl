/// @file EGXMath/Conversions/LengthConversions/Astronomical/ParsecConversion.inl
///
/// @brief Implimentation of Parsec conversions
/// @author Elliot Grafil (Metex)
/// @date 6/11/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T ParsecToAstronomicalUnit(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) / (T)auInMeters;
    }

    template<typename T>
    T ParsecToLightYear(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) / (T)lightYearInMeters;
    }

    template<typename T>
    T ParsecToParsec(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T ParsecToMeter(const T lengthInParsec) {
        return lengthInParsec * (T)parsecInMeters;
    }

    template<typename T>
    T ParsecToYottameter(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) * (T)1e-24;
    }


    template<typename T>
    T ParsecToZettameter(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) * (T)1e-21;
    }

    template<typename T>
    T ParsecToExameter(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) * (T)1e-18;
    }

    template<typename T>
    T ParsecToPetameter(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) * (T)1e-15;
    }


    template<typename T>
    T ParsecToTerameter(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) * (T)1e-12;
    }

    template<typename T>
    T ParsecToGigameter(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) * (T)1e-9;
    }

    template<typename T>
    T ParsecToMegameter(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) * (T)1e-6;
    }

    template<typename T>
    T ParsecToKilometer(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) * (T)1e-3;
    }

    template<typename T>
    T ParsecToHectometer(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) * (T)1e-2;
    }

    template<typename T>
    T ParsecToDecameter(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) * (T)1e-1;
    }

    template<typename T>
    T ParsecToDecimeter(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) * (T)1e1;
    }

    template<typename T>
    T ParsecToCentimeter(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) * (T)1e2;
    }

    template<typename T>
    T ParsecToMillimeter(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) * (T)1e3;
    }

    template<typename T>
    T ParsecToMicrometer(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) * (T)1e6;
    }

    template<typename T>
    T ParsecToNanometer(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) * (T)1e9;
    }

    template<typename T>
    T ParsecToPicometer(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) * (T)1e12;
    }

    template<typename T>
    T ParsecToFemtometer(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) * (T)1e15;
    }

    template<typename T>
    T ParsecToAttometer(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) * (T)1e18;
    }

    template<typename T>
    T ParsecToZeptometer(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) * (T)1e21;
    }

    template<typename T>
    T ParsecToYoctometer(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) * (T)1e24;
    }




    template<typename T>
    T ParsecToAngstrom(const T lengthInParsec) {
        return ParsecToPicometer(lengthInParsec) * (T)1e-2;
    }

    template<typename T>
    T ParsecToFermi(const T lengthInParsec) {
        return ParsecTofemtometer(lengthInParsec);
    }

    template<typename T>
    T ParsecToMicron(const T lengthInParsec) {
        return ParsecToMicrometer(lengthInParsec);
    }

    template<typename T>
    T ParsecToCuXUnit(const T lengthInParsec) {
        
        return ParsecToMeter(lengthInParsec) / (T)CuXUnit;
    }

    template<typename T>
    T ParsecToMoXUnit(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T ParsecToMile(const T lengthInParsec) {
        return ParsecToInch(lengthInParsec) / (T)63360.0;
    }

    template<typename T>
    T ParsecToYard(const T lengthInParsec) {
        return ParsecToInch(lengthInParsec) / (T)36.0;
    }

    template<typename T>
    T ParsecToFoot(const T lengthInParsec) {
        return ParsecToInch(lengthInParsec) / (T)12.0;
    }

    template<typename T>
    T ParsecToInch(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) / (T)0.0254;
    }

    template<typename T>
    T ParsecToMil(const T lengthInParsec) {
        return ParsecToInch(lengthInParsec) * (T)1000.0;
    }

    template<typename T>
    T ParsecToThou(const T lengthInParsec) {
        return ParsecToInch(lengthInParsec) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T ParsecToNauticalMile(const T lengthInParsec) {
        return ParsecToMeter(lengthInParsec) / (T)1852.0;
    }

    template<typename T>
    T ParsecToFathom(const T lengthInParsec) {
        return ParsecToInch(lengthInParsec) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T ParsecToRod(const T lengthInParsec) {
        return ParsecToInch(lengthInParsec) / (T)198.0;
    }

    template<typename T>
    T ParsecToChain(const T lengthInParsec) {
        return ParsecToInch(lengthInParsec) / (T)792.0;
    }

}//namespace EGXPhys
