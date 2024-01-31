#include <iostream>
#include <algorithm>
using namespace std;

string code[8];
string s;
int main()
{
	for (int i = 0; i < 8; i++)
	{
		cin >> code[i];
		s += code[i];
	}

	if (s == "12345678") cout << "ascending";
	else if (s == "87654321") cout << "descending";
	else cout << "mixed";

	return 0;
}