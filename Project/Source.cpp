#pragma once
#include "C.h"

int main()
{
    A a1;
    A a2;
    A a3;
    A a4;
    B b5(&a1, &a2);
    C c6(&b5, &a3, &a4);
    return 0;
}