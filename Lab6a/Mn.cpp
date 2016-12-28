#include "stdafx.h"
#include<iostream>
#include"Mn.h"
int length;

 bool operator>(int el, Set& s)//проверка на принадлежность
{
	for (int i = 0; i < s.length; i++)
	{
		if (s.set[i] == el)
			return true;
	}
	return false;
}
 void operator+(Set& s, int el)//добавление
{
	if (!(el>s))
	{
		s.set[s.length] = el;
		s.length++;
	}
}
 ostream& operator<<(ostream& ost, Set& s)//вывод
{
	int i = 0;
	ost << "{";
	for (i = 0; i < (s.length - 1); i++)
	{
		ost << s.set[i] << ",";
	}
	ost << s.set[i] << "}\n";
	return ost;
}

Set::Set()
{
	set = new int[max];
	length = 0;
}
Set::~Set()
{
	delete[]set;
}

Set* Set::operator*(Set& tet)//пересечение множеств
{
	Set* t = new Set;
	for (int i = 0; i < length; i++)
	{
		if (set[i]>tet)
		{
			*t + set[i];
		}
	}
	return t;
}

bool Set::operator<(Set& re)//проверка на подмножество
{
	if (length>re.length)
	{
		return false;
	}
	else
	for (int i = 0; i < length; i++)
	{
		if (!(set[i]>re))
			return false;
	}
	return true;
}

int Set::operator()()//мощность
{
	return length;
}

int Set::operator[](int i)//проверка элемента
{
	return set[i - 1];
}