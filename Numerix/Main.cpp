
#include<iostream>
using namespace std;
#define tab "\t"
//#define DECIMAL
void main()
{
	setlocale(LC_ALL, "Rus");
#if defined DECIMAL
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 32; //масимально возможная разрядность числа типа int.
	bool bin[n] = {}; //bin - Binary, этот массив будет хранить разряды( биты), двоичного числа.
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
		int buffer = arr[n - 1];
		for (int i = 9; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}




	//вывод сдвинутого массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}