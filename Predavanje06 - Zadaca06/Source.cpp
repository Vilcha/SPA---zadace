#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	stack<char> s;
	string izraz;
	cout << "Upisite neki matematicki izraz: ";
	cin >> izraz;
	for (unsigned i = 0; i < izraz.length(); i++)
	{
		if (izraz[i] == '(')
		{
			s.push(izraz[i]);
		}

		else if (izraz[i] == ')')
		{
			s.pop();
		}
	}

	if (s.empty())
	{
		cout << "Izraz je ispravno balansiran. " << endl;
	}
	else
	{
		cout << "Izraz ima viska zagradu i nije balansiran. " << endl;
	}

	cout << endl;
	return 0;
}