/// @file EGXPhys/Astrophysics/SolarDay.inl
///
/// @brief Implimentation of solar day calculations
/// @author Elliot Grafil (Metex)
/// @date 7/1/18


namespace EGXPhys {

    template<typename T>
    T SolarDay(const T orbitalPeriodIns, const T siderealDayIns) {
        return (orbitalPeriodIns * siderealDayIns) / (orbitalPeriodIns - siderealDayIns);
    }

}//namespace EGXPhys
