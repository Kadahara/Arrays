#include<iostream>
using namespace std;
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int minRand, maxRand;
	cout << "������� ����������� �������� �����"; cin >> minRand;
	cout << "������� ������������ �������� �����"; cin >> maxRand;
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