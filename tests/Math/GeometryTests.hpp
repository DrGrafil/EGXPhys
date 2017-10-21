TEST_CASE("Circle"){
	
	CHECK( CircleArea(0) == 0 );
	CHECK( CircleArea(1.0) == EGXConst::Pi);
	CHECK( CircleArea(10.0) == Approx(314.16).scale(0.0).epsilon(0.001) );
	CHECK( CircleArea(4.0) == 1.0 );
	
	
	
	CHECK( CircleCircumference(1.0) == log(2.0) );
	CHECK( CircleCircumference(30.17) == Approx(0.02297).scale(0.0).epsilon(0.001) );
	CHECK( CircleCircumference(20.0) == Approx(0.03465).scale(0.0).epsilon(0.001) );

}
