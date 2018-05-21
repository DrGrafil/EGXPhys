#pragma once

TEST_CASE("Cylindrical Coordinate Conversions"){

	//To Cartesian
    double x = 0; double y = 0; double z = 0;
    double rc = 0; double tc = 0; double zc = 0;

    //Zero check
    rc = 0; tc = 0; zc = 0;
    CylindricalCoordinateToCartesianCoordinate(rc, tc, zc, x, y, z);
    CHECK(x == 0.0);
    CHECK(y == 0.0);
    CHECK(z == 0.0);

    // R Check
    rc = 10.0; tc = 0; zc = 0;
    CylindricalCoordinateToCartesianCoordinate(rc, tc, zc, x, y, z);
    CHECK(x == 10.0);
    CHECK(y == 0.0);
    CHECK(z == 0.0);

    // Theta Check
    rc = 0; tc = 10; zc = 0.0;
    CylindricalCoordinateToCartesianCoordinate(rc, tc, zc, x, y, z);
    CHECK(x == 0.0);
    CHECK(y == 0.0);
    CHECK(z == 0.0);

    // Z Check
    rc = 0; tc = 0; zc = 7.0;
    CylindricalCoordinateToCartesianCoordinate(rc, tc, zc, x, y, z);
    CHECK(x == 0.0);
    CHECK(y == 0.0);
    CHECK(z == 7.0);

    // Rand Check
    rc = 7; tc = 3; zc = 5.0;
    CylindricalCoordinateToCartesianCoordinate(rc, tc, zc, x, y, z);
    CHECK(x == rc * cos(tc) );
    CHECK(y == rc * sin(tc) );
    CHECK(z == zc);


    //To Spherical
    double rs = 0; double ts = 0; double ps = 0; //checked units.

    //Zero check
    rc = 0; tc = 0; zc = 0;
    CylindricalCoordinateToSphericalCoordinate(rc, tc, zc, rs, ts, ps);
    CHECK(rs == 0.0);
    CHECK(ts == 0.0);
    CHECK(ps == 0.0);

    // R Check
    rc = 10; tc = 0; zc = 0;
    CylindricalCoordinateToSphericalCoordinate(rc, tc, zc, rs, ts, ps);
    CHECK(rs == 10.0);
    CHECK(ts == 0.0);
    CHECK(ps == pi / 2.0);

    // Theta Check
    rc = 0; tc = 1; zc = 0;
    CylindricalCoordinateToSphericalCoordinate(rc, tc, zc, rs, ts, ps);
    CHECK(rs == 0.0);
    CHECK(ts == 1.0);
    CHECK(ps == 0.0);

    // Z Check
    rc = 0; tc = 0; zc = 7.0;
    CylindricalCoordinateToSphericalCoordinate(rc, tc, zc, rs, ts, ps);
    CHECK(rs == 7.0);
    CHECK(ts == 0.0);
    CHECK(ps == 0.0);

    // Rand Check
    rc = 7.0; tc = 3.0; zc = 5.0;
    CylindricalCoordinateToSphericalCoordinate(rc, tc, zc, rs, ts, ps);
    CHECK(rs == sqrt(rc*rc+zc*zc));
    CHECK(ts == tc);
    CHECK(ps == Approx(atan(rc / zc)).scale(0.0).epsilon(0.001));

}
