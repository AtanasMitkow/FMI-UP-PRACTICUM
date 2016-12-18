// Homework2-Task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void initArray(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Array [" << i << "]: ";
		cin >> array[i];
	}
}

void reversePrintArray(int *array, int size)
{
	int *pointer = array;
	for (int i = size - 1; i >= 0; i--)
	{
		cout << *(pointer + i) << " ";
	}
	cout << endl;
}

int main()
{
	const int SIZE = 100;
	int array[SIZE];
	int size;
	cout << "Insert array size: ";
	cin >> size;
	initArray(array, size);
	cout << "Reverse printed: ";
	reversePrintArray(array, size);
	


	
	return 0;
}

