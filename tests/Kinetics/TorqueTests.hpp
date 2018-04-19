#pragma once
TEST_CASE("Torque"){
	
	glm::vec3 result;

	glm::vec3 rcm = glm::vec3(-1, 0, 0);
	glm::vec3 force = glm::vec3(0.0, -1.0, 0.0);
	glm::vec3 torque = glm::vec3(0.0, 0.0, 1.0);

	Torque(rcm, force, result);
	CHECK(result == torque);
	CHECK(result.z == Approx(1).scale(0.0).epsilon(0.1));

	rcm = glm::vec3(0.751754, 0.273616, 0.0);
	force = glm::vec3(-3.83022, -3.21394, 0.0);
	torque = glm::vec3(0.0, 0.0, -1.368);

	Torque(rcm, force, result);
	CHECK(result.z == Approx(-1.368).scale(0.0).epsilon(0.1));
	
	rcm = glm::vec3(0.756415, 0.260455, 0.0);
	force = glm::vec3(0.0, -900, 0.0);
	torque = glm::vec3(0.0, 0.0, -680.773);

	Torque(rcm, force, result);
	CHECK(result.z == Approx(-680.773).scale(0.0).epsilon(0.1));

	rcm = glm::vec3(0.0, 0.06, 0.0);
	force = glm::vec3(9.0, 0.0, 0.0);
	torque = glm::vec3(0.0, 0.0, -0.54);

	Torque(rcm, force, result);
	CHECK(result.z == Approx(-0.54).scale(0.0).epsilon(0.1));;
}
