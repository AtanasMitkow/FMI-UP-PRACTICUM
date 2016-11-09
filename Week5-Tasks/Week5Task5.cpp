// Week5Task5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int sum, userInput;
	sum = 0;
	do
	{
		
			cout << "Add a number: ";
			cin >> userInput;
		
			// b) Remove this code and leave the code marked with * //
			if (userInput <= 30)
			{
				sum += userInput; // ****leave this for b)*****
			}
		
			else
			{
				cout << "Error! Number value too high!" << endl;
			}	
			//Remove                                    //
	
	}
	while (sum < 100); 
		cout << "Your sum is: " << sum << endl;
    return 0;
}

