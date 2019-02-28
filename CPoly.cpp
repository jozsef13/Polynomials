#include "CPoly.h"

void CPoly::readPolynomial()
{
	cout << "Enter the exponential maximum power: ";
	cin >> exp;

	cout << "Enter the coefficients: ";
	for (int i = 0; i <= exp; i++)
	{
		cin >> coeff[i];
	}
}

void CPoly::printPolynomial()
{
	for (int i = exp; i >= 0; i--)
	{
		if (i == 1)
		{
			cout << coeff[i] << "x + ";
		}
		else if (i == 0)
		{
			cout << coeff[i] << endl;
		}
		else
		{
			cout << coeff[i] << "x^" << i << " + ";
		}
		
	}
}

CPoly CPoly::operator+(CPoly const &obj)
{
	CPoly sum;
	int expMax;

	if (exp > obj.exp) expMax = exp;
	else expMax = obj.exp;

	sum.exp = expMax;
	for (int i = 0; i <= expMax; i++)
	{
		sum.coeff[i] = coeff[i] + obj.coeff[i];
	}

	return sum;
}

CPoly CPoly::operator-(CPoly const &obj)
{
	CPoly dif;
	int expMax;

	if (exp > obj.exp) expMax = exp;
	else expMax = obj.exp;
	
	dif.exp = expMax;
	for (int i = 0; i <= expMax; i++)
	{
		dif.coeff[i] = coeff[i] - obj.coeff[i];
	}

	return dif;
}

CPoly CPoly::operator*(CPoly const &obj)
{
	CPoly prod;

	for (int i = 0; i <= exp; i++)
	{
		for (int j = 0; j <= obj.exp; j++)
		{
			prod.coeff[i + j] += coeff[i] * obj.coeff[j];
		}
	}

	prod.exp = exp + obj.exp;

	return prod;
}

double CPoly::operator()(double x)
{
	double evaluation = 0;
	for (int i = exp; i >= 0; i--)
	{
		evaluation += coeff[i] * pow(x, i);
	}

	return evaluation;
}
