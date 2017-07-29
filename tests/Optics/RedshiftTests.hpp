TEST_CASE("Redshift"){
	
	REQUIRE( redshiftByWavelength(1.0, 1.0) == 0.0);
	REQUIRE( redshiftByFrequency(2.0, 458.23) == Approx(5000.0).epsilon(0.001));
}
