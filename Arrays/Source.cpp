#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int b = 0;
	const int n = 5;
	int arr[n] = { 3,5,8 };
	//arr[2] = 123; // ��������� � �������� ������� �� ������.
	//cout << arr[2] << endl; // ��������� � �������� ������� �� ������.
	cout << "������� �������� ������� (" << n << " ��.):";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		b += arr[i];
	}
	cout << "����� ��������� ������� = " << b << endl;
	cout << "C������ �������������� = " << (double)b / n << endl;

	cout << endl;
	




}