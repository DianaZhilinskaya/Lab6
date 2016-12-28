#include "stdafx.h"
#include<iostream>
using namespace std;
const int max = 100;

class Set
{
	int* set;
	int length;
public:
    friend bool operator>(int el, Set& s);
    friend void operator+(Set& s, int el);
	friend ostream& operator<<(ostream& ost, Set& s);
	friend int operator[](Set& s, int i);
	Set();
	~Set();
	Set* operator*(Set& tet);
	bool operator<(Set& re);
	int operator()();


};

/*
friend  dat operator+(dat &e,int n) 
{ 
dat     x; 
x=e;
while (n-- != 0) x.next();  
return(x);                  
}
*/