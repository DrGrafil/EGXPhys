TEST_CASE("Decay Constant"){
	
	CHECK( DecayConstant(1000.0, 800.0, 2.0) == Approx(0.1).scale(0.0).epsilon(0.001));
	
	CHECK( DecayConstantViaHalfLife(log(2.0)) == 1.0 );
	CHECK( DecayConstantViaHalfLife(1.0) == log(2.0) );
	CHECK( DecayConstantViaHalfLife(30.17) == Approx(0.02297).scale(0.0).epsilon(0.001) );
	CHECK( DecayConstantViaHalfLife(20.0) == Approx(0.03465).scale(0.0).epsilon(0.001) );
	CHECK( HalfLife(DecayConstantViaHalfLife(2.0)) == 2.0);
	
	CHECK( DecayConstantViaMeanLifetime(1.0) == 1.0);
	CHECK( DecayConstantViaMeanLifetime(2.0) == 0.5);
	CHECK( MeanLifetime(DecayConstantViaMeanLifetime(2.0))== 2.0);

	CHECK( DecayConstantViaDecayWidth(NISTConst::hbarIneVs) == 1.0);
	CHECK( DecayWidthViaDecayConstant(DecayConstantViaDecayWidth(2.0)) == 2.0);
}
