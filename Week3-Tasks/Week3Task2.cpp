// Week3Tasks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Choose a number: ";
	cin >> number;

	int divisor = 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10;

	switch (number%divisor) {
	case 0:
		cout << "Your number cannot be divided by all the numbers from 2 to 10 " << endl;
		break;
	default: cout << "Your number can be divided by all the numbers from 2 to 10" << endl;
	}
	return 0;
}