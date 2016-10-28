// Homework1Task3.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;


int main()
{
	int num1, num2, sum , finalAnswer;
	cout << "Insert 2 numbers: ";
	cin >> num1 >> num2;
	sum = num1 + num2;
    (sum % 2 == 0 ? finalAnswer = sum * 2 : finalAnswer = sum / 2);
	cout << "The end result is: " << finalAnswer << endl;
    return 0;
}

