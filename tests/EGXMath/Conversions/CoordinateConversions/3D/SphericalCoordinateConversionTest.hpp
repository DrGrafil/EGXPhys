#pragma once

TEST_CASE("Spherical Coordinate Conversions"){

	//To Cartesian
    double x = 0; double y = 0; double z = 0;
    double rs = 0; double ts = 0; double ps = 0; //checked units.

    //Zero check
    rs = 0; ts = 0; ps = 0;
    SphericalCoordinateToCartesianCoordinate(rs, ts, ps, x, y, z);
    CHECK(x == 0.0);
    CHECK(y == 0.0);
    CHECK(z == 0.0);

    // R Check
    rs = 10; ts = 0; ps = 0;
    SphericalCoordinateToCartesianCoordinate(rs, ts, ps, x, y, z);
    CHECK(x == 0.0);
    CHECK(y == 0.0);
    CHECK(z == 10.0);

    // Theta Check
    rs = 0; ts = 7; ps = 0;
    SphericalCoordinateToCartesianCoordinate(rs, ts, ps, x, y, z);
    CHECK(x == 0.0);
    CHECK(y == 0.0);
    CHECK(z == 0.0);

    // Phi Check
    rs = 0; ts = 0; ps = 3;
    SphericalCoordinateToCartesianCoordinate(rs, ts, ps, x, y, z);
    CHECK(x == 0.0);
    CHECK(y == 0.0);
    CHECK(z == 0.0);

    // Rand Check
    rs = 7; ts =3; ps = 5;
    SphericalCoordinateToCartesianCoordinate(rs, ts, ps, x, y, z);
    CHECK(x == rs * sin(ps) * cos(ts));
    CHECK(y == rs * sin(ps) * sin(ts));
    CHECK(z == rs * cos(ps));


    //To Cylindrical
    double rc = 0; double tc = 0; double zc = 0;
    

    //Zero check
    rs = 0; ts = 0; ps = 0;
    SphericalCoordinateToCylindricalCoordinate(rs, ts, ps, rc, tc, zc);
    CHECK(rc == 0.0);
    CHECK(tc == 0.0);
    CHECK(zc == 0.0);

    // R Check
    rs = 10; ts = 0; ps = 0;
    SphericalCoordinateToCylindricalCoordinate(rs, ts, ps, rc, tc, zc);
    CHECK(rc == 0.0);
    CHECK(tc == 0.0);
    CHECK(zc == 10.0);

    // Theta Check
    rs = 0; ts = 7; ps = 0;
    SphericalCoordinateToCylindricalCoordinate(rs, ts, ps, rc, tc, zc);
    CHECK(rc == 0.0);
    CHECK(tc == 7.0);
    CHECK(zc == 0.0);

    // phi Check
    rs = 0; ts = 0; ps = 3;
    SphericalCoordinateToCylindricalCoordinate(rs, ts, ps, rc, tc, zc);
    CHECK(rc == 0.0);
    CHECK(tc == 0.0);
    CHECK(zc == 0.0);

    // Rand Check
    rs = 7; ts = 3; ps = 5;
    SphericalCoordinateToCylindricalCoordinate(rs, ts, ps, rc, tc, zc);
    CHECK(rc == rs * sin(ps));
    CHECK(tc == 3.0);
    CHECK(zc == rs*cos(ps));

    //CHECK(ps == Approx(atan(rc / zc)).scale(0.0).epsilon(0.001));

}
