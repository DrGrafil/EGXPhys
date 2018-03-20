TEST_CASE("Mass Excess"){
	
	//Carbon 12
	CHECK( MassExcessInu(12,12.0)== 0.0);
	CHECK( MassExcessInMeVPercSquared(12,12.0)== 0.0);
	CHECK( MassExcessInkg(12,12.0)== 0.0);
	CHECK( MassExcessInJPercSquared(12,12.0)== 0.0); 
	
	//Lithium 7
	CHECK( MassExcessInu(7,7.016003)== Approx(0.016003).scale(0.0).epsilon(0.001));
	CHECK( MassExcessInMeVPercSquared(7,7.016003)== Approx(0.016003 * NISTConst::atomicMassConstantInMeVPercSquared).scale(0.0).epsilon(0.001));
	CHECK( MassExcessInkg(7,7.016003)== Approx(0.016003 * NISTConst::atomicMassConstant).scale(0.0).epsilon(0.001));
	CHECK( MassExcessInJPercSquared(7,7.016003)== Approx(0.016003 * NISTConst::atomicMassConstantInJPercSquared).scale(0.0).epsilon(0.001)); 
	
	//Uranium 238
	
	CHECK( MassExcessInMeVPercSquared(238,238.05078826)== Approx(47.308948).scale(0.0).epsilon(0.001));
}
