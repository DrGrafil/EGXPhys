#pragma once

TEST_CASE("Spheroid Flattening"){

	CHECK(SpheroidFlattening(1.0) == 1.0);
	CHECK(SpheroidFlattening(0.0) == 0.0);
	CHECK(SpheroidFlattening(0.5) == Approx(0.1339745962155614).scale(0.0).epsilon(0.001));

	CHECK(SpheroidFlattening(1.0, 0.0) == 1.0);
	CHECK(SpheroidFlattening(1.0, 0.5) == 0.5);
	CHECK(SpheroidFlattening(6378137.0, 6356752.3142) == Approx(1.0/298.257223563).scale(0.0).epsilon(0.001));

	
	CHECK(SpheroidOblateness(1.0) == 1.0);
	CHECK(SpheroidOblateness(0.0) == 0.0);
	CHECK(SpheroidOblateness(0.5) == Approx(0.1339745962155614).scale(0.0).epsilon(0.001));

	CHECK(SpheroidOblateness(1.0, 0.0) == 1.0);
	CHECK(SpheroidOblateness(1.0, 0.5) == 0.5);
	CHECK(SpheroidOblateness(6378137.0, 6356752.3142) == Approx(1.0 / 298.257223563).scale(0.0).epsilon(0.001));
	
}
