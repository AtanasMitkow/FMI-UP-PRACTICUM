// Homework2-Task7.cpp : Defines the entry point for the console application.
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

void printArray(int *array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}

bool removeNumber(int *array, int size, int number)
{
	int resultArray[SIZE];
	int i = 0; 
	int j = 0;
	bool occuredRemove = false;
	while (i < size)
	{
		if (array[i] != number)
		{
			resultArray[j] = array[i];
			j++;
		}
		else 
		{
			occuredRemove = true;
		}
		i++;
	}
	printArray(resultArray, j);
	cout << endl;

	return occuredRemove;
}


int main()
{
	
	int array[SIZE];
	int size, number;
	cout << "Insert array size: ";
	cin >> size;
	cout << "Insert a number to remove: ";
	cin >> number;
	initArray(array, size);
	cout << "Occured remove: " << removeNumber(array, size, number) << endl;
	return 0;
}

