#pragma once

TEST_CASE("Ellipse Eccentricity"){
	
	float f1 = 0.0f; float f2 = (10.0f-5.0f)/10.0f; float f3 = (10.0f - 3.0f) / 10.0f;
	float a1 = 10.0f; float a2 = 10.0f; float a3 = 10.0f;
	float b1 = 10.0f; float b2 = 5.0f; float b3 = 3.0f;
	float r1 = 0.0f; float r2 = 0.86603f; float r3 = 0.95394f; 
	//See http://www.1728.org/ellipse.htm

	//Flattening
	CHECK(EllipseEccentricity(0.0) == 0.0);
	CHECK(EllipseEccentricity(1.0) == 1.0);
	CHECK(EllipseEccentricity(f1) == r1);
	CHECK(EllipseEccentricity(f2) == Approx(r2).scale(0.0).epsilon(0.001));
	CHECK(EllipseEccentricity(f3) == Approx(r3).scale(0.0).epsilon(0.001));

	// semi-major semi-minor
	CHECK(EllipseEccentricity(0.0, 1.0) == 1.0); //http://mathforum.org/library/drmath/view/72756.html lines should have eccentricity of 1.
	CHECK(EllipseEccentricity(1.0, 0.0) == 1.0);
	CHECK(EllipseEccentricity(1.0, 1.0) == 0.0);
	CHECK(EllipseEccentricity(a1, b1) == r1);
	CHECK(EllipseEccentricity(a2, b2) == Approx(r2).scale(0.0).epsilon(0.001));
	CHECK(EllipseEccentricity(a3, b3) == Approx(r3).scale(0.0).epsilon(0.001));
	
}
