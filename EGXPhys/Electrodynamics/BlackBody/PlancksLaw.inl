/// @file EGXPhys/Electrodynamics/BlackBody/PlancksLaw.inl
///
/// @brief Implimentation of Planck's Law calculations
/// @author Elliot Grafil (Metex)
/// @date 5/25/18


namespace EGXPhys{

	template<typename T>
	T PlancksLaw(const T wavelengthInm, const T surfaceTempretureInK)
	{
        return PlancksLawFromWavelength(wavelengthInm, surfaceTempretureInK;
	}


    template<typename T>
    T PlancksLawFromFrequency(const T frequencyInHz, const T surfaceTempretureInK) {
        T csq = (T)NISTConst::c * (T)NISTConst::c;
        T C = ((T)2.0 * (T)NISTConst::h * frequencyInHz * frequencyInHz * frequencyInHz) / csq;
        T ex = ((T)NISTConst::h * frequencyInHz) / ((T)NISTConst::kB * surfaceTempretureInK);

        return C * (T)1.0 / (exp(ex) - (T)1.0);
    }

    template<typename T>
    T PlancksLawFromWavelength(const T wavelengthInm, const T surfaceTempretureInK) {
        T csq = (T)NISTConst::c * (T)NISTConst::c;
        T C = ((T)2.0 * (T)NISTConst::h * csq) / (pow(wavelengthInm, 5));
        T ex = ((T)NISTConst::h * (T)NISTConst::c) / (wavelengthInm * (T)NISTConst::kB * surfaceTempretureInK);

        return C * (T)1.0 / (exp(ex) - (T)1.0);

    }

    template<typename T>
    T PlancksLawFromWavenumber(const T wavenumberInInversem, const T surfaceTempretureInK) {
        T csq = (T)NISTConst::c * (T)NISTConst::c;
        T C = ((T)2.0 * (T)NISTConst::h * csq * wavenumberInInversem * wavenumberInInversem * wavenumberInInversem);
        T ex = ((T)NISTConst::h * (T)NISTConst::c * wavenumberInInversem) / ((T)NISTConst::kB * surfaceTempretureInK);

        return C * (T)1.0 / (exp(ex) - (T)1.0);
    }



    template<typename T>
    T PlancksLawFromAngularFrequency(const T angularFrequencyInRadiansPers, const T surfaceTempretureInK) {
        T csq = (T)NISTConst::c * (T)NISTConst::c;
        T C = ((T)NISTConst::hbar * angularFrequencyInRadiansPers * angularFrequencyInRadiansPers * angularFrequencyInRadiansPers) / ((T)4.0 * (T)pi * (T)pi * (T)pi * csq);
        T ex = ((T)NISTConst::hbar * angularFrequencyInRadiansPers) / ((T)NISTConst::kB * surfaceTempretureInK);

        return C * (T)1.0 / (exp(ex) - (T)1.0);
    }

    template<typename T>
    T PlancksLawFromAngularWavelength(const T angularWavelengthInm, const T surfaceTempretureInK) {
        T csq = (T)NISTConst::c * (T)NISTConst::c;
        T C = ((T)NISTConst::hbar * csq) / ((T)4.0 * (T)pi * (T)pi * (T)pi * (pow(angularWavelengthInm, 5));
        T ex = ((T)NISTConst::hbar * (T)NISTConst::c) / (angularWavelengthInm * (T)NISTConst::kB * surfaceTempretureInK);

        return C * (T)1.0 / (exp(ex) - (T)1.0);
    }

    template<typename T>
    T PlancksLawFromAngularWavenumber(const T angularWavenumberInRadianPerm, const T surfaceTempretureInK) {
        T csq = (T)NISTConst::c * (T)NISTConst::c;
        T C = ((T)NISTConst::hbar * csq * angularWavenumberInRadianPerm * angularWavenumberInRadianPerm * angularWavenumberInRadianPerm) / ((T)4.0 * (T)pi * (T)pi * (T)pi );
        T ex = ((T)NISTConst::hbar * (T)NISTConst::c * angularWavenumberInRadianPerm) / ((T)NISTConst::kB * surfaceTempretureInK);

        return C * (T)1.0 / (exp(ex) - (T)1.0);
    }

}//namespace EGXPhys
