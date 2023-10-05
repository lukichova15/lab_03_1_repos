// Lab_03_1.cpp
// <Лукічова Катерина>
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 12
#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;
	A = (2 + x) / x*x + 1;
	// спосіб 1: розгалуження в скороченій формі
	if (x<0)
		B = x*x*x - 2 * x*x*x*x;
	if (0 <= x && x <= 2)
		B = (abs(x) + exp(x))*(abs(x) + exp(x))*(abs(x) + exp(x));
	if (x>2)
		B = 4 * cos(x*x - 2);
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x<0)
		B = x*x*x - 2 * x*x*x*x;
	else
	if (x>2)
		B = 4 * cos(x*x - 2);
	else
		B = (abs(x) + exp(x))*(abs(x) + exp(x))*(abs(x) + exp(x));
	y = A + B;
	cout << "2) y = " << y << endl;
	cin >> x;
	return 0;
}
