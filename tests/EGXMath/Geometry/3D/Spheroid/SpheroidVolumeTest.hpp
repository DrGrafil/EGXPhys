#pragma once

TEST_CASE("Spheroid Volume"){
	CHECK(SpheroidVolume(1.0, 1.0) == 4.0/3.0 * pi);
    CHECK(SpheroidVolume(1.0, 0.9999999999999) == Approx(4.0 / 3.0 * pi).scale(0.0).epsilon(0.001));
	CHECK(SpheroidVolume(1.0, 1.0000000000001) == Approx(4.0 / 3.0 * pi).scale(0.0).epsilon(0.001));

    // https://rechneronline.de/pi/spheroid.php
    CHECK(SpheroidVolume(2.0, 1.0) == Approx(16.7551608191).scale(0.0).epsilon(0.001));
    CHECK(SpheroidVolume(1.0, 2.0) == Approx(8.3775804096).scale(0.0).epsilon(0.001));
}
