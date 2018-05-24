#pragma once

TEST_CASE("Ellipsoid Volume"){
	CHECK(EllipsoidVolume(1.0, 1.0, 1.0) == 4.0/3.0 * pi);
    CHECK(EllipsoidVolume(1.0, 0.9999999999999, 1.0) == Approx(4.0 / 3.0 * pi).scale(0.0).epsilon(0.001));
	CHECK(EllipsoidVolume(1.0, 1.0000000000001, 1.0) == Approx(4.0 / 3.0 * pi).scale(0.0).epsilon(0.001));

    // https://rechneronline.de/pi/spheroid.php
    CHECK(EllipsoidVolume(2.0, 2.0, 1.0) == Approx(16.7551608191).scale(0.0).epsilon(0.001));
    CHECK(EllipsoidVolume(1.0, 1.0, 2.0) == Approx(8.3775804096).scale(0.0).epsilon(0.001));
}
