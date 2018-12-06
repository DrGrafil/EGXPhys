/// @file EGXPhys/Astrophysics/B-VColor.inl
///
/// @brief Implimentation of B-V color calculations
/// @author Elliot Grafil 
/// @date 4/14/18


namespace EGXPhys{
	//add ramirez
	//https://www.hs.uni-hamburg.de/DE/Ins/Per/Czesla/PyA/PyA/pyaslDoc/aslDoc/aslExt_1Doc/ramirez2005.html
	template<typename T>
	T BVColorToTempreture(const T BV)
	{
		return (T)(4600.0* (
			(1.0 / (0.92*(BV)+1.70)) +
			(1.0 / (0.92*(BV)+0.62))
			)
			);
	}

	template<typename T>
	T BVColorToTempretureBallesteros(const T BV)
	{
		return (T)(4600.0* (
			(1.0 / (0.92*(BV)+1.70)) +
			(1.0 / (0.92*(BV)+0.62))
			)
			);
	}

}//namespace EGXPhys
