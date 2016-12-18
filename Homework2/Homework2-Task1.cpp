// Homework2-Task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;	

void swap(int *num1, int *num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main()
{
	int num1, num2;
	cout << "Insert 2 numbers: ";
	cin >> num1 >> num2;
	swap(num1, num2);
	cout << "1st number: " << num1 << endl;
	cout << "2nd number: " << num2 << endl;

	return 0;
}

