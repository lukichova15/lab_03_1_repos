// Lab_03_1.cpp
// <������� ��������>
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 12
#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;
	A = (2 + x) / x*x + 1;
	// ����� 1: ������������ � ��������� ����
	if (x<0)
		B = x*x*x - 2 * x*x*x*x;
	if (0 <= x && x <= 2)
		B = (abs(x) + exp(x))*(abs(x) + exp(x))*(abs(x) + exp(x));
	if (x>2)
		B = 4 * cos(x*x - 2);
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ����� ����
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
