#include "CPoly.h"

int main()
{
	CPoly p1, p2, p3;
	int x;

	p1.readPolynomial();
	cout << "First polynomial: ";
	p1.printPolynomial();
	cout << endl;

	p2.readPolynomial();
	cout << "Second polynomial: ";
	p2.printPolynomial();
	cout << endl;

	p3.readPolynomial();
	cout << "Third polynomial: ";
	p3.printPolynomial();
	cout << endl;

	cout << "Enter x = ";
	cin >> x;

	double v1, v2;
	v1 = (p1*p1)(x) - p2(x) * p3(x);
	cout << "v1 = " << v1 << endl;
	v2 = ((p1 * p1) - (p2 * p3))(x);
	cout << "v2 = " << v2 << endl;

	return 0;
}