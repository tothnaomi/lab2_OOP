#pragma once

// I will declare the functions name and classes here.

class Complex
{
private:
	double real;
	double imaginar;
public:
	
	/* These functions need to be implemented to have acces to the attributes of this class outside of it */
	double get_real();
	double get_imaginar();
	void set(double value_real, double value_imaginar);

	/* This function creates a string format of an object type Complex for us to be able to write the components 
	of the object on the screen */
	void string();

	/* returns the "Betrag" of an object */
	double abs();

	/* I created two variables type double, one of them contains the Betrag of the Complex number and the other 
	contains the angle of the number. After that I verified which quarter this number belongs and I calculated 
	the value of the alpha angle. The last step was to apply the formula for the polar form. */
	Complex convert_polar();

	/* This operator verifies if two objects type Complex are equal or not */
	bool operator==(Complex a);

	/* This operator returns the smaller object from 2 objects type Complex */
	Complex operator<(Complex a);

	/* This function returns the sum of two object type Complex */
	Complex add(Complex a);

	/* This function returns the product of two object type Complex */
	Complex mul(Complex b);

	/* This function returns the quotient of two object type Complex */
	Complex div(Complex b);
};