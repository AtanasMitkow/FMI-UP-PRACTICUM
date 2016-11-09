// Week6Task6 : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int userInput, userInputCopy;
	int count = 0;
	int sum = 0;
	cout << "Insert a max 4 digit number: " << endl;
	cin >> userInput;
	userInputCopy = userInput;
	do
	{
		count++;
		userInputCopy /= 10;

	} while (userInputCopy != 0);

		if (count > 4)
		{
			cout << "Error! The number contains more than 4 digits!" << endl;
		}
		else
		{ 
	for (int i = 1; i < userInput; i++)
	{
		sum += i*i;
	}
	
	cout << "The even numbers are:" << endl;
	for (int j = 0; j <= userInput - 1; j++)
	{
		if (j % 2 == 0)
		{
			cout << j << endl;
		}
	}
}
	
	cout << "The sum is: " << sum << endl;
	return 0;
}


