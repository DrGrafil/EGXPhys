TEST_CASE("Apoapsis"){
	
    REQUIRE( Apoapsis(0.0, 1.0) == 1.0 );
    REQUIRE( Apoapsis(1.0, 0.0) == 0.0 );
    REQUIRE( Apoapsis(1.0, 1.0) == 2.0 );
    
    REQUIRE( Apoapsis(3.0, 10.0) == 40.0 );
    
	REQUIRE( Apoapsis(50.0, 0.7) == Apocenter(50.0, 0.7) );
	REQUIRE( Apoapsis(50.0, 0.7) == Apofocus(50.0, 0.7) );
	REQUIRE( Apoapsis(50.0, 0.7) == Apogalacticon(50.0, 0.7) );
	REQUIRE( Apoapsis(50.0, 0.7) == Apobothron(50.0, 0.7) );
	REQUIRE( Apoapsis(50.0, 0.7) == Aponigricon(50.0, 0.7) );
	REQUIRE( Apoapsis(50.0, 0.7) == Apastron(50.0, 0.7) );
	REQUIRE( Apoapsis(50.0, 0.7) == Aphelion(50.0, 0.7) );
	REQUIRE( Apoapsis(50.0, 0.7) == Apohermion(50.0, 0.7) );
	REQUIRE( Apoapsis(50.0, 0.7) == Apocytherion(50.0, 0.7) );
	REQUIRE( Apoapsis(50.0, 0.7) == Apogee(50.0, 0.7) );
	REQUIRE( Apoapsis(50.0, 0.7) == Apolune(50.0, 0.7) );
	REQUIRE( Apoapsis(50.0, 0.7) == Apocynthion(50.0, 0.7) );
	REQUIRE( Apoapsis(50.0, 0.7) == Aposelene(50.0, 0.7) );
	REQUIRE( Apoapsis(50.0, 0.7) == Apoareion(50.0, 0.7) );
	REQUIRE( Apoapsis(50.0, 0.7) == Apozene(50.0, 0.7) );
	REQUIRE( Apoapsis(50.0, 0.7) == Apojove(50.0, 0.7) );
	REQUIRE( Apoapsis(50.0, 0.7) == Apochron(50.0, 0.7) );
	REQUIRE( Apoapsis(50.0, 0.7) == Apokrone(50.0, 0.7) );
	REQUIRE( Apoapsis(50.0, 0.7) == Aposaturnium(50.0, 0.7) );
	REQUIRE( Apoapsis(50.0, 0.7) == Apouranion(50.0, 0.7) );
	REQUIRE( Apoapsis(50.0, 0.7) == Apoposeidon(50.0, 0.7) );
	REQUIRE( Apoapsis(50.0, 0.7) == Apohadion(50.0, 0.7) );

}
