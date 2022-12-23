#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int b = 0;
	const int n = 5;
	int arr[n] = { 3,5,8 };
	//arr[2] = 123; // обращение к элементу массива на запись.
	//cout << arr[2] << endl; // обращение к элементу массива на чтение.
	cout << "¬ведите элементы массива (" << n << " шт.):";
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
	cout << "—умма элементов массива = " << b << endl;
	cout << "Cреднее арефмитическое = " << (double)b / n << endl;

	cout << endl;
	




}