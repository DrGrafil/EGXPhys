/// @file EGXMath/Conversions/LengthConversions/Imperial/MilConversion.inl
///
/// @brief Implimentation of Mil conversions
/// @author Elliot Grafil 
/// @date 6/11/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T MilToAstronomicalUnit(const T lengthInMil) {
        return MilToMeter(lengthInMil) / (T)auInMeters;
    }

    template<typename T>
    T MilToLightYear(const T lengthInMil) {
        return MilToMeter(lengthInMil) / (T)lightYearInMeters;
    }

    template<typename T>
    T MilToParsec(const T lengthInMil) {
        return MilToMeter(lengthInMil) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T MilToMeter(const T lengthInMil) {
        return MilToInch(lengthInMil) * (T)0.0254;
    }

    template<typename T>
    T MilToYottameter(const T lengthInMil) {
        return MilToMeter(lengthInMil) * (T)1e-24;
    }


    template<typename T>
    T MilToZettameter(const T lengthInMil) {
        return MilToMeter(lengthInMil) * (T)1e-21;
    }

    template<typename T>
    T MilToExameter(const T lengthInMil) {
        return MilToMeter(lengthInMil) * (T)1e-18;
    }

    template<typename T>
    T MilToPetameter(const T lengthInMil) {
        return MilToMeter(lengthInMil) * (T)1e-15;
    }


    template<typename T>
    T MilToTerameter(const T lengthInMil) {
        return MilToMeter(lengthInMil) * (T)1e-12;
    }

    template<typename T>
    T MilToGigameter(const T lengthInMil) {
        return MilToMeter(lengthInMil) * (T)1e-9;
    }

    template<typename T>
    T MilToMegameter(const T lengthInMil) {
        return MilToMeter(lengthInMil) * (T)1e-6;
    }

    template<typename T>
    T MilToKilometer(const T lengthInMil) {
        return MilToMeter(lengthInMil) * (T)1e-3;
    }

    template<typename T>
    T MilToHectometer(const T lengthInMil) {
        return MilToMeter(lengthInMil) * (T)1e-2;
    }

    template<typename T>
    T MilToDecameter(const T lengthInMil) {
        return MilToMeter(lengthInMil) * (T)1e-1;
    }

    template<typename T>
    T MilToDecimeter(const T lengthInMil) {
        return MilToMeter(lengthInMil) * (T)1e1;
    }

    template<typename T>
    T MilToCentimeter(const T lengthInMil) {
        return MilToMeter(lengthInMil) * (T)1e2;
    }

    template<typename T>
    T MilToMillimeter(const T lengthInMil) {
        return MilToMeter(lengthInMil) * (T)1e3;
    }

    template<typename T>
    T MilToMicrometer(const T lengthInMil) {
        return MilToMeter(lengthInMil) * (T)1e6;
    }

    template<typename T>
    T MilToNanometer(const T lengthInMil) {
        return MilToMeter(lengthInMil) * (T)1e9;
    }

    template<typename T>
    T MilToPicometer(const T lengthInMil) {
        return MilToMeter(lengthInMil) * (T)1e12;
    }

    template<typename T>
    T MilToFemtometer(const T lengthInMil) {
        return MilToMeter(lengthInMil) * (T)1e15;
    }

    template<typename T>
    T MilToAttometer(const T lengthInMil) {
        return MilToMeter(lengthInMil) * (T)1e18;
    }

    template<typename T>
    T MilToZeptometer(const T lengthInMil) {
        return MilToMeter(lengthInMil) * (T)1e21;
    }

    template<typename T>
    T MilToYoctometer(const T lengthInMil) {
        return MilToMeter(lengthInMil) * (T)1e24;
    }




    template<typename T>
    T MilToAngstrom(const T lengthInMil) {
        return MilToPicometer(lengthInMil) * (T)1e-2;
    }

    template<typename T>
    T MilToFermi(const T lengthInMil) {
        return MilToFemtometer(lengthInMil);
    }

    template<typename T>
    T MilToMicron(const T lengthInMil) {
        return MilToMicrometer(lengthInMil);
    }

    template<typename T>
    T MilToCuXUnit(const T lengthInMil) {
        
        return MilToMeter(lengthInMil) / (T)CuXUnit;
    }

    template<typename T>
    T MilToMoXUnit(const T lengthInMil) {
        return MilToMeter(lengthInMil) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T MilToMile(const T lengthInMil) {
        return MilToInch(lengthInMil) / (T)63360.0;
    }

    template<typename T>
    T MilToYard(const T lengthInMil) {
        return MilToInch(lengthInMil) / (T)36.0;
    }

    template<typename T>
    T MilToFoot(const T lengthInMil) {
        return MilToInch(lengthInMil) / (T)12.0;
    }

    template<typename T>
    T MilToInch(const T lengthInMil) {
        return lengthInMil / (T)1000.0;
    }


    template<typename T>
    T MilToThou(const T lengthInMil) {
        return MilToInch(lengthInMil) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T MilToNauticalMile(const T lengthInMil) {
        return MilToMeter(lengthInMil) / (T)1852.0;
    }

    template<typename T>
    T MilToFathom(const T lengthInMil) {
        return MilToInch(lengthInMil) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T MilToRod(const T lengthInMil) {
        return MilToInch(lengthInMil) / (T)198.0;
    }

    template<typename T>
    T MilToChain(const T lengthInMil) {
        return MilToInch(lengthInMil) / (T)792.0;
    }

}//namespace EGXPhys
