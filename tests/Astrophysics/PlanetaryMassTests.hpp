#pragma once
TEST_CASE("Planetary Mass"){
	
	//General
	CHECK(PlanetaryMass(10.0, 10.0) == 1.0);
	CHECK(PlanetaryMass(earthMass, jupiterMass) == Approx(0.0031463520).scale(0.0).epsilon(0.001));
	CHECK(PlanetaryMass(jupiterMass, earthMass) == Approx(317.82838).scale(0.0).epsilon(0.001));

	//Earth
	CHECK(PlanetaryEarthMass(earthMass) == 1.0);
	CHECK(PlanetaryEarthMass(jupiterMass) == Approx(317.82838).scale(0.0).epsilon(0.001));
	CHECK(PlanetaryEarthMass(sunMass) == Approx(332946.0487).scale(0.0).epsilon(0.001));
	CHECK(PlanetaryEarthMass(moonMass) == Approx(0.0123000371).scale(0.0).epsilon(0.001));
	//Jupiter
	CHECK(PlanetaryJupiterMass(earthMass) == Approx(0.0031463520).scale(0.0).epsilon(0.001));
	CHECK(PlanetaryJupiterMass(jupiterMass) == Approx(1).scale(0.0).epsilon(0.001));
	CHECK(PlanetaryJovianMass(earthMass) == Approx(0.0031463520).scale(0.0).epsilon(0.001));
	CHECK(PlanetaryJovianMass(jupiterMass) == Approx(1).scale(0.0).epsilon(0.001));

	//Moon
	CHECK(PlanetaryLunarMass(moonMass) == Approx(1).scale(0.0).epsilon(0.001));
	CHECK(PlanetaryLunarMass(earthMass) == Approx(81.30056778446628).scale(0.0).epsilon(0.001));
	
}
