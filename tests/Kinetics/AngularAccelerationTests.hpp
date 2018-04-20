#pragma once
TEST_CASE("Angular Acceleration"){
	
	glm::vec3 torque = glm::vec3(0.0, 0.0, -0.54);
	glm::mat3 inertia;
	EGXMath::CylinderInertia(50.0, .06, 20.0, inertia);
	glm::vec3 angularAcc;
	AngularAcceleration(torque, inertia, angularAcc);

	CHECK(angularAcc.z == Approx(-6.0).scale(0.0).epsilon(0.1));

}
