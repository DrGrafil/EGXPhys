#pragma once

TEST_CASE("Polar Coordinate Conversions"){

	//To Cartesian
    double x = 0; double y = 0; 
    double rp = 0; double tp = 0; 

    //Zero check
    rp = 0; tp = 0;
    PolarCoordinateToCartesianCoordinate(rp, tp, x, y); 
    CHECK(x == 0.0);
    CHECK(y == 0.0);

    // R Check
    rp = 1; tp = 0;
    PolarCoordinateToCartesianCoordinate(rp, tp, x, y);
    CHECK(x == 1.0);
    CHECK(y == 0.0);

    // Theta Check
    rp = 0; tp = 1;
    PolarCoordinateToCartesianCoordinate(rp, tp, x, y);
    CHECK(x == 0.0);
    CHECK(y == 0.0);

 
    // Rand Check
    rp = 7; tp = -3;
    PolarCoordinateToCartesianCoordinate(rp, tp, x, y);
    CHECK(x == rp * cos(tp));
    CHECK(y == rp * sin(tp));
   

}
