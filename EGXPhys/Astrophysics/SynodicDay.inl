/// @file EGXPhys/Astrophysics/SynodicDay.inl
///
/// @brief Implimentation of synodic day calculations
/// @author Elliot Grafil 
/// @date 7/1/18


namespace EGXPhys {

    template<typename T>
    T SynodicDay(const T orbitalPeriodIns, const T siderealDayIns) {
        return (orbitalPeriodIns * siderealDayIns) / (orbitalPeriodIns - siderealDayIns);
    }

}//namespace EGXPhys
