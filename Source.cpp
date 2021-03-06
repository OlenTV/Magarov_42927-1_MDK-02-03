#pragma once
#include "Magarov/QuadEquation.h"
#include "Tests/LinEquationTest.h"
#include "Tests/QuadEquationTest.h"
#include "Tests/MyLogTest.h"
using namespace Magarov;

int main()
{
	LinEquationTest* LinEquTest = new LinEquationTest();
	QuadEquationTest* QuadEquTest = new QuadEquationTest();
	MyLogTest* MyLoTest = new MyLogTest();
	mylog.log("END_TEST");
	mylog.write();
	mylog.clear();

	ifstream verfile;
	verfile.open("..\\version", fstream::in);
	string ver;
	verfile >> ver;
	mylog.log("Program version is " + ver);
	verfile.close();

	float A, B, C;
	A = B = C = 0;
	cout << "Enter A B C" << endl;
	cin >> A >> B >> C;
	mylog.log(to_string(A) + "x^2 + " + to_string(B) + "x + " + to_string(C) + " = 0");

	try
	{
		if (A != 0)
		{
			mylog.log("Quadratic equation");
		}
		else
		{
			mylog.log("Linear equation");
		}
		QuadEquation* equ = new QuadEquation();
		vector <float> *results = equ->solve(A, B, C);
		string str = "Roots: ";
		for (auto const& s: *results)
		{
			str += to_string(s) + " ";
		}
		mylog.log(str);
	}
	catch (MagarovException& exception)
	{
		cout << exception.getText();
	}
	mylog.write();
	mylog.clear();

	system("pause");
	return NULL;
}