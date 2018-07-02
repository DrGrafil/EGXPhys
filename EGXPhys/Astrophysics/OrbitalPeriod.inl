/// @file EGXPhys/Astrophysics/OrbitalPeriod.inl
///
/// @brief Implimentation of orbital period day calculations
/// @author Elliot Grafil (Metex)
/// @date 7/1/18


namespace EGXPhys {

    template<typename T>
    T OrbitalPeriod(const T siderealDayIns, const T synodicDayIns) {
        return (synodicDayIns * siderealDayIns) / (synodicDayIns + siderealDayIns);
    }


    template<typename T>
    T OrbitalPeriodSmallBody(const T semiMajorAxisInm, const T centralBodyMassInKg) {
        return OrbitalPeriodSmallBodyFromMass(semiMajorAxisInm, centralBodyMassInKg);
    }

    template<typename T>
    T OrbitalPeriodSmallBodyFromMass(const T semiMajorAxisInm, const T centralBodyMassInKg) {
        return (T)2.0 * pi * sqrt((semiMajorAxisInm * semiMajorAxisInm * semiMajorAxisInm) / (NISTConst::G * centralBodyMassInKg));
    }

    template<typename T>
    T OrbitalPeriodSmallBodyFromSGP(const T semiMajorAxisInm, const T centralBodyStandardGravitationalParameter) {
        return (T)2.0 * pi * sqrt((semiMajorAxisInm * semiMajorAxisInm * semiMajorAxisInm) / (centralBodyStandardGravitationalParameter));
    }


    template<typename T>
    T OrbitalPeriodTwoBody(const T semiMajorAxisInm, const T firstBodyMassInKg, const T secondBodyMassInKg) {
        return OrbitalPeriodTwoBodyFromMass(semiMajorAxisInm, firstBodyMassInKg, secondBodyMassInKg);
    }

    template<typename T>
    T OrbitalPeriodTwoBodyFromMass(const T semiMajorAxisInm, const T firstBodyMassInKg, const T secondBodyMassInKg) {
        return (T)2.0 * pi * sqrt((semiMajorAxisInm * semiMajorAxisInm * semiMajorAxisInm) / (NISTConst::G * (firstBodyMassInKg + secondBodyMassInKg)) );
    }

    template<typename T>
    T OrbitalPeriodTwoBodyFromSGP(const T semiMajorAxisInm, const T firstBodyStandardGravitationalParameter, const T secondBodyStandardGravitationalParameter) {
        return (T)2.0 * pi * sqrt((semiMajorAxisInm * semiMajorAxisInm * semiMajorAxisInm) / (firstBodyStandardGravitationalParameter + secondBodyStandardGravitationalParameter) );
    }


}//namespace EGXPhys
