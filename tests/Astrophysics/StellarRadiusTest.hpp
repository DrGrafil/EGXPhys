#pragma once
TEST_CASE("Stellar Radius"){

    CHECK(StellarRadius(1.0, 0.0) == 0.0);
    CHECK(StellarRadius(1.0, 4.0 * EGXMath::pi * NISTConst::sigma) == Approx(1.0).scale(0.0).epsilon(0.001));
    CHECK(StellarRadius(2.0, 4.0 * EGXMath::pi * NISTConst::sigma) == Approx(0.25).scale(0.0).epsilon(0.001));

    CHECK( StellarRadius(4940.0, 2.98584e28) == Approx(8.38847e9).scale(0.0).epsilon(0.001));
    CHECK( StellarRadiusFromLuminosityInWatts(4940.0, 2.98584e28) == Approx(8.38847e9).scale(0.0).epsilon(0.001));
    CHECK( StellarRadiusFromLuminosityInSolarLuminosity(4940.0, 78.0) == Approx(8.38847e9).scale(0.0).epsilon(0.001));

    //Sun
    //https://nssdc.gsfc.nasa.gov/planetary/factsheet/sunfact.html
    CHECK(StellarRadius(5772.0, 382.8e24) == Approx(695700000.0).scale(0.0).epsilon(0.001));

    CHECK(StellarRadius(SunTempreture, SunLuminocity) == Approx(RadiusOfSun).scale(0.0).epsilon(0.001));
    CHECK(StellarRadiusFromLuminosityInWatts(SunTempreture, SunLuminocity) == Approx(RadiusOfSun).scale(0.0).epsilon(0.001));
    CHECK(StellarRadiusFromLuminosityInSolarLuminosity(SunTempreture, 1.0) == Approx(RadiusOfSun).scale(0.0).epsilon(0.001));
}
