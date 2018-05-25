#pragma once

TEST_CASE("Spheroid Inertia"){

    //Matrix Definitions
    glm::mat3 glmMatrix;
    float arrayMatrix[9];
    std::vector<float> vectorMatrix(9);

    glm::mat3 glmZeroMatrix;
    glmZeroMatrix = glm::mat3(0.0);
    float arrayZeroMatrix[9];
    std::fill(arrayZeroMatrix, arrayZeroMatrix + 9, 0.0f);
    std::vector<float> vectorZeroMatrix(9, 0);

    float m1 = 3.0; float a1 = 1.0; float c1 = 1.0;
    float m2 = 4.0; float a2 = 2.0; float c2 = 3.0;
      

    SpheroidInertia(m1, a1, c1, arrayMatrix);
    CHECK(arrayMatrix[0] == 1.0f / 5.0f * m1 * (c1 * c1 + a1* a1));
    CHECK(arrayMatrix[4] == 1.0f / 5.0f * m1 * (a1 * a1 + c1 * c1));
    CHECK(arrayMatrix[8] == 1.0f / 5.0f * m1 * (a1 * a1 + a1 * a1));

    SpheroidInertia(m2, a2, c2, arrayMatrix);
    CHECK(arrayMatrix[0] == 1.0f / 5.0f * m2 * (c2 * c2 + a2 * a2));
    CHECK(arrayMatrix[4] == 1.0f / 5.0f * m2 * (a2 * a2 + c2 * c2));
    CHECK(arrayMatrix[8] == 1.0f / 5.0f * m2 * (a2 * a2 + a2 * a2));

  
    //Vector matrix check
    SpheroidInertia(0.0, 0.0, 0.0, vectorMatrix);
    CHECK(vectorMatrix == vectorZeroMatrix);

    SpheroidInertia(m1, a1, c1, vectorMatrix);
    CHECK(vectorMatrix[0] == 1.0f / 5.0f * m1 * (c1 * c1 + a1 * a1));
    CHECK(vectorMatrix[4] == 1.0f / 5.0f * m1 * (a1 * a1 + c1 * c1));
    CHECK(vectorMatrix[8] == 1.0f / 5.0f * m1 * (a1 * a1 + a1 * a1));

    SpheroidInertia(m2, a2, c2, vectorMatrix);
    CHECK(vectorMatrix[0] == 1.0f / 5.0f * m2 * (c2 * c2 + a2 * a2));
    CHECK(vectorMatrix[4] == 1.0f / 5.0f * m2 * (a2 * a2 + c2 * c2));
    CHECK(vectorMatrix[8] == 1.0f / 5.0f * m2 * (a2 * a2 + a2 * a2));

    //Glm matrix check
    SpheroidInertia(0.0, 0.0, 0.0, glmMatrix);
    CHECK(glmMatrix == glmZeroMatrix);

    SpheroidInertia(m1, a1, c1, glmMatrix);
    CHECK(glmMatrix[0][0] == 1.0f / 5.0f * m1 * (c1 * c1 + a1 * a1));
    CHECK(glmMatrix[1][1] == 1.0f / 5.0f * m1 * (a1 * a1 + c1 * c1));
    CHECK(glmMatrix[2][2] == 1.0f / 5.0f * m1 * (a1 * a1 + a1 * a1));

    SpheroidInertia(m2, a2, c2, glmMatrix);
    CHECK(glmMatrix[0][0] == Approx(1.0f / 5.0f * m2 * (c2 * c2 + a2 * a2)).scale(0.0).epsilon(0.001)); //Complains even though gets same number 
    CHECK(glmMatrix[1][1] == Approx(1.0f / 5.0f * m2 * (c2 * c2 + a2 * a2)).scale(0.0).epsilon(0.001)); //Complains even though gets same number 
    CHECK(glmMatrix[2][2] == 1.0f / 5.0f * m2 * (a2 * a2 + a2 * a2));

   

}
