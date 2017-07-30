TEST_CASE("Redshift"){
	
	REQUIRE( redshiftByWavelength(1.0, 1.0) == 0.0);
	REQUIRE( redshiftByWavelength(587.0, 587.0) == 0.0);
	REQUIRE( redshiftByWavelength(700.0, 486.0) == Approx(0.440).epsilon(0.001));
	
	REQUIRE( redshiftByFrequency(1.0, 1.0) == 0.0);
	REQUIRE( redshiftByFrequency(587.0, 587.0) == 0.0);
	REQUIRE( redshiftByFrequency(428571428.5714, 617283950.6172) == Approx(0.440).epsilon(0.001));
}
