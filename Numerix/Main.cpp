
#include<iostream>
using namespace std;
#define tab "\t"
//#define BINц
//#define HEX
//#define NUMBRER_OF_SHIFTS
void main()
{
	setlocale(LC_ALL, "Rus");
#if defined BIN
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 32; //масимально возможная разрядность числа типа int.
	bool bin[n] = {}; //bin - Binary, этот массив будет хранить разряды( биты), двоичного числа.
	int i = 0;
	while (decimal)
	{
		bin[i++] = decimal % 2;
		decimal /= 2;
	}
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}


#endif
#if	defined HEX
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 8;
	int hex[n] = {};
	int i = 0;
	for (; decimal; decimal /= 16)
	{
		hex[i++] = decimal % 16;
		hex[i] += hex[i] < 10 ? 48 : 55;
	}
	for (--i; i >= 0; i--)
	{
		 cout << hex[i];
		
	}
#endif
#if defined NUMBRER_OF_SHIFTS
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
		for (int i = n-1; i >= 0; i--)
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
#endif

}