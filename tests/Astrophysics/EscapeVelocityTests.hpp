#pragma once
TEST_CASE("Escape Velocity"){
	
	//See https ://en.wikipedia.org/wiki/Escape_velocity for numbers
	CHECK(EscapeVelocity(earthVolumetricMeanRadius, earthMass) == Approx(11186.0).scale(0.0).epsilon(0.001));
	CHECK(EscapeVelocity(sunNominalSolarRadius, sunMass) == Approx(617500.0).scale(0.0).epsilon(0.001));
}
