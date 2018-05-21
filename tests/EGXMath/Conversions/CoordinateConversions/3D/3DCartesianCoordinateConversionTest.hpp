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


}
