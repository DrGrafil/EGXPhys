/// @file EGXMath/Conversions/LengthConversions/Non-SI/MicronConversion.inl
///
/// @brief Implimentation of Micron conversions
/// @author Elliot Grafil (Metex)
/// @date 6/10/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T MicronToAstronomicalUnit(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) / (T)auInMeters;
    }

    template<typename T>
    T MicronToLightYear(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) / (T)lightYearInMeters;
    }

    template<typename T>
    T MicronToParsec(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T MicronToMeter(const T lengthInMicron) {
        return lengthInMicron * (T)1e-6;
    }

    template<typename T>
    T MicronToYottameter(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) * (T)1e-24;
    }


    template<typename T>
    T MicronToZettameter(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) * (T)1e-21;
    }

    template<typename T>
    T MicronToExameter(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) * (T)1e-18;
    }

    template<typename T>
    T MicronToPetameter(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) * (T)1e-15;
    }


    template<typename T>
    T MicronToTerameter(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) * (T)1e-12;
    }

    template<typename T>
    T MicronToGigameter(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) * (T)1e-9;
    }

    template<typename T>
    T MicronToMegameter(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) * (T)1e-6;
    }

    template<typename T>
    T MicronToKilometer(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) * (T)1e-3;
    }

    template<typename T>
    T MicronToHectometer(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) * (T)1e-2;
    }

    template<typename T>
    T MicronToDecameter(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) * (T)1e-1;
    }

    template<typename T>
    T MicronToDecimeter(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) * (T)1e1;
    }

    template<typename T>
    T MicronToCentimeter(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) * (T)1e2;
    }

    template<typename T>
    T MicronToMillimeter(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) * (T)1e3;
    }

    template<typename T>
    T MicronToMicrometer(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) * (T)1e6;
    }

    template<typename T>
    T MicronToNanometer(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) * (T)1e9;
    }

    template<typename T>
    T MicronToPicometer(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) * (T)1e12;
    }

    template<typename T>
    T MicronToFemtometer(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) * (T)1e15;
    }

    template<typename T>
    T MicronToAttometer(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) * (T)1e18;
    }

    template<typename T>
    T MicronToZeptometer(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) * (T)1e21;
    }

    template<typename T>
    T MicronToYoctometer(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) * (T)1e24;
    }




    template<typename T>
    T MicronToAngstrom(const T lengthInMicron) {
        return MicronToPicometer(lengthInMicron) * (T)1e-2;
    }

    template<typename T>
    T MicronToFermi(const T lengthInMicron) {
        return MicronTofemtometer(lengthInMicron);
    }

    template<typename T>
    T MicronToCuXUnit(const T lengthInMicron) {
        
        return MicronToMeter(lengthInMicron) / (T)CuXUnit;
    }

    template<typename T>
    T MicronToMoXUnit(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T MicronToMile(const T lengthInMicron) {
        return MicronToInch(lengthInMicron) / (T)63360.0;
    }

    template<typename T>
    T MicronToYard(const T lengthInMicron) {
        return MicronToInch(lengthInMicron) / (T)36.0;
    }

    template<typename T>
    T MicronToFoot(const T lengthInMicron) {
        return MicronToInch(lengthInMicron) / (T)12.0;
    }

    template<typename T>
    T MicronToInch(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) / (T)0.0254;
    }

    template<typename T>
    T MicronToMil(const T lengthInMicron) {
        return MicronToInch(lengthInMicron) * (T)1000.0;
    }

    template<typename T>
    T MicronToThou(const T lengthInMicron) {
        return MicronToInch(lengthInMicron) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T MicronToNauticalMile(const T lengthInMicron) {
        return MicronToMeter(lengthInMicron) / (T)1852.0;
    }

    template<typename T>
    T MicronToFathom(const T lengthInMicron) {
        return MicronToInch(lengthInMicron) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T MicronToRod(const T lengthInMicron) {
        return MicronToInch(lengthInMicron) / (T)198.0;
    }

    template<typename T>
    T MicronToChain(const T lengthInMicron) {
        return MicronToInch(lengthInMicron) / (T)792.0;
    }

}//namespace EGXPhys
