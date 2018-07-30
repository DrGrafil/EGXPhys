/// @file EGXPhys/Astrophysics/HabitableZoneComposition.inl
///
/// @brief Implimentation of habitable zone composition calculations
/// @author Elliot Grafil (Metex)
/// @date 7/30/18


namespace EGXPhys{
	
    template<typename T>
    T HabitableZoneComposition(const T planetMassInkg, const T planetMeanRadiusInm){
        
        //Iron Constants
        double mi1 = 5.80;
        double ri1 = 2.52;
        double ki1 = -0.209490;
        double ki2 = 0.0804;
        double ki3 = 0.394;

        double mw1 = 5.52;
        double rw1 = 4.43;
        double kw1 = -0.209396;
        double kw2 = 0.0807;
        double kw3 = 0.375;

        double mass = planetMassInkg / earthMass;
        double radius = planetMeanRadiusInm / earthVolumetricMeanRadius;

        double rIron = ri1 * std::pow(10.0, ki1 + 1.0 / 3.0 * std::log10(mass / mi1) - ki2 * std::pow(mass / mi1, ki3));
        double rWater = rw1 * std::pow(10.0, kw1 + 1.0 / 3.0 * std::log10(mass / mw1) - kw2 * std::pow(mass / mw1, kw3));

        return (2 * radius - rWater - rIron) / (rWater - rIron);
    }
    
}//namespace EGXPhys
