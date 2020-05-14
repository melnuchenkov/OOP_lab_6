/*
4. �������� ��������� ���� � ����������� �����.
��� �������� ������ ����������� ���������� ������� (��� �����, ���� �����, ������� ��� �������� �����).
����������� ������� ��� ��������� ����� ��������:
�������� �������� � �����, 
���������� ���������� ���� (���� ��������� ������� � ��������� ��������� �������� ������),
��������� �������� ������ �� �����.
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