// Homework1Task1.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;


int main()
{
	int num1, num2, num3, num4, num5;
	cout << "Choose 5 numbers: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	if (num1 >= num2 && num1 >= num3 && num1 >= num4 && num1 >= num5)
	{
		cout << "The biggest number is : " << num1 << endl;
	}
	else if (num2 >= num1 && num2 >= num3 && num2 >= num4 && num2 >= num5)
	{
		cout << "The biggest number is : " << num2 << endl;
	}
	else if (num3 >= num1 && num3 >= num2 && num3 >= num4 && num3 >= num5)
	{
		cout << "The biggest number is : " << num3 << endl;
	}
	else if (num4 >= num1 && num4 >= num2 && num4 >= num3 && num4 >= num5)
	{
		cout << "The biggest number is : " << num4 << endl;
	}
	else if (num5 >= num1 && num5 >= num2 && num5 >= num3 && num5 >= num4)
	{
		cout << "The biggest number is : " << num5 << endl;
	}

	return 0;
}

