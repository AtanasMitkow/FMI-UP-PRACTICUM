// Week5Task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int number,result;
	cout << "Insert a number from 5 to 20: ";
	cin >> number;
	if (number > 20 || number < 5)
	{
		cout << "Error! Invalid number!" << endl;

	}
	if (number % 2 == 0)
	{
		cout << "The number is even" << endl;
	}
	else
	{	
		cout << "The number is odd" << endl;
		switch (number)
		{
		case 9:
		case 15: cout << "The number is not simple" << endl;
			break;
		case 7:
		case 11:
		case 13:
		case 17:
		case 19: cout << "The number is simple" << endl;
			break;
		}
	}

	return 0;
}

