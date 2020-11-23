#pragma once
#include "A.h"

class B : protected A
{
public:
    B();
    B(float nA, float nB, float nC);
    ResOut getX();
protected:
    float numA, numB, numC, varX1, D;
    ResOut DoQuadEquation();
    void DoDiscriminant();
private:
    ResOut Out;
};