
#include<iostream>
using namespace std;
//#define VAR_1
#define tab "\t"



void main()
{
	setlocale(LC_ALL, "");
#if defined VAR_1
	int b = 0;
	const int n = 5;
	int arr[n] = { 3,5,8 };
	//arr[2] = 123; // обращение к элементу массива на запись.
	//cout << arr[2] << endl; // обращение к элементу массива на чтение.
	cout << "Введите элементы массива (" << n << " шт.):";
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
	cout << "Сумма элементов массива = " << b << endl;
	cout << "Cреднее арефмитическое = " << (double)b / n << endl;

	cout << endl;
	
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Мининальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве:" << max << endl;
#endif
	
	const int n = 10;
	//Вывод исходного массива на экран
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//Сдвиг массива
	int number_of_shifts;
	cout << "Сдвиг массива на: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
			for (int i = 1; i < n; i++)
			{
				arr[i - 1] = arr[i];
			}
		arr[n - 1] = buffer;
	}



	//вывод сдвинутого массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}