/// @file EGXPhys/Astrophysics/ColorTemperature.inl
///
/// @brief Implimentation of color temperature calculations
/// @author Elliot Grafil (Metex)
/// @date 4/14/18


namespace EGXPhys {

template<typename T>
void ColorTemperatureToRGB(const T temperatureInK, T& R, T& G, T& B) {
	// see http://www.tannerhelland.com/4435/convert-temperature-rgb-algorithm-code/
	T temp = temperatureInK / 100.0;
	if (temp <= 66.0)
	{
		R = 1.0;
		G = (99.4708025861 * log(temp) - 161.1195681661) / 255.0;
		if (temp >= 19.0) {
			B = (138.5177312231 * log(temp - 10.0) - 305.0447927307) / 255.0;
		} else {
			B = 0.0;
		}
	}
	else
	{
		R = (329.698727446 * pow(temp - 60.0, -0.1332047592)) / 255.0;
		G = (288.1221695283 * pow(temp - 60.0, -0.0755148492)) / 255.0;
		B = 1.0;
	}
}

#ifdef EGXPHYS_GLM

template<typename T>
glm::vec3 ColorTemperatureToRGB(const T temperatureInK) {
	glm::vec3 rgb;
	ColorTemperatureToRGB(temperatureInK, rgb.r, rgb.g, rgb.b);
	return rgb;
}

#endif // EGXPHYS_GLM

}//namespace EGXPhys
