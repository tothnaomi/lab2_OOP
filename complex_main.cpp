// In this folder I have the main function and the tests.


#include <iostream>
#include "complex.h"
#include <cassert>
#include "complex_main.h"
#include <vector>
#include <algorithm>
#include <cstdlib>
#include "Rational.h"



using namespace std;


void test_operations()
{
	/* I created 2 object type Complex to verify the operation add, mul and div */
	Complex n1;
	n1.set(12, 9);
	Complex n2;
	n2.set(2, 4);
	Complex n5;
	n5.set(2, 3);
	Complex n6;
	n6.set(0, 1);
	Complex result;
	result.set(14, 13);
	Complex result2;
	result2.set(-12, 66);
	Complex result_2;
	result_2.set(3, -2);

	assert(n1.add(n2) == result);
	assert(n1.mul(n2) == result2);
	assert(n5.div(n6) == result_2);
}


void test_abs()
{
	Complex n1;
	n1.set(2, 4);
	Complex n2;
	n2.set(0, 2);
	Complex n3;
	n3.set(2, 0);
	assert(n2.abs() == 2);
	assert(n3.abs() == 2);
}


struct abs_sort
{
	// we need this structure to sort the vector c in main() 
	inline bool operator() (Complex& n1, Complex& n2)
	{
		return (n1.abs() < n2.abs());
	}
};


int main()
{
	//I created a vector with 4 elements of class Complex
	vector <Complex> c;
	Complex n1;
	n1.set(2, 4);
	Complex n2;
	n2.set(0, 2);
	Complex n3;
	n3.set(2, 1);
	Complex n4;
	n4.set(3, 6);
	c.push_back(n1);
	c.push_back(n2);
	c.push_back(n3);
	c.push_back(n4);
	
	// wir testen hier die Operationen ==, add, mul und quot
	test_operations();
	test_abs();
	
	//Summe der Elementen der Vektor c, deren Objekte Complexe Zahlen sind.
	int size;
	size = c.size();
	Complex summe;
	summe.set(0, 0);
	for (int i = 0; i < size ; i++)
	{
		summe = summe.add(c[i]);

	}
	
	assert(summe.get_real() == 7 && summe.get_imaginar() == 13);
	

	//I will sort the vector by the abs of each element
	sort(c.begin(), c.end(), abs_sort());
	

	assert(c[0].get_real() == 0 && c[0].get_imaginar() == 2);
	assert(c[1].get_real() == 2 && c[1].get_imaginar() == 1);
	assert(c[2].get_real() == 2 && c[2].get_imaginar() == 4);
	assert(c[3].get_real() == 3 && c[3].get_imaginar() == 6);

	int Calcul;
	
	cout << "We want to add-give 1" << endl << "We want to substract-give 2" << endl << "We want to multiply-give 3" << endl << "We want to divide-give 4" << endl;
	cout << "Calcul:";
	cin >> Calcul;

	if (Calcul == 1)
	{
		int addFractions(float& result_rational);
		
	}
	else if (Calcul == 2)
	{
		int subFractions(float& result_rational);
		
	}
	else if (Calcul == 3)
	{
		int multiplyFractions(float& result_rational);
		
	}
	else if (Calcul == 4)
	{
		int divideFractions(float& result_rational);
	
	}
	else
		cout << "introduce a valid symbol" << endl;

	assert(Calcul == ' ');//in caz ca simbolul nu e corect
	assert(Calcul == '1');
	assert(Calcul == '2');
	assert(Calcul == '4');
	assert(Calcul == '3');
	
	return 0;
}
