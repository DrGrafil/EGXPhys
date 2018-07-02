/// @file EGXPhys/Astrophysics/SiderealDay.inl
///
/// @brief Implimentation of sidereal day calculations
/// @author Elliot Grafil (Metex)
/// @date 7/1/18


namespace EGXPhys {

    template<typename T>
    T SiderealDay(const T orbitalPeriodIns, const T solarDayIns) {
        return (orbitalPeriodIns * solarDayIns) / (orbitalPeriodIns + solarDayIns);
    }

}//namespace EGXPhys
