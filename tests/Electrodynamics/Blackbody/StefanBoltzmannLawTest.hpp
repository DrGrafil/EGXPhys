#pragma once

TEST_CASE("Stefan Boltzmann Law"){

    // https://rechneronline.de/pi/spheroid.php

    //Flattening
    CHECK(SpheroidEccentricity(0.0) == 0.0);
    CHECK(SpheroidEccentricity(SpheroidFlattening(0.8)) == 0.8);
    CHECK(SpheroidEccentricity(SpheroidFlattening(0.75)) == 0.75);
	CHECK(SpheroidEccentricity(SpheroidFlattening(0.3)) == 0.3);

    CHECK(SpheroidEccentricity(1.0, 1.0) == 0.0);
    CHECK(SpheroidEccentricity(1.0, 2.0) == Approx(0.866025403784439).scale(0.0).epsilon(0.001));
    CHECK(SpheroidEccentricity(2.0, 1.0) == Approx(0.866025403784439).scale(0.0).epsilon(0.001));
    CHECK(SpheroidEccentricity(1.0, 5.0) == Approx(0.979795897113271).scale(0.0).epsilon(0.001));
    CHECK(SpheroidEccentricity(5.0, 1.0) == Approx(0.979795897113271).scale(0.0).epsilon(0.001));
    CHECK(SpheroidEccentricity(17.0, 21.0) == Approx(0.587087047901807).scale(0.0).epsilon(0.001));
}
