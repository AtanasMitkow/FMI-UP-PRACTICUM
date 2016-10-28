// Week3Task4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
 using namespace std;


int main()
{
	int aNum, methodNum;
	long double answer;
	cout << "Choose a method (1,2,3,4): ";
	cin >> methodNum;
	cout << "Insert x: ";
	cin >> aNum;
	switch (methodNum)
	{
	case 1:
		answer = aNum - 5;
		cout << "y = x - 5 = " << answer << endl;
		break;
	case 2:
		answer = sin(aNum);
		cout << "sin(x) = " << answer << endl;
		break;
	case 3:
		answer = cos(aNum);
		cout << "cos(x) = " << answer << endl;
		break;
	case 4:
		answer = exp(aNum);
		cout << "exp(x) = " << answer << endl;
		break;
	default: cout << "Error! Please insert a number from 1 to 4";
	}
	return 0;
}

