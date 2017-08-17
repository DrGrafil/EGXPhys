TEST_CASE("Mass Defect"){
	
	//Carbon 12
	CHECK( MassDefectInu(6,12,12.0)== Approx(0.098931).epsilon(0.001)); 
	CHECK( MassDefectInMeVPercSquared(6,12,12.0 * NISTConst::atomicMassConstantInMeVPercSquared)== Approx(92.15).epsilon(0.001)); 
	CHECK( MassDefectInkg(6,12,12.0 * NISTConst::atomicMassConstant)== Approx(0.098931 * NISTConst::atomicMassConstant).epsilon(0.001)); 
	CHECK( MassDefectInJPercSquared(6,12,12.0 * NISTConst::atomicMassConstantInJPercSquared)== Approx(0.098931 * NISTConst::atomicMassConstantInJPercSquared).epsilon(0.001)); 
	
	//Lithium 7
	CHECK( MassDefectInu(3,7,7.016003)== Approx(0.0421335).epsilon(0.001)); 
	CHECK( MassDefectInMeVPercSquared(3,7,7.016003 * NISTConst::atomicMassConstantInMeVPercSquared)== Approx(0.0421335 * NISTConst::atomicMassConstantInMeVPercSquared).epsilon(0.001)); 
	CHECK( MassDefectInkg(3,7,7.016003 * NISTConst::atomicMassConstant)== Approx(0.0421335 * NISTConst::atomicMassConstant).epsilon(0.001)); 
	CHECK( MassDefectInJPercSquared(3,7,7.016003 * NISTConst::atomicMassConstantInJPercSquared)== Approx(0.0421335 * NISTConst::atomicMassConstantInJPercSquared).epsilon(0.001)); 
}
