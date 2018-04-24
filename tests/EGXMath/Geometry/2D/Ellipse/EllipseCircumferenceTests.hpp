#pragma once

TEST_CASE("Ellipse Circumference"){


	float a1 = 10.0; float a2 = 10.0; float a3 = 10.0;
	float b1 = 10.0; float b2 = 5.0; float b3 = 3.0;
	float r1 = 20.0f*(float)EGXMath::pi; float r2 = 48.442f; float r3 = 43.859f;
	// See https://www.mathsisfun.com/geometry/ellipse-perimeter.html
	
	//Circumference

	CHECK(EllipseCircumference(0.0, 1.0) == Approx(4.0).scale(0.0).epsilon(0.001)); //suppose to be 4a weird I know (a line 2a, going back and forth
	CHECK(EllipseCircumference(1.0, 0.0) == Approx(4.0).scale(0.0).epsilon(0.001));
	CHECK(EllipseCircumference(1.0, 1.0) == 2.0 * EGXMath::pi);
	CHECK(EllipseCircumference(a1, b1) == Approx(r1).scale(0.0).epsilon(0.001));
	CHECK(EllipseCircumference(a2, b2) == Approx(r2).scale(0.0).epsilon(0.001));
	CHECK(EllipseCircumference(a3, b3) == Approx(r3).scale(0.0).epsilon(0.001));
	
	CHECK(EllipsePerimeter(0.0, 1.0) == Approx(4.0).scale(0.0).epsilon(0.001)); //suppose to be 4a weird I know
	CHECK(EllipsePerimeter(1.0, 0.0) == Approx(4.0).scale(0.0).epsilon(0.001)); //suppose to be 4a weird I know
	CHECK(EllipsePerimeter(1.0, 1.0) == 2.0 * EGXMath::pi);
	CHECK(EllipsePerimeter(a1, b1) == Approx(r1).scale(0.0).epsilon(0.001));
	CHECK(EllipsePerimeter(a2, b2) == Approx(r2).scale(0.0).epsilon(0.001));
	CHECK(EllipsePerimeter(a3, b3) == Approx(r3).scale(0.0).epsilon(0.001));

	CHECK(EllipseCircumferencePade33approximation(0.0, 1.0) == Approx(4.0).scale(0.0).epsilon(0.001)); //suppose to be 4a weird I know
	CHECK(EllipseCircumferencePade33approximation(1.0, 0.0) == Approx(4.0).scale(0.0).epsilon(0.001)); //suppose to be 4a weird I know
	CHECK(EllipseCircumferencePade33approximation(1.0, 1.0) == 2.0 * EGXMath::pi);
	CHECK(EllipseCircumferencePade33approximation(a1, b1) == Approx(r1).scale(0.0).epsilon(0.001));
	CHECK(EllipseCircumferencePade33approximation(a2, b2) == Approx(r2).scale(0.0).epsilon(0.001));
	CHECK(EllipseCircumferencePade33approximation(a3, b3) == Approx(r3).scale(0.0).epsilon(0.001));

	CHECK(EllipseCircumferenceRamanujanIIapproximation(0.0, 1.0) == Approx(4.0).scale(0.0).epsilon(0.001)); //suppose to be 4a weird I know
	CHECK(EllipseCircumferenceRamanujanIIapproximation(1.0, 0.0) == Approx(4.0).scale(0.0).epsilon(0.001)); //suppose to be 4a weird I know
	CHECK(EllipseCircumferenceRamanujanIIapproximation(1.0, 1.0) == 2.0 * EGXMath::pi);
	CHECK(EllipseCircumferenceRamanujanIIapproximation(a1, b1) == Approx(r1).scale(0.0).epsilon(0.001));
	CHECK(EllipseCircumferenceRamanujanIIapproximation(a2, b2) == Approx(r2).scale(0.0).epsilon(0.001));
	CHECK(EllipseCircumferenceRamanujanIIapproximation(a3, b3) == Approx(r3).scale(0.0).epsilon(0.001));

}
