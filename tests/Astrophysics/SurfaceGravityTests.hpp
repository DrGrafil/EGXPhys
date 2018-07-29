#pragma once
TEST_CASE("Surface Gravity"){
	
	//See https://en.wikipedia.org/wiki/Surface_gravity
	CHECK(SurfaceGravityInmPersSquared(0.0, 1.0) == 0.0);
	CHECK(SurfaceGravityInmPersSquared(1.0, 1.0) == NISTConst::gravitationalConstant);
	CHECK(SurfaceGravityInmPersSquared(EGXPhys::sunMass, EGXPhys::sunNominalSolarRadius) == Approx(28.02 * NISTConst::standardAccelerationOfGravity).scale(0.0).epsilon(0.1));
	CHECK(SurfaceGravityInmPersSquared(EGXPhys::earthMass, EGXPhys::earthVolumetricMeanRadius) == Approx(NISTConst::standardAccelerationOfGravity).scale(0.0).epsilon(0.1));

	CHECK(SurfaceGravityIng(0.0, 1.0) == 0.0);
	CHECK(SurfaceGravityIng(1.0, 1.0) == NISTConst::gravitationalConstant / NISTConst::standardAccelerationOfGravity);
	CHECK(SurfaceGravityIng(EGXPhys::sunMass, EGXPhys::sunNominalSolarRadius) == Approx(28.02).scale(0.0).epsilon(0.1));
	CHECK(SurfaceGravityIng(EGXPhys::earthMass, EGXPhys::earthVolumetricMeanRadius) == Approx(1.0).scale(0.0).epsilon(0.1));

}
