/// @file EGXPhys/Astrophysics/ColorTemperature.inl
///
/// @brief Implimentation of color temperature calculations
/// @author Elliot Grafil (Metex)
/// @date 4/14/18


namespace EGXPhys {

template<typename T1,typename T2>
void ColorTemperatureToRGB(const T1 temperatureInK, T2& R, T2& G, T2& B) {
	// see http://www.tannerhelland.com/4435/convert-temperature-rgb-algorithm-code/
	T2 temp = temperatureInK / (T2)100.0;
	if (temp <= (T2)66.0)
	{
		R = (T2)1.0;
		G = ((T2)99.4708025861 * log(temp) - (T2)161.1195681661) / (T2)255.0;
		if (temp >= (T2)19.0) {
			B = ((T2)138.5177312231 * log(temp - (T2)10.0) - (T2)305.0447927307) / (T2)255.0;
		} else {
			B = (T2)0.0;
		}
	}
	else
	{
		R = ((T2)329.698727446 * pow(temp - (T2)60.0, (T2)-0.1332047592)) / (T2)255.0;
		G = ((T2)288.1221695283 * pow(temp - (T2)60.0, (T2)-0.0755148492)) / (T2)255.0;
		B = (T2)1.0;
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
