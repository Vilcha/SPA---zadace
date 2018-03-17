#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

bool is_odd(const int number) {
	return number % 2;
}

int main() {
	array<int, 10 > numbers = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
	if (all_of(numbers.begin(), numbers.end(), is_odd))				//Return true if all numbers in array return true, otherwise return false
	{
		cout << "All numbers are odd. " << endl;
	}

	else
	{
		cout << "Not all numbers are odd. " << endl;
	}

	cout << endl;
	return 0;
}