// Homework1Task2.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;


int main()
{
	int num1, num2, num3;
	cout << "Choose three numbers: ";
	cin >> num1 >> num2 >> num3;
	if ((num1 * num2 * num3) < 0)
	{
		cout << "The result is: -" << endl;
	}
	else if ((num1 * num2 * num3) > 0)
	{
		cout << "The result is: +" << endl;
	}
	else
	{
		cout << "The result is: 0" << endl;
	}

    return 0;
}

