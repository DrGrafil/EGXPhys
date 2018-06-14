/// @file EGXMath/Conversions/LengthConversions/SI/NauticalMileConversion.inl
///
/// @brief Implimentation of NauticalMile conversions
/// @author Elliot Grafil (Metex)
/// @date 6/13/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T NauticalMileToAstronomicalUnit(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) / (T)auInMeters;
    }

    template<typename T>
    T NauticalMileToLightYear(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) / (T)lightYearInMeters;
    }

    template<typename T>
    T NauticalMileToParsec(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T NauticalMileToMeter(const T lengthInNauticalMile) {
        return lengthInNauticalMile * (T)1852.0;
    }

    template<typename T>
    T NauticalMileToYottameter(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) * (T)1e-24;
    }


    template<typename T>
    T NauticalMileToZettameter(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) * (T)1e-21;
    }

    template<typename T>
    T NauticalMileToExameter(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) * (T)1e-18;
    }

    template<typename T>
    T NauticalMileToPetameter(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) * (T)1e-15;
    }


    template<typename T>
    T NauticalMileToTerameter(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) * (T)1e-12;
    }

    template<typename T>
    T NauticalMileToGigameter(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) * (T)1e-9;
    }

    template<typename T>
    T NauticalMileToMegameter(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) * (T)1e-6;
    }

    template<typename T>
    T NauticalMileToKilometer(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) * (T)1e-3;
    }

    template<typename T>
    T NauticalMileToHectometer(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) * (T)1e-2;
    }

    template<typename T>
    T NauticalMileToDecameter(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) * (T)1e-1;
    }

    template<typename T>
    T NauticalMileToDecimeter(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) * (T)1e1;
    }

    template<typename T>
    T NauticalMileToCentimeter(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) * (T)1e2;
    }

    template<typename T>
    T NauticalMileToMillimeter(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) * (T)1e3;
    }

    template<typename T>
    T NauticalMileToMicrometer(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) * (T)1e6;
    }

    template<typename T>
    T NauticalMileToNanometer(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) * (T)1e9;
    }

    template<typename T>
    T NauticalMileToPicometer(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) * (T)1e12;
    }

    template<typename T>
    T NauticalMileToFemtometer(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) * (T)1e15;
    }

    template<typename T>
    T NauticalMileToAttometer(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) * (T)1e18;
    }

    template<typename T>
    T NauticalMileToZeptometer(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) * (T)1e21;
    }

    template<typename T>
    T NauticalMileToYoctometer(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) * (T)1e24;
    }




    template<typename T>
    T NauticalMileToAngstrom(const T lengthInNauticalMile) {
        return NauticalMileToPicometer(lengthInNauticalMile) * (T)1e-2;
    }

    template<typename T>
    T NauticalMileToFermi(const T lengthInNauticalMile) {
        return NauticalMileToFemtometer(lengthInNauticalMile);
    }

    template<typename T>
    T NauticalMileToMicron(const T lengthInNauticalMile) {
        return NauticalMileToMicrometer(lengthInNauticalMile);
    }

    template<typename T>
    T NauticalMileToCuXUnit(const T lengthInNauticalMile) {
        
        return NauticalMileToMeter(lengthInNauticalMile) / (T)CuXUnit;
    }

    template<typename T>
    T NauticalMileToMoXUnit(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T NauticalMileToMile(const T lengthInNauticalMile) {
        return NauticalMileToInch(lengthInNauticalMile) / (T)63360.0;
    }

    template<typename T>
    T NauticalMileToYard(const T lengthInNauticalMile) {
        return NauticalMileToInch(lengthInNauticalMile) / (T)36.0;
    }

    template<typename T>
    T NauticalMileToFoot(const T lengthInNauticalMile) {
        return NauticalMileToInch(lengthInNauticalMile) / (T)12.0;
    }

    template<typename T>
    T NauticalMileToInch(const T lengthInNauticalMile) {
        return NauticalMileToMeter(lengthInNauticalMile) / (T)0.0254;
    }

    template<typename T>
    T NauticalMileToMil(const T lengthInNauticalMile) {
        return NauticalMileToInch(lengthInNauticalMile) * (T)1000.0;
    }

    template<typename T>
    T NauticalMileToThou(const T lengthInNauticalMile) {
        return NauticalMileToInch(lengthInNauticalMile) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T NauticalMileToFathom(const T lengthInNauticalMile) {
        return NauticalMileToInch(lengthInNauticalMile) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T NauticalMileToRod(const T lengthInNauticalMile) {
        return NauticalMileToInch(lengthInNauticalMile) / (T)198.0;
    }

    template<typename T>
    T NauticalMileToChain(const T lengthInNauticalMile) {
        return NauticalMileToInch(lengthInNauticalMile) / (T)792.0;
    }

}//namespace EGXPhys
