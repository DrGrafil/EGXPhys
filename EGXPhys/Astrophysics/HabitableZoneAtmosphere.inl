/// @file EGXPhys/Astrophysics/HabitableZoneAtmosphere.inl
///
/// @brief Implimentation of habitable zone atmosphere calculations
/// @author Elliot Grafil 
/// @date 7/30/18


namespace EGXPhys{
	

    template<typename T>
    T HabitableZoneAtmosphere(const T planetMassInkg, const T planetRadiusInm, const T planetEquilibriumTemperatureInK)
    {
        double veH = std::sqrt(0.02 * planetEquilibriumTemperatureInK / 1.00794); // Escape velocity of Hydrogen
        double veN = std::sqrt(0.02 * planetEquilibriumTemperatureInK / 14.0067); // Escape velocity of Nitrogen

        return ((T)2.0 * std::sqrt((planetMassInkg / earthMass) / (planetRadiusInm / earthVolumetricMeanRadius)) - veH - veN) / (veH - veN);
    }
    
}//namespace EGXPhys
