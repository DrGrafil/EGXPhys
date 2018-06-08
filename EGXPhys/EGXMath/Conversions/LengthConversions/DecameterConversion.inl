/// @file EGXMath/Conversions/DistanceConversions/DecameterConversion.inl
///
/// @brief Implimentation of Decameter conversions
/// @author Elliot Grafil (Metex)
/// @date 6/8/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T DecameterToAstronomicalUnit(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) / (T)auInMeters;
    }

    template<typename T>
    T DecameterToLightYear(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) / (T)lightYearInMeters;
    }

    template<typename T>
    T DecameterToParsec(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T DecameterToMeter(const T lengthInDecameter) {
        return lengthInDecameter * (T)1e1;
    }

    template<typename T>
    T DecameterToYottameter(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) * (T)1e-24;
    }


    template<typename T>
    T DecameterToZettameter(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) * (T)1e-21;
    }

    template<typename T>
    T DecameterToExameter(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) * (T)1e-18;
    }

    template<typename T>
    T DecameterToPetameter(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) * (T)1e-15;
    }


    template<typename T>
    T DecameterToTerameter(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) * (T)1e-12;
    }

    template<typename T>
    T DecameterToGigameter(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) * (T)1e-9;
    }

    template<typename T>
    T DecameterToMegameter(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) * (T)1e-6;
    }

    template<typename T>
    T DecameterToKilometer(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) * (T)1e-3;
    }

    template<typename T>
    T DecameterToHectometer(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) * (T)1e-2;
    }

    template<typename T>
    T DecameterToDecimeter(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) * (T)1e1;
    }

    template<typename T>
    T DecameterToCentimeter(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) * (T)1e2;
    }

    template<typename T>
    T DecameterToMillimeter(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) * (T)1e3;
    }

    template<typename T>
    T DecameterToMicrometer(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) * (T)1e6;
    }

    template<typename T>
    T DecameterToNanometer(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) * (T)1e9;
    }

    template<typename T>
    T DecameterToPicometer(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) * (T)1e12;
    }

    template<typename T>
    T DecameterToFemtometer(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) * (T)1e15;
    }

    template<typename T>
    T DecameterToAttometer(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) * (T)1e18;
    }

    template<typename T>
    T DecameterToZeptometer(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) * (T)1e21;
    }

    template<typename T>
    T DecameterToYoctometer(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) * (T)1e24;
    }




    template<typename T>
    T DecameterToAngstrom(const T lengthInDecameter) {
        return DecameterToPicometer(lengthInDecameter) * (T)1e-2;
    }

    template<typename T>
    T DecameterToFermi(const T lengthInDecameter) {
        return DecameterTofemtometer(lengthInDecameter);
    }

    template<typename T>
    T DecameterToMicron(const T lengthInDecameter) {
        return DecameterToMicrometer(lengthInDecameter);
    }

    template<typename T>
    T DecameterToCuXUnit(const T lengthInDecameter) {
        
        return DecameterToMeter(lengthInDecameter) / (T)CuXUnit;
    }

    template<typename T>
    T DecameterToMoXUnit(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T DecameterToMile(const T lengthInDecameter) {
        return DecameterToInch(lengthInDecameter) / (T)63360.0;
    }

    template<typename T>
    T DecameterToYard(const T lengthInDecameter) {
        return DecameterToInch(lengthInDecameter) / (T)36.0;
    }

    template<typename T>
    T DecameterToFoot(const T lengthInDecameter) {
        return DecameterToInch(lengthInDecameter) / (T)12.0;
    }

    template<typename T>
    T DecameterToInch(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) / (T)0.0254;
    }

    template<typename T>
    T DecameterToMil(const T lengthInDecameter) {
        return DecameterToInch(lengthInDecameter) * (T)1000.0;
    }

    template<typename T>
    T DecameterToThou(const T lengthInDecameter) {
        return DecameterToInch(lengthInDecameter) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T DecameterToNauticalMile(const T lengthInDecameter) {
        return DecameterToMeter(lengthInDecameter) / (T)1852.0;
    }

    template<typename T>
    T DecameterToFathom(const T lengthInDecameter) {
        return DecameterToInch(lengthInDecameter) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T DecameterToRod(const T lengthInDecameter) {
        return DecameterToInch(lengthInDecameter) / (T)198.0;
    }

    template<typename T>
    T DecameterToChain(const T lengthInDecameter) {
        return DecameterToInch(lengthInDecameter) / (T)792.0;
    }

}//namespace EGXPhys
