//============================================================================
// Name        : InterfaceExample.cpp
// Author      : Adam
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Int_iterator.h"
#include "tempIterator.h"
#include "Reader.h"

using namespace std;

int sum(Int_iterator ir)
{
	int result = 0;

	while(ir.valid())
		result += ir.next();

	return result;
}

/*********************************************
//for concrete Iterator class
int sum(Iterator<int> ir)
{
	int result = 0;

	while(ir.valid())
		result += ir.next();

	return result;
}
*********************************************/
int sum(int* p, int n)
{
	return sum(Int_iterator(p, n));
}

template<class T> T sum(Iterator<T>& ir)
{
	int result = 0;

	while(ir.valid())
		result += ir.next();

	return result;
}

template<class T, class Iter>
void sum2(T& result, Iter ir)
{
	result = 0;

	while(ir.valid())
		result += ir.next();
}

int main() {

	cout << "Enter number: " << endl;
	double r = 0;
	sum2(r, Reader<double>(cin));
	cout << r << endl;

//	int x[10];
//
//	for(int i = 0; i < 10; ++i) {
//		x[i] = i;
//	}

//	int r;
//
//	sum2(r, Array_iterator<int>(x, 10));
//
//	cout << r << endl;

//	Array_iterator<int> it(x, 10);
//
//	cout << sum(it) << endl;

//	cout << sum(Iterator<int>(x, 10)) << endl;
//	cout << sum(Int_iterator(x, 10)) << endl;

//	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
