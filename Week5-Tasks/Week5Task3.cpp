// Week5Task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	char sym;
	cout << "Insert a symbol: ";
	cin >> sym;
	if (isdigit(sym))
	{
		cout << "Digit" << endl;
	}
	else if (isalpha(sym)) 
		cout << "Letter" << endl;
	else cout << "Symbol" << endl;
	
	return 0;
}

