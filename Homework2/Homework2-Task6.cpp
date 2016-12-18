// Homework2-Task6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

void initArray(double *array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Array [" << i << "]: ";
		cin >> *(array + i);
	}
}

double calculateAverage(double num1, double num2)
{
	double result;
	result = (num1 + num2) / 2;
	return result;
}

int searchAverage(double *array, int size)
{
	bool inMiddle = false;
	int index = 0;
	
	for (int i = 1; i < size -1 ; i++)
	{
		if (*(array + i) == calculateAverage(*(array + i - 1), *(array + i + 1)))
		{
			inMiddle = true;
			index = i;
		}
	} 

	if (*(array+ size -1) == *(array + size -2))
	{
		index = size - 1;
	}
	else if (inMiddle == false && *(array) == *(array + 1))
	{
		index = 0;
	}
	else if (inMiddle == false)
	{
		index = -1;
	} 

	
	return index;
} 

int main()
{
	double array[SIZE];
	int size;
	cout << "Insert array size: ";
	cin >> size;
	initArray(array, size);
	cout << "Result index: " << searchAverage(array, size);
	
	
	return 0;
}

