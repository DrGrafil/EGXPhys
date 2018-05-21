#pragma once

TEST_CASE("3D Cartesian Coordinate Conversions"){

	//To Cylindrical
    double rc = 0; double tc = 0; double zc = 0; //checked units.

    //Zero check
    double x = 0; double y = 0; double z = 0;
    CartesianCoordinateToCylindricalCoordinate(x, y, z, rc, tc, zc);
    CHECK(rc == 0.0);
    CHECK(tc == 0.0);
    CHECK(zc == 0.0);

    // R Check
    x = 10.0; y = 0; z = 0;
    CartesianCoordinateToCylindricalCoordinate(x, y, z, rc, tc, zc);
    CHECK(rc == 10.0);
    CHECK(tc == 0.0);
    CHECK(zc == 0.0);

    // Theta Check
    x = 0; y = 10; z = 0.0;
    CartesianCoordinateToCylindricalCoordinate(x, y, z, rc, tc, zc);
    CHECK(rc == 10.0);
    CHECK(tc == pi/2.0);
    CHECK(zc == 0.0);

    // Z Check
    x = 0; y = 0; z = 7.0;
    CartesianCoordinateToCylindricalCoordinate(x, y, z, rc, tc, zc);
    CHECK(rc == 0.0);
    CHECK(tc == 0.0);
    CHECK(zc == 7.0);

    // Rand Check
    x = 7; y = 3; z = 5.0;
    CartesianCoordinateToCylindricalCoordinate(x, y, z, rc, tc, zc);
    CHECK(rc == sqrt(58.0));
    CHECK(tc == Approx(atan(3.0 / 7.0)).scale(0.0).epsilon(0.001));
    CHECK(zc == 5.0);


    //To Spherical
    double rs = 0; double ts = 0; double ps = 0; //checked units.

    //Zero check
    x = 0; y = 0; z = 0;
    CartesianCoordinateToSphericalCoordinate(x, y, z, rs, ts, ps);
    CHECK(rs == 0.0);
    CHECK(ts == 0.0);
    CHECK(ps == 0.0);

    // R Check
    x = 10.0; y = 0; z = 0;
    CartesianCoordinateToSphericalCoordinate(x, y, z, rs, ts, ps);
    CHECK(rs == 10.0);
    CHECK(ts == 0.0);
    CHECK(ps == pi / 2.0);

    // Theta Check
    x = 0; y = 10; z = 0.0;
    CartesianCoordinateToSphericalCoordinate(x, y, z, rs, ts, ps);
    CHECK(rs == 10.0);
    CHECK(ts == pi / 2.0);
    CHECK(ps == pi / 2.0);

    // Z Check
    x = 0; y = 0; z = 7.0;
    CartesianCoordinateToSphericalCoordinate(x, y, z, rs, ts, ps);
    CHECK(rs == 7.0);
    CHECK(ts == 0.0);
    CHECK(ps == 0.0);

    // Rand Check
    x = 7; y = 3; z = 5.0;
    CartesianCoordinateToSphericalCoordinate(x, y, z, rs, ts, ps);
    CHECK(rs == sqrt(83.0));
    CHECK(ts == Approx(atan(3.0 / 7.0)).scale(0.0).epsilon(0.001));
    CHECK(ps == Approx(atan(sqrt(58.0) / 5.0)).scale(0.0).epsilon(0.001));

}
