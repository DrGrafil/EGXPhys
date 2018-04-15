#pragma once
TEST_CASE("B-V Color"){
	
	
	//General
	//The approximation is pretty terrible.
	//CHECK(BVToTempreture(-0.33) == Approx(42000).scale(0.0).epsilon(0.1));
	//CHECK(BVToTempreture(-0.30) == Approx(30000).scale(0.0).epsilon(0.1));
	CHECK(BVColorToTempreture(-0.02) == Approx(9790).scale(0.0).epsilon(0.1));
	CHECK(BVColorToTempreture(0.30) == Approx(7300).scale(0.0).epsilon(0.1));
	CHECK(BVColorToTempreture(0.58) == Approx(5940).scale(0.0).epsilon(0.1));
	CHECK(BVColorToTempreture(0.81) == Approx(5150).scale(0.0).epsilon(0.1));
	CHECK(BVColorToTempreture(1.40) == Approx(3840).scale(0.0).epsilon(0.1));
}
