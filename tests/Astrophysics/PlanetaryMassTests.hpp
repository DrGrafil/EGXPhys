TEST_CASE("Planetary Mass"){
	//Data taken from https://www.nndc.bnl.gov/chart/
	//Mass taken from http://wwwndc.jaea.go.jp/NuC/
	
	//General
	CHECK(PlanetaryMass(10.0, 10.0) == 1.0);
	CHECK(PlanetaryMass(EarthMass, JupiterMass) == Approx(0.0031463520).scale(0.0).epsilon(0.001));
	CHECK(PlanetaryMass(JupiterMass, EarthMass) == Approx(317.82838).scale(0.0).epsilon(0.001));

	//Earth
	CHECK(PlanetaryEarthMass(EarthMass) == 1.0);
	CHECK(PlanetaryEarthMass(JupiterMass) == Approx(317.82838).scale(0.0).epsilon(0.001));
	CHECK(PlanetaryEarthMass(MassOfSun) == Approx(332946.0487).scale(0.0).epsilon(0.001));
	CHECK(PlanetaryEarthMass(LunarMass) == Approx(0.0123000371).scale(0.0).epsilon(0.001));
	//Jupiter
	CHECK(PlanetaryJupiterMass(EarthMass) == Approx(0.0031463520).scale(0.0).epsilon(0.001));
	CHECK(PlanetaryJupiterMass(JupiterMass) == Approx(1).scale(0.0).epsilon(0.001));
	CHECK(PlanetaryJovianMass(EarthMass) == Approx(0.0031463520).scale(0.0).epsilon(0.001));
	CHECK(PlanetaryJovianMass(JupiterMass) == Approx(1).scale(0.0).epsilon(0.001));

	//Moon
	CHECK(PlanetaryLunarMass(LunarMass) == Approx(1).scale(0.0).epsilon(0.001));
	CHECK(PlanetaryLunarMass(EarthMass) == Approx(81.30056778446628).scale(0.0).epsilon(0.001));
	
}
