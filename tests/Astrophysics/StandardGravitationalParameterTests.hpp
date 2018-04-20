#pragma once
TEST_CASE("Standard Gravitational Parameter"){
	
	CHECK(StandardGravitationalParameter(0.0) == 0.0);
	CHECK(StandardGravitationalParameter(1.0) == NISTConst::gravitationalConstant);
	CHECK(StandardGravitationalParameter(EGXPhys::MassOfSun) == Approx(1.32712440018e20).scale(0.0).epsilon(0.1));
	CHECK(StandardGravitationalParameter(EGXPhys::MassOfEarth) == Approx(3.986004418e14).scale(0.0).epsilon(0.1));

}
