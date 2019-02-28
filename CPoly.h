#pragma once
#define MAX 10
#include <iostream>
#include <math.h>
using namespace std;

class CPoly
{
public:
	CPoly()
	{
		exp = 0;
		for (int i = 0; i <= MAX; i++)
		{
			coeff[i] = 0;
		}
	}
	
	void readPolynomial();
	void printPolynomial();
	CPoly operator + (CPoly const &obj);
	CPoly operator - (CPoly const &obj);
	CPoly operator * (CPoly const &obj);
	double operator () (double x);


private:
	double coeff[MAX];
	int exp;
};

