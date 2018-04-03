#include "MojVektor.h"

MojVektor::MojVektor()
{
	numbers = new float[0];
}

MojVektor::MojVektor(unsigned n)
{
	numbers = new float[n];
	cap = n;
}

MojVektor::MojVektor(unsigned n, float val)
{
	numbers = new float[n];
	for (unsigned i = 0; i < n; i++)
	{
		numbers[i] = val;
	}
	cap = n;
	vsize = n;
}

void MojVektor::push_back(float x)
{
	if (vsize == cap)
	{
		grow();
	}
	numbers[vsize++] = x;
}

void MojVektor::insert(unsigned n, float x)
{
	int counter = 0;
	float* temp = new float[n];
	if (cap == vsize)
	{
		for (unsigned i = 0; i < cap; i++)
		{
			if (i == n)
			{
				temp[i] = x;
			}
			else
			{
				temp[i] = numbers[counter];
				counter++;
			}
		}
	}
	vsize++;
	delete[] numbers;
	numbers = temp;

}

float MojVektor::at(unsigned i)
{
	return numbers[i];
}

unsigned MojVektor::size()
{
	return vsize;
}

unsigned MojVektor::capacity()
{
	return cap;
}

void MojVektor::grow()
{
	cap += double(cap*0.33);
	float* new_numbers = new float[cap];
	for (unsigned i = 0; i < vsize; i++)
	{
		new_numbers[i] = numbers[i];
	}
	delete[] numbers;
	numbers = new_numbers;
}