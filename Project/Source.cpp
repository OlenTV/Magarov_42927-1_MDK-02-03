#pragma once
#define OUT //сапюрэ йнллемрюпхи б мювюке ярпнйх дкъ бшбндю йнпмеи спюбмемхи
#include "B.h"

void main()
{
    A tmpA1(0.0f, 1.0f);
    A tmpA2(1.0f, 1.0f);
    B tmpB1(1.0f, -2.0f, -3.0f);
    B tmpB2(1.0f, 12.0f, 36.0f);
    B tmpB3(5.0f, 4.0f, 1.0f);

#ifdef OUT
    cout << "---A1------" << endl;
    if (tmpA1.getX().IsErr == false)
    {
        cout << tmpA1.getX().res1 << endl;
    }
    else
    {
        cout << "ERROR!" << endl;
    }

    cout << "---A2------" << endl;
    if (tmpA2.getX().IsErr == false)
    {
        cout << tmpA2.getX().res1 << endl;
    }
    else
    {
        cout << "ERROR!" << endl;
    }

    cout << "---B1------" << endl;
    if (tmpB1.getX().IsErr == false)
    {
        cout << tmpB1.getX().res1 << " " << tmpB1.getX().res2 << endl;
    }
    else
    {
        cout << "ERROR!" << endl;
    }

    cout << "---B2------" << endl;
    if (tmpB2.getX().IsErr == false)
    {
        cout << tmpB2.getX().res1 << " " << tmpB2.getX().res2 << endl;
    }
    else
    {
        cout << "ERROR!" << endl;
    }

    cout << "---B3------" << endl;
    if (tmpB3.getX().IsErr == false)
    {
        cout << tmpB3.getX().res1 << " " << tmpB3.getX().res2 << endl;
    }
    else
    {
        cout << "ERROR!" << endl;
    }
#endif

    return;
}