/*
4. Створити шаблонний клас – одновимірний масив.
Тип елементів масиву визначається параметром шаблона (цілі числа, дійсні числа, символи або символьні рядки).
Передбачити функції для виконання таких операцій:
введення елементів у масив, 
обчислення контрольної суми (сума кількостей одиниць у машинному зображенні елементів масиву),
виведення елементів масиву на екран.
*/

#include <iostream>
#include "Arrey.hpp"

using namespace std;

int main()
{
	Arrey<char> arr_char(5);
	for (int i = 0,k = 'a'; i < 5; i++,k++)
	{
		arr_char.AddElem(k,i);
	}
	cout << arr_char << endl;
	cout << "controle sum: " << arr_char.GetControlSum() << endl << endl;
	Arrey<int> arr_int(10);
	for (int i = 0; i < 10; i++)
	{
		arr_int.AddElem(i, i);
	}
	cout << arr_int << endl;
	cout << "controle sum: " << arr_int.GetControlSum() << endl;
}