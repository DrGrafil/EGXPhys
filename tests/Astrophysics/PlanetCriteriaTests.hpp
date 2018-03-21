#pragma once
TEST_CASE("Planet Criteria"){
	
	// As per the paper pulished
	REQUIRE( PlanetSimilarityIndexInterior(3376.63, 6371.0, 3.9121, 5.51) == Approx(0.8154).scale(0.0).epsilon(0.001));
	REQUIRE( PlanetSimilarityIndexSurface(0.45, 1.0, 227.0, 288.0) == Approx(0.5953).scale(0.0).epsilon(0.001));
	REQUIRE( PlanetSimilarityIndex(3376.63, 6371.0, 3.9121, 5.51, 0.45, 1.0, 227.0, 288.0) == Approx(0.6967).scale(0.0).epsilon(0.001));
}
