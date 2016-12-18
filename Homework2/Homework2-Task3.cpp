// Homework2-Task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void initArray(int *array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Array[" << i << "]: ";
		cin >> array[i];
	}
	cout << endl;
}

void bubbleSort(int *array, int size)
{
	bool occuredSwap = true;
	for (int i = 0; i < size && occuredSwap; i++)
	{
		occuredSwap = 0;
		for (int j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				occuredSwap = 1;
			}
		}
	}
}


void mergeSorted(int *array1, int *array2, int size1, int size2, int *arrayMerged)
{
	int *pointer1 = array1;
	int *pointer2 = array2;
	int *pointerMerged = arrayMerged;
	int i = 0; 
	int j = 0; 
	int k = 0;
	while (i < size1 && j < size2)
	{
		if (*(pointer1 + i) <= *(pointer2 + j))
		{
			*(pointerMerged + k) = *(pointer1 + i);
			i++;
		}
		else
		{
			*(pointerMerged + k) = *(pointer2 + j);
			j++;
		}
		k++;
	}

	if (i < size1)
	{
		for (int s = i; s < size1; s++)
		{
			*(pointerMerged + k) = *(pointer1 + s);
			k++;
		}
	}
	else
	{
		for (int s = j; s < size2; s++)
		{
			*(pointerMerged + k) = *(pointer2 + s);
			k++;
		}
	}
}





void print(int *array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}

int main()
{
	const int SIZE = 100;
	int array1[SIZE];
	int array2[SIZE];
	int finalArray[SIZE];
	int size1, size2;
	cout << "Insert size of array 1: ";
	cin >> size1;
	cout << "Insert size of array 2: ";
	cin >> size2;
	
	initArray(array1, size1);
	initArray(array2, size2);
	bubbleSort(array1, size1);
	bubbleSort(array2, size2);
	mergeSorted(array1, array2, size1, size2, finalArray);
	print(finalArray, (size1 + size2));
	
	
	return 0;
}

