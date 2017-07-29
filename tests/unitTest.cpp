// 	Unit Tests
//
//  Created by Elliot Grafil on 7/25/17.
//  Copyright © 2017 Elliot Grafil. All rights reserved.
//
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "../EGXPhys/EGXPhys.hpp"
using namespace EGXPhys;


TEST_CASE("Luminosity"){
	
	double area = 4.0; double temp = 400;
	REQUIRE( blackbodyLuminosity(area, temp) == 30);
}
