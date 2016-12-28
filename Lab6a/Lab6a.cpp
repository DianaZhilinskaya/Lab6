#include "stdafx.h"
#include<iostream>
#include"Mn.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Set x;
	x + 1;
	x + 5;
	x + 1;
	x + 14;
	x + 6;
	cout <<"A="<< x;
	Set u;
	u + 2;
	u + 1;
	u + 5;
	u + 6;
	Set r;
	r + 1;
	r + 5;
	r + 1;
	cout << "C=" << r;
	cout <<"B="<< u;
	cout<<"B*A="<< *(u*x);
	cout << "C*B=" << *(r*u);
	cout.setf(ios::boolalpha);
	cout << "B<A " << (u < x) << endl;
	cout << "C<A " << (r < x) << endl;
	cout << "C<B " << (r < u) << endl;
	cout << "M|A|=" << x()<<endl;
	cout << "M|B|=" << u() << endl;
	cout << "M|C|=" << r() << endl;
	cout << "A[2]=" << x[2]<<endl;
	cout << "B[3]=" << u[3] << endl;
	cout << "C[1]=" << r[1] << endl;
	return 0;
}

