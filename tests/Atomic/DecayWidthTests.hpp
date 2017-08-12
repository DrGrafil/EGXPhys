TEST_CASE("Decay Width"){
	
	CHECK( DecayWidth(2.0) == 4.0 );
	
	CHECK( DecayWidthViaDecayConstant(1.0/NISTConst::hbarIneVs) == 1.0 );
	CHECK( DecayConstantViaDecayWidth(DecayWidthViaDecayConstant(2.0)) == 2.0);
	
	CHECK( DecayWidthViaHalfLife(NISTConst::hbarIneVs) == log(2.0) );
	CHECK( HalfLifeViaDecayWidth(DecayWidthViaHalfLife(2.0)) == 2.0);
	
	CHECK( DecayWidthViaMeanLifetime(NISTConst::hbarIneVs) == 1.0 );
	CHECK( MeanLifetimeViaDecayWidth(DecayWidthViaMeanLifetime(2.0)) == 2.0);
	
}
