#pragma once

TEST_CASE("Ellipse Surface Area"){

	float a1 = 10.0; float a2 = 10.0; float a3 = 10.0;
	float b1 = 10.0; float b2 = 5.0; float b3 = 3.0;
	float r1 = 10.0f*10.0f*(float)EGXMath::pi; float r2 = 157.08f; float r3 = 94.25f;

	
	CHECK(EllipseSurfaceArea(0.0, 1.0) == 0.0); //suppose to be 4a weird I know (a line 2a, going back and forth
	CHECK(EllipseSurfaceArea(1.0, 0.0) == 0.0);
	CHECK(EllipseSurfaceArea(1.0, 1.0) == EGXMath::pi);
	CHECK(EllipseSurfaceArea(a1, b1) == Approx(r1).scale(0.0).epsilon(0.001));
	CHECK(EllipseSurfaceArea(a2, b2) == Approx(r2).scale(0.0).epsilon(0.001));
	CHECK(EllipseSurfaceArea(a3, b3) == Approx(r3).scale(0.0).epsilon(0.001));
	
}
