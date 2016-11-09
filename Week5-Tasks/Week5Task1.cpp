// Week4Task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int number;
	cout << "Insert a number from 1 to 12: ";
	cin >> number;
	if (number > 12 || number < 1)

	{
		cout << "Invalid number!" << endl;
	}
	switch (number)
	{
		case 1:
		case 2: 
		case 3: cout << "The season is winter" << endl;
			break;
		case 4:
		case 5:
		case 6:	cout << "The season is spring" << endl;
			break;
		case 7:
		case 8:
		case 9: cout << "The season is summer" << endl;
			break;
		case 10:
		case 11:
		case 12: cout << "The season is autumn" << endl;
			break;

	}
	
	
	return 0;
}

