#pragma once
#include <iostream>
#include <math.h>

using namespace std;

struct ResOut
{
    bool IsErr;
    float res1;
    float res2;
};

class A
{
public:
    A();
    A(float nA, float nB);
    ResOut getX();
protected:
    float varX;
    float DoLinEquation();
private:
    float numA, numB;
    ResOut Out;
};