#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

bool are_odd_and_adjacent(const int number1, const int number2) {
	return ((number1 == number2) && (number1&&number2 % 2 == 1));
}

int main() {
	array<int, 10> numbers = { 1,2,4,3,3,6,7,7,8,9 };
	array<int, 10>::iterator i = adjacent_find(numbers.begin(), numbers.end(), are_odd_and_adjacent); //Return iterator to first element of first consecutive odd pair;
	if (i != numbers.end())																			  //if no odd pair found return iterator to last element in array
	{
		cout << "The first pair of consecutive odd numbers are: " << *i << endl;
	}

	else
	{
		cout << "No consecutive pair of odd numbers found. " << endl;
	}

	cout << endl;
	return 0;
}