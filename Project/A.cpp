#include "A.h"

A::A()
{
    numA = numB = varX = NULL;
    Out = { NULL, NULL, NULL };
}
A::A(float nA, float nB)
{
    numA = nA;
    numB = nB;
    varX = NULL;
    Out = { NULL, NULL, NULL };
}

ResOut A::getX()
{
    Out.res1 = DoLinEquation();
    return Out;
}

float A::DoLinEquation()
{
    if (numA != 0)
    {
        Out.IsErr = false;
        varX = -numB / numA;
    }
    else
    {
        Out.IsErr = true;
    }
    return varX;
}