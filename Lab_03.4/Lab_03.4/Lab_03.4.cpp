// Lab_03_4.cpp
// ������� �����
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 7
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;// ������� ��������
	double y;// ������� ��������
	double R;// �����
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// ������������ � ����� ����
	if ((x <= 0 && y >= 0 && (x * x + y * y <= R * R)) ||
		(x >= 0 && x <= 2 * R && y <= 0 && y >= -R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}