// Week3Tasks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int firstNum, secondNum, endResult;
	char operation;
	cout << "Choose your first number: ";
	cin >> firstNum;
	cout << "Choose your second number: ";
	cin >> secondNum;
	cout << "Pick your mathematical operation ( + , - , / , % , *): ";
	cin >> operation;
	switch (operation)
	{
	case '+':
		endResult = firstNum + secondNum;
		cout << endResult << endl;
		break;
	case '-': endResult = firstNum - secondNum;
		cout << endResult << endl;
		break;
	case '/': endResult = firstNum / secondNum;
		cout << endResult << endl;
		break;
	case '%': endResult = firstNum%secondNum;
		cout << endResult << endl;
		break;
	case '*': endResult = firstNum*secondNum;
		cout << endResult << endl;
		break;
	default: cout << "Error! Invalid operation!" << endl;
	}

    return 0;
}

