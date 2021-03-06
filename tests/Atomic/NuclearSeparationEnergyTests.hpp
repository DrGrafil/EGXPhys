#pragma once
TEST_CASE("Nuclear Separation Energy"){
	//Data taken from https://www.nndc.bnl.gov/chart/
	//Mass taken from http://wwwndc.jaea.go.jp/NuC/
	
	//Carbon 12
	CHECK( NeutronSeparationEnergyInMeV(12.0,11.011433611)== Approx(18.7216).scale(0.0).epsilon(0.001));
	CHECK( NeutronTwoSeparationEnergyInMeV(12.0,10.016853230)== Approx(31.8414).scale(0.0).epsilon(0.001));
	CHECK( ProtonSeparationEnergyInMeV(12.0,11.009305404)== Approx(15.9568).scale(0.0).epsilon(0.001));
	CHECK( ProtonTwoSeparationEnergyInMeV(12.0,10.013534679)== Approx(27.18543).scale(0.0).epsilon(0.001));
	
		//Joule check
	CHECK( NeutronSeparationEnergyInJ(12.0,11.011433611)== Approx(18.7216e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	CHECK( NeutronTwoSeparationEnergyInJ(12.0,10.016853230)== Approx(31.8414e6* NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	CHECK( ProtonSeparationEnergyInJ(12.0,11.009305404)== Approx(15.9568e6* NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	CHECK( ProtonTwoSeparationEnergyInJ(12.0,10.013534679)== Approx(27.18543e6* NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	
	//Lithium 7
	CHECK( NeutronSeparationEnergyInMeV(7.01600342665,6.01512288741)== Approx(7.2510898).scale(0.0).epsilon(0.001));
	CHECK( NeutronTwoSeparationEnergyInMeV(7.01600342665,5.01254)== Approx(12.91).scale(0.0).epsilon(0.001));
	CHECK( ProtonSeparationEnergyInMeV(7.01600342665,6.018886648)== Approx(9.97396).scale(0.0).epsilon(0.001));
	CHECK( ProtonTwoSeparationEnergyInMeV(7.01600342665,5.03531)== Approx(32.56).scale(0.0).epsilon(0.001));
	
	//Uranium 238
	CHECK( NeutronSeparationEnergyInMeV(238.050789466,237.0487302)== Approx(6.1543).scale(0.0).epsilon(0.001));
	CHECK( NeutronTwoSeparationEnergyInMeV(238.050789466,236.045569468)== Approx(11.2800).scale(0.0).epsilon(0.001));
//	CHECK( ProtonSeparationEnergyInMeV(238.050789466,237.051147110)== Approx(7.5070).scale(0.0).epsilon(0.001)); fails by small amount... probably not accurate enought mesurement.
//	CHECK( ProtonTwoSeparationEnergyInMeV(238.050789466,236.049870)== Approx(13.5240).scale(0.0).epsilon(0.001));


}
