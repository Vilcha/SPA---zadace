#include <iostream>
#include "MojVektor.h"

using namespace std;

int main() {
	MojVektor v(5);
	for (int i = 0; i < 5; i++)
	{
		v.push_back(2.2);
	}

	v.insert(3, 4.5);
	v.insert(5, 100.5);
	
	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << endl;
	}

	cout << endl;
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	cout << endl;
	return 0;
}