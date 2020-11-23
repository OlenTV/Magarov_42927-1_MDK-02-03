#include "B.h"

B::B() :A()
{
    numA = numB = numC = D = varX = varX1 = NULL;
    Out = { NULL, NULL, NULL };
}

B::B(float nA, float nB, float nC) : A(nB, nC)
{
    numA = nA;
    numB = nB;
    numC = nC;
    D = varX = varX1 = NULL;
    Out = { NULL, NULL, NULL };
}

ResOut B::getX()
{
    if (numA == 0)
    {
        return A::getX();
    }
    
    return DoQuadEquation();
}

void B::DoDiscriminant()
{
    D = powf(numB, 2) - 4 * numA * numC;
}

ResOut B::DoQuadEquation()
{
    DoDiscriminant();
    if (D > 0)
    {
        varX = (-numB + sqrtf(D)) / (2 * numA);
        varX1 = (-numB - sqrtf(D)) / (2 * numA);
        Out.res1 = varX;
        Out.res2 = varX1;
        Out.IsErr = false;
    }
    else if (D == 0)
    {
        varX = -numB / (2 * numA);
        Out.res1 = Out.res2= varX;
        Out.IsErr = false;
    }
    else
    {
        Out.IsErr = true;
    }
    return Out;
}