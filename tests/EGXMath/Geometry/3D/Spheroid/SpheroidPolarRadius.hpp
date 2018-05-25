#pragma once

TEST_CASE("Spheroid Polar Radius"){

    CHECK(SpheroidPolarRadius(0.0, 0.0) == 0.0);
    CHECK(SpheroidPolarRadius(1.0, 0.0) == 1.0);
    CHECK(SpheroidPolarRadius(1.0, 1.0) == 1.0 - 2.0 / 3.0);
    CHECK(SpheroidPolarRadius(1.0, -3.0 / 2.0) == 2.0);
}
