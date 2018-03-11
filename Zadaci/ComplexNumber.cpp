#include "ComplexNumber.h"


ComplexNumber::ComplexNumber(int real, int imaginary)
{
	set_real(real);
	set_imaginary(imaginary);
}

ComplexNumber::ComplexNumber()
{
}

void ComplexNumber::set_real(int real)
{
	this->real = real;
}

void ComplexNumber::set_imaginary(int imaginary)
{
	this->imaginary = imaginary;
}

ComplexNumber::ComplexNumber(ComplexNumber k1, ComplexNumber k2)
{
}

int ComplexNumber::get()
{
	return 0;
}
