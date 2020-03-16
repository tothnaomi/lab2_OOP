// I will implement here the functions and the class 
#include <iostream>
#include "complex.h"
#include <cmath>
#define PI 3.14159265

using namespace std;


void Complex::string()
{
	cout << real << " + " << imaginar << "i" << endl;
}

double Complex::get_real() 
{ 
	//getter
	return (real); 
}

bool Complex::operator==(Complex a)
{
	return real == a.real && imaginar == a.imaginar;
}


double Complex:: get_imaginar() 
{ 
	//getter
	return (imaginar); 
}

void Complex::set(double value_real, double value_imaginar)
{
	//setter
	real = value_real;
	imaginar = value_imaginar;
}

Complex Complex::add(Complex b)
{
	Complex temp;
	temp.real = real + b.real;
	temp.imaginar = imaginar + b.imaginar;
	return (temp);
}

Complex Complex::mul(Complex b)
{
	Complex temp;
	temp.real = real * b.real - imaginar * b.imaginar;
	temp.imaginar = real * b.imaginar + imaginar * b.real;
	return (temp);
}

Complex Complex::div(Complex b)
{
	//we will divide a with b
	Complex a;
	a.set(real, imaginar);
	Complex helper;
	helper.set(b.real, -b.imaginar);

	Complex res;
	res = a.mul(helper);

	double r, im;
	r = res.real / (pow(b.real, 2) + pow(b.imaginar, 2));
	im = res.imaginar / (pow(b.real, 2) + pow(b.imaginar, 2));
	Complex result;
	result.set(r, im);
	
	return (result);
}

double Complex::abs()
{
	return sqrt(pow(real,2) + pow(imaginar,2));
}

Complex Complex::convert_polar()
{
	double r;
	double alpha;
	r = abs();
	cout << "abs is: " << r << endl;
	if (real > 0 && imaginar > 0) alpha = atan(imaginar / real);
	if (real > 0 && imaginar < 0) alpha = atan(imaginar / real) + 2 * PI;
	else alpha = atan(imaginar / real) + PI;
	cout << "alpha is:" << alpha;
	Complex result;
	result.real = r * cos(alpha);
	result.imaginar = r * sin(alpha);
	return result;
}