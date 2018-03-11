#pragma once
class ComplexNumber
{
public:
	ComplexNumber(int real, int imaginary);
	ComplexNumber();
	void set_real(int real);
	void set_imaginary(int imaginary);
	ComplexNumber(ComplexNumber k1, ComplexNumber k2);
	int get();
private:
	int real;
	int imaginary;
};

