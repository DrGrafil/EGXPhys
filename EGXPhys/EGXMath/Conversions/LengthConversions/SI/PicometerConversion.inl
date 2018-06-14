/// @file EGXMath/Conversions/LengthConversions/SI/PicometerConversion.inl
///
/// @brief Implimentation of Picometer conversions
/// @author Elliot Grafil (Metex)
/// @date 6/8/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T PicometerToAstronomicalUnit(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) / (T)auInMeters;
    }

    template<typename T>
    T PicometerToLightYear(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) / (T)lightYearInMeters;
    }

    template<typename T>
    T PicometerToParsec(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T PicometerToMeter(const T lengthInPicometer) {
        return lengthInPicometer * (T)1e-12;
    }

    template<typename T>
    T PicometerToYottameter(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) * (T)1e-24;
    }


    template<typename T>
    T PicometerToZettameter(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) * (T)1e-21;
    }

    template<typename T>
    T PicometerToExameter(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) * (T)1e-18;
    }

    template<typename T>
    T PicometerToPetameter(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) * (T)1e-15;
    }


    template<typename T>
    T PicometerToTerameter(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) * (T)1e-12;
    }

    template<typename T>
    T PicometerToGigameter(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) * (T)1e-9;
    }

    template<typename T>
    T PicometerToMegameter(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) * (T)1e-6;
    }

    template<typename T>
    T PicometerToKilometer(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) * (T)1e-3;
    }

    template<typename T>
    T PicometerToHectometer(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) * (T)1e-2;
    }

    template<typename T>
    T PicometerToDecameter(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) * (T)1e-1;
    }

    template<typename T>
    T PicometerToDecimeter(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) * (T)1e1;
    }

    template<typename T>
    T PicometerToCentimeter(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) * (T)1e2;
    }

    template<typename T>
    T PicometerToMillimeter(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) * (T)1e3;
    }

    template<typename T>
    T PicometerToMicrometer(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) * (T)1e6;
    }

    template<typename T>
    T PicometerToNanometer(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) * (T)1e9;
    }


    template<typename T>
    T PicometerToFemtometer(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) * (T)1e15;
    }

    template<typename T>
    T PicometerToAttometer(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) * (T)1e18;
    }

    template<typename T>
    T PicometerToZeptometer(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) * (T)1e21;
    }

    template<typename T>
    T PicometerToYoctometer(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) * (T)1e24;
    }




    template<typename T>
    T PicometerToAngstrom(const T lengthInPicometer) {
        return lengthInPicometer * (T)1e-2;
    }

    template<typename T>
    T PicometerToFermi(const T lengthInPicometer) {
        return PicometerToFemtometer(lengthInPicometer);
    }

    template<typename T>
    T PicometerToMicron(const T lengthInPicometer) {
        return PicometerToMicrometer(lengthInPicometer);
    }

    template<typename T>
    T PicometerToCuXUnit(const T lengthInPicometer) {
        
        return PicometerToMeter(lengthInPicometer) / (T)CuXUnit;
    }

    template<typename T>
    T PicometerToMoXUnit(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T PicometerToMile(const T lengthInPicometer) {
        return PicometerToInch(lengthInPicometer) / (T)63360.0;
    }

    template<typename T>
    T PicometerToYard(const T lengthInPicometer) {
        return PicometerToInch(lengthInPicometer) / (T)36.0;
    }

    template<typename T>
    T PicometerToFoot(const T lengthInPicometer) {
        return PicometerToInch(lengthInPicometer) / (T)12.0;
    }

    template<typename T>
    T PicometerToInch(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) / (T)0.0254;
    }

    template<typename T>
    T PicometerToMil(const T lengthInPicometer) {
        return PicometerToInch(lengthInPicometer) * (T)1000.0;
    }

    template<typename T>
    T PicometerToThou(const T lengthInPicometer) {
        return PicometerToInch(lengthInPicometer) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T PicometerToNauticalMile(const T lengthInPicometer) {
        return PicometerToMeter(lengthInPicometer) / (T)1852.0;
    }

    template<typename T>
    T PicometerToFathom(const T lengthInPicometer) {
        return PicometerToInch(lengthInPicometer) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T PicometerToRod(const T lengthInPicometer) {
        return PicometerToInch(lengthInPicometer) / (T)198.0;
    }

    template<typename T>
    T PicometerToChain(const T lengthInPicometer) {
        return PicometerToInch(lengthInPicometer) / (T)792.0;
    }

}//namespace EGXPhys
