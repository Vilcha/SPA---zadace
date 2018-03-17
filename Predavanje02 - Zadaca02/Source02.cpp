#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

bool is_even(const int number) {
	return (number % 2 == 0);
}

int main() {
	array<int, 5> numbers = { 1,3,5,6,7 };
	array<int, 5>::iterator i = find_if(numbers.begin(), numbers.end(), is_even);	//Return iterator to first even number in array, if no even number return last iterator in array
	if (i != numbers.end())
	{
		cout << "The first even number in array is: " << *i << endl;
	}

	else
	{
		cout << "No even number in array. " << endl;
	}

	cout << endl;
	return 0;
}