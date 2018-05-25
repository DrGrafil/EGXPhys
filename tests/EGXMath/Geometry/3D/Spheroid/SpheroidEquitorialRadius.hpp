#pragma once

TEST_CASE("Spheroid Equitorial Radius"){
    
    CHECK(SpheroidEquatorialRadius(0.0, 0.0) == 0.0);
	CHECK(SpheroidEquatorialRadius(1.0, 0.0) == 1.0);
    CHECK(SpheroidEquatorialRadius(1.0, 1.0) == 1.0 + 1.0/3.0);
    CHECK(SpheroidEquatorialRadius(1.0, 3.0) == 2.0);
}
