TEST_CASE("Stellar Mass"){
	
	//General
	CHECK(StellarMass(10.0, 10.0) == 1.0);
	CHECK(PlanetaryMass(JupiterMass, SunMass) == Approx(9.541984732824427e-4).scale(0.0).epsilon(0.001));  //Not correct but approx calculated
	CHECK(PlanetaryMass(EarthMass, SunMass) == Approx(3.003453972067878e-6).scale(0.0).epsilon(0.001));  //Not correct but approx calculated

	//Sun
	CHECK(SolarMass(SunMass) == 1.0);
	CHECK(SolarMass(JupiterMass) == Approx(9.541984732824427e-4).scale(0.0).epsilon(0.001)); //Not correct but approx calculated
	CHECK(SolarMass(EarthMass) == Approx(3.003453972067878e-6).scale(0.0).epsilon(0.001)); //Not correct but approx calculated
	
}
