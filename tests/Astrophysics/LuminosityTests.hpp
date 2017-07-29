TEST_CASE("Luminosity"){
	
	REQUIRE( blackbodyLuminosity(0.0, 0.0) == 0.0);
	REQUIRE( blackbodyLuminosity(2.0, 458.23) == Approx(5000.0).epsilon(0.001));
	REQUIRE( blackbodyLuminosity(4.00, 400.00) == Approx(5806.461952).epsilon(0.001));
}
