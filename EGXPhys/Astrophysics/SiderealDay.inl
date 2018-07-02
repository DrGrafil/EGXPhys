/// @file EGXPhys/Astrophysics/SiderealDay.inl
///
/// @brief Implimentation of sidereal day calculations
/// @author Elliot Grafil (Metex)
/// @date 7/1/18


namespace EGXPhys {

    template<typename T>
    T SiderealDay(const T orbitalPeriodIns, const T synodicDayIns) {
        return (orbitalPeriodIns * synodicDayIns) / (orbitalPeriodIns + synodicDayIns);
    }

}//namespace EGXPhys
