// Week3Task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
	using namespace std;

int main()
	{
		int a, b, c, P, S, h, figure, r, d;
		double Po, So;	//variables for the circle
		const double pi = 3.14;
		cout << "Pick a figure ( 1 - triangle, 2 - square, 3 - circle, 4 - rectangle, 5 - trapezoid):";
		cin >> figure;
		switch (figure)
		{
		case 1:
			cout << "Set a,b,c: " << endl;
			cin >> a >> b >> c;
			if ((a + b) <= c || (a + c) <= b || (b + c) <= a) 
			{
				cout << "Your triangle does not exist!" << endl;
			}
			else {
				cout << "Set height against side a: " << endl;
				cin >> h;
				P = a + b + c;
				S = (a*h) / 2;
				cout << "P = " << P << endl;
				cout << "S = " << S << endl;
				
			}
			break;
		case 2:
			cout << "Set a: " << endl;
			cin >> a;
			P = 4 * a;
			S = pow(a, 2);
			cout << "P = " << P << endl;
			cout << "S = " << S << endl;
			break;
		case 3:
			cout << "Set a radius: " << endl;
			cin >> r;
			Po = 2 * pi * r;
			So = pi * r * r;
			cout << "P = " << Po << endl;
			cout << "S = " << So << endl;
			break;
		case 4:
			cout << "Set a , b: " << endl;
			cin >> a >> b;
			P = 2 * a + 2 * b;
			S = a*b;
			cout << "P = " << P << endl;
			cout << "S = " << S << endl;
			break;
		case 5:
			cout << "Set a,b,c,d: " << endl;
			cin >> a >> b >> c >> d;
			cout << "Set height: " << endl;
			cin >> h;
			P = a + b + c + d;
			S = ((a + b)*h) / 2;
			cout << "P = " << P << endl;
			cout << "S = " << S << endl;
			break;
		default: cout << "Error! Pick one of the given figures!" << endl;
			break;
		}
		
	
    return 0;
}

