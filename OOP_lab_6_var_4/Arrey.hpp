#pragma once

#include <iostream>

using namespace std;

template <typename T>
class Arrey
{
private:
	T* parr;
	int size = 0;
public:
	Arrey(int size);
	~Arrey();

	T GetElem(int index);
	void AddElem(T value, int index);
	int GetControlSum();

	template <typename T>
	friend ostream& operator<<(ostream& out, const Arrey<T>& obj);
};

template<typename T>
Arrey<T>::Arrey(int size)
{
	this->size = size;
	parr = new T[size];
}

template<typename T>
Arrey<T>::~Arrey()
{
	delete[]parr;
}

template<typename T>
T Arrey<T>::GetElem(int index)
{
	return parr[size - 1];
}

template<typename T>
void Arrey<T>::AddElem(T value, int index)
{
	if (index >= size)
	{
		throw ("Incorrect index value!");
	}
	parr[index] = value;
}

template<typename T>
inline int Arrey<T>::GetControlSum()
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += (int)parr[i];
	}
	return sum;
}

template<typename T>
ostream& operator<<(ostream& out, const Arrey<T>& obj)
{
	for (int i = 0; i < obj.size; i++)
	{
		out << obj.parr[i] << " ";
	}
	return out;
}
