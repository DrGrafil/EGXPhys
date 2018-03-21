#pragma once
TEST_CASE("Half Life"){
	
	CHECK( HalfLife(log(2.0)) == 1.0);
	CHECK( DecayConstantViaHalfLife(HalfLife(2.0)) == 2.0);
	
	CHECK( HalfLifeViaMeanLifetime(1.0/log(2.0)) == 1.0);
	CHECK( MeanLifetimeViaHalfLife(HalfLifeViaMeanLifetime(2.0)) == 2.0);
	
	CHECK( HalfLifeViaDecayWidth(NISTConst::hbarIneVs) == log(2.0));
	CHECK( DecayWidthViaHalfLife(HalfLifeViaDecayWidth(2.0)) == 2.0);
}
