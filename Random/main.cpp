#include<iostream>
using namespace std;
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int minRand, maxRand;
	cout << "ВВедите минимальное случаное число"; cin >> minRand;
	cout << "ВВедите максимальное случаное число"; cin >> maxRand;
	for (int i = 0; i < n; i++)
	{
		arr[i] =minRand + rand()% (maxRand - minRand) ;
		        
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}