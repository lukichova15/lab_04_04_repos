// Lab_04_4.cpp
// Лукічова Катерина
// Лабораторна робота No 4.4
// Табуляція функції, заданої графіком
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, y, R;
	cout << "R = "; cin >> R; // вхідний параметр
	cout << "xp = "; cin >> xp; // х початкове
	cout << "xk = "; cin >> xk; // х кінцеве
	cout << "dx = "; cin >> dx; // крок
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -6)
			y = R;
		else
		if (x>-6 && x <= -R)
			y = -(x + 6) / (R + 6);
		else 
		if (x>-R && x <= 0)
			y = R - sqrt(R*R - (x + R)*(x + R));
		else
		if (x>0 && x <= R)
			y = sqrt(R*R - x*x);
		else
			y = -x + R;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	cin >> dx;
	return 0;
}
