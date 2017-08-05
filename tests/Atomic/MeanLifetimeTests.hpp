TEST_CASE("Mean Lifetime"){
	
	CHECK( MeanLifetime(2.0) == 0.5);
	CHECK( DecayConstantViaMeanLifetime(MeanLifetime(2.0))== 2.0);	


	CHECK( MeanLifetimeViaHalfLife(log(2.0)) == 1.0);
	CHECK( HalfLifeViaMeanLifetime(MeanLifetimeViaHalfLife(2.0)) == 2.0);

	CHECK( MeanLifetimeViaDecayWidth(hbarIneVs) == 1.0 );
	CHECK( DecayWidthViaMeanLifetime(MeanLifetimeViaDecayWidth(2.0)) == 2.0);
}
