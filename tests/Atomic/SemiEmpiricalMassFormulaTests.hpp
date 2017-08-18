TEST_CASE("Semi Empirical Mass Formula"){
	
	//Carbon 12
	CHECK( SemiEmpericalMassFormula(6,12)== Approx(12.0 * NISTConst::atomicMassConstantInMeVPercSquared).epsilon(0.001)); 

	
	//Lithium 7
	CHECK( SemiEmpericalMassFormula(3,7)== Approx(7.016003 * NISTConst::atomicMassConstantInMeVPercSquared).epsilon(0.001)); 
	
	// Uranium-238
	CHECK( SemiEmpericalMassFormula(92,238)== Approx(238.05078826 * NISTConst::atomicMassConstantInMeVPercSquared).epsilon(0.001)); 
}
