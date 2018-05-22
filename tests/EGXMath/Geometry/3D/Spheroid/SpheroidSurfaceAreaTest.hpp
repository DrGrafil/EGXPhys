#pragma once

TEST_CASE("Spheroid Surface Area"){
    

    CHECK(SpheroidSurfaceArea(1.0, 1.0) == 4.0 * pi);
    CHECK(SpheroidSurfaceArea(1.0, 0.9999999999999) == Approx(4.0 * pi).scale(0.0).epsilon(0.001));
    CHECK(SpheroidSurfaceArea(1.0, 1.0000000000001) == Approx(4.0 * pi).scale(0.0).epsilon(0.001));

    // https://rechneronline.de/pi/spheroid.php
    CHECK(SpheroidSurfaceArea(2.0, 1.0) == Approx(34.6875308134).scale(0.0).epsilon(0.001));
    CHECK(SpheroidSurfaceArea(1.0, 2.0) == Approx(21.4784353279).scale(0.0).epsilon(0.001));
	
}
