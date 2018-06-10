/// @file EGXMath/Conversions/LengthConversions/SI/GigameterConversion.inl
///
/// @brief Implimentation of Gigameter conversions
/// @author Elliot Grafil (Metex)
/// @date 6/8/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T GigameterToAstronomicalUnit(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) / (T)auInMeters;
    }

    template<typename T>
    T GigameterToLightYear(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) / (T)lightYearInMeters;
    }

    template<typename T>
    T GigameterToParsec(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T GigameterToMeter(const T lengthInGigameter) {
        return lengthInGigameter * (T)1e9;
    }

    template<typename T>
    T GigameterToYottameter(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) * (T)1e-24;
    }


    template<typename T>
    T GigameterToZettameter(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) * (T)1e-21;
    }

    template<typename T>
    T GigameterToExameter(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) * (T)1e-18;
    }

    template<typename T>
    T GigameterToPetameter(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) * (T)1e-15;
    }


    template<typename T>
    T GigameterToTerameter(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) * (T)1e-12;
    }

 
    template<typename T>
    T GigameterToMegameter(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) * (T)1e-6;
    }

    template<typename T>
    T GigameterToKilometer(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) * (T)1e-3;
    }

    template<typename T>
    T GigameterToHectometer(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) * (T)1e-2;
    }

    template<typename T>
    T GigameterToDecameter(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) * (T)1e-1;
    }

    template<typename T>
    T GigameterToDecimeter(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) * (T)1e1;
    }

    template<typename T>
    T GigameterToCentimeter(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) * (T)1e2;
    }

    template<typename T>
    T GigameterToMillimeter(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) * (T)1e3;
    }

    template<typename T>
    T GigameterToMicrometer(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) * (T)1e6;
    }

    template<typename T>
    T GigameterToNanometer(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) * (T)1e9;
    }

    template<typename T>
    T GigameterToPicometer(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) * (T)1e12;
    }

    template<typename T>
    T GigameterToFemtometer(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) * (T)1e15;
    }

    template<typename T>
    T GigameterToAttometer(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) * (T)1e18;
    }

    template<typename T>
    T GigameterToZeptometer(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) * (T)1e21;
    }

    template<typename T>
    T GigameterToYoctometer(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) * (T)1e24;
    }




    template<typename T>
    T GigameterToAngstrom(const T lengthInGigameter) {
        return GigameterToPicometer(lengthInGigameter) * (T)1e-2;
    }

    template<typename T>
    T GigameterToFermi(const T lengthInGigameter) {
        return GigameterTofemtometer(lengthInGigameter);
    }

    template<typename T>
    T GigameterToMicron(const T lengthInGigameter) {
        return GigameterToMicrometer(lengthInGigameter);
    }

    template<typename T>
    T GigameterToCuXUnit(const T lengthInGigameter) {
        
        return GigameterToMeter(lengthInGigameter) / (T)CuXUnit;
    }

    template<typename T>
    T GigameterToMoXUnit(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T GigameterToMile(const T lengthInGigameter) {
        return GigameterToInch(lengthInGigameter) / (T)63360.0;
    }

    template<typename T>
    T GigameterToYard(const T lengthInGigameter) {
        return GigameterToInch(lengthInGigameter) / (T)36.0;
    }

    template<typename T>
    T GigameterToFoot(const T lengthInGigameter) {
        return GigameterToInch(lengthInGigameter) / (T)12.0;
    }

    template<typename T>
    T GigameterToInch(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) / (T)0.0254;
    }

    template<typename T>
    T GigameterToMil(const T lengthInGigameter) {
        return GigameterToInch(lengthInGigameter) * (T)1000.0;
    }

    template<typename T>
    T GigameterToThou(const T lengthInGigameter) {
        return GigameterToInch(lengthInGigameter) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T GigameterToNauticalMile(const T lengthInGigameter) {
        return GigameterToMeter(lengthInGigameter) / (T)1852.0;
    }

    template<typename T>
    T GigameterToFathom(const T lengthInGigameter) {
        return GigameterToInch(lengthInGigameter) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T GigameterToRod(const T lengthInGigameter) {
        return GigameterToInch(lengthInGigameter) / (T)198.0;
    }

    template<typename T>
    T GigameterToChain(const T lengthInGigameter) {
        return GigameterToInch(lengthInGigameter) / (T)792.0;
    }

}//namespace EGXPhys
