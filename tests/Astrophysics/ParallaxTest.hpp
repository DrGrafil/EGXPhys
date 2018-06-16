#pragma once
TEST_CASE("Parallax"){
	

	// 
    CHECK(ParallaxToParsec(1.0) == 1.0);
    CHECK(ParallaxToParsec(0.129) == Approx(7.75).scale(0.0).epsilon(0.1));
    
    CHECK(AstronomicalUnitToParsec(ParallaxToAU(1.0)) == 1.0);
    CHECK(AstronomicalUnitToParsec(ParallaxToAU(0.129)) == Approx(7.75).scale(0.0).epsilon(0.1));

    CHECK(LightYearToParsec(ParallaxToLightYear(1.0)) == 1.0);
    CHECK(LightYearToParsec(ParallaxToLightYear(0.129)) == Approx(7.75).scale(0.0).epsilon(0.1));

    CHECK(MeterToParsec(ParallaxToMeter(1.0)) == 1.0);
    CHECK(MeterToParsec(ParallaxToMeter(0.129)) == Approx(7.75).scale(0.0).epsilon(0.1));

}
