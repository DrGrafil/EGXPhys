#pragma once

TEST_CASE("2D Cartesian Coordinate Conversions"){

	//To Polar
    double rp = 0; double tp = 0;
    double x = 0; double y = 0;
    
    //Zero check
    x = 0; y = 0; 
    CartesianCoordinateToPolarCoordinate(x, y, rp, tp);
    CHECK(rp == 0.0);
    CHECK(tp == 0.0);
 
    // R Check
    x = 1; y = 0;
    CartesianCoordinateToPolarCoordinate(x, y, rp, tp);
    CHECK(rp == 1.0);
    CHECK(tp == 0.0);

    // Theta Check
    x = 0; y = 1;
    CartesianCoordinateToPolarCoordinate(x, y, rp, tp);
    CHECK(rp == 1.0);
    CHECK(tp == pi/2.0);

    // Rand Check
    x = 7; y = -3;
    CartesianCoordinateToPolarCoordinate(x, y, rp, tp);
    CHECK(rp == sqrt(58.0));
    CHECK(tp == Approx(-atan(3.0 / 7.0)).scale(0.0).epsilon(0.001) );


}
