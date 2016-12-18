// Homework2-Task8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

void initArray(int *array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Array [" << i << "]: ";
		cin >> array[i];
	}
}

void searchFirst(int *array, int size, int number) 
{
	int *pointer = array;
	for (int i = 0; i < size; i++)
	{
		if (array[i] == number)
		{
			pointer = &array[i];
		}
	}

	cout << *pointer << " " << pointer << endl;
}



int main()
{
	int array[SIZE];
	cout << "Insert size: ";
	int size, number;
	cin >> size;
	cout << "Insert number: ";
	cin >> number;
	initArray(array, size);
	searchFirst(array, size, number);
	return 0;
}

