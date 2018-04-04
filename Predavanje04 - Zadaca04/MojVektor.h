#pragma once
class MojVektor
{
public:
	MojVektor();							//empty vector
	MojVektor(unsigned n);					//vector with predefined capacity
	MojVektor(unsigned n, float val);		//vector with "n" number of "val"
	void push_back(float x);				//inserts element on next index
	void insert(unsigned indeks, float x);	//inserts element "x" at position "index"
	float at(unsigned i);					//returns element on index "i"
	unsigned size();						//returns size of vector
	unsigned capacity();					//returns capacity of vector
private:
	unsigned cap = 0;
	unsigned vsize = 0;
	float* numbers = nullptr;
	void grow();
};

