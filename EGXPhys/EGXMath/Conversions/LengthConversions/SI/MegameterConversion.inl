/// @file EGXMath/Conversions/LengthConversions/SI/MegameterConversion.inl
///
/// @brief Implimentation of Megameter conversions
/// @author Elliot Grafil (Metex)
/// @date 6/8/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T MegameterToAstronomicalUnit(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) / (T)auInMeters;
    }

    template<typename T>
    T MegameterToLightYear(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) / (T)lightYearInMeters;
    }

    template<typename T>
    T MegameterToParsec(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T MegameterToMeter(const T lengthInMegameter) {
        return lengthInMegameter * (T)1e6;
    }

    template<typename T>
    T MegameterToYottameter(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) * (T)1e-24;
    }


    template<typename T>
    T MegameterToZettameter(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) * (T)1e-21;
    }

    template<typename T>
    T MegameterToExameter(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) * (T)1e-18;
    }

    template<typename T>
    T MegameterToPetameter(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) * (T)1e-15;
    }


    template<typename T>
    T MegameterToTerameter(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) * (T)1e-12;
    }

    template<typename T>
    T MegameterToGigameter(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) * (T)1e-9;
    }


    template<typename T>
    T MegameterToKilometer(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) * (T)1e-3;
    }

    template<typename T>
    T MegameterToHectometer(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) * (T)1e-2;
    }

    template<typename T>
    T MegameterToDecameter(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) * (T)1e-1;
    }

    template<typename T>
    T MegameterToDecimeter(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) * (T)1e1;
    }

    template<typename T>
    T MegameterToCentimeter(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) * (T)1e2;
    }

    template<typename T>
    T MegameterToMillimeter(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) * (T)1e3;
    }

    template<typename T>
    T MegameterToMicrometer(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) * (T)1e6;
    }

    template<typename T>
    T MegameterToNanometer(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) * (T)1e9;
    }

    template<typename T>
    T MegameterToPicometer(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) * (T)1e12;
    }

    template<typename T>
    T MegameterToFemtometer(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) * (T)1e15;
    }

    template<typename T>
    T MegameterToAttometer(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) * (T)1e18;
    }

    template<typename T>
    T MegameterToZeptometer(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) * (T)1e21;
    }

    template<typename T>
    T MegameterToYoctometer(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) * (T)1e24;
    }




    template<typename T>
    T MegameterToAngstrom(const T lengthInMegameter) {
        return MegameterToPicometer(lengthInMegameter) * (T)1e-2;
    }

    template<typename T>
    T MegameterToFermi(const T lengthInMegameter) {
        return MegameterTofemtometer(lengthInMegameter);
    }

    template<typename T>
    T MegameterToMicron(const T lengthInMegameter) {
        return MegameterToMicrometer(lengthInMegameter);
    }

    template<typename T>
    T MegameterToCuXUnit(const T lengthInMegameter) {
        
        return MegameterToMeter(lengthInMegameter) / (T)CuXUnit;
    }

    template<typename T>
    T MegameterToMoXUnit(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T MegameterToMile(const T lengthInMegameter) {
        return MegameterToInch(lengthInMegameter) / (T)63360.0;
    }

    template<typename T>
    T MegameterToYard(const T lengthInMegameter) {
        return MegameterToInch(lengthInMegameter) / (T)36.0;
    }

    template<typename T>
    T MegameterToFoot(const T lengthInMegameter) {
        return MegameterToInch(lengthInMegameter) / (T)12.0;
    }

    template<typename T>
    T MegameterToInch(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) / (T)0.0254;
    }

    template<typename T>
    T MegameterToMil(const T lengthInMegameter) {
        return MegameterToInch(lengthInMegameter) * (T)1000.0;
    }

    template<typename T>
    T MegameterToThou(const T lengthInMegameter) {
        return MegameterToInch(lengthInMegameter) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T MegameterToNauticalMile(const T lengthInMegameter) {
        return MegameterToMeter(lengthInMegameter) / (T)1852.0;
    }

    template<typename T>
    T MegameterToFathom(const T lengthInMegameter) {
        return MegameterToInch(lengthInMegameter) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T MegameterToRod(const T lengthInMegameter) {
        return MegameterToInch(lengthInMegameter) / (T)198.0;
    }

    template<typename T>
    T MegameterToChain(const T lengthInMegameter) {
        return MegameterToInch(lengthInMegameter) / (T)792.0;
    }

}//namespace EGXPhys
