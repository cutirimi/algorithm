#include <iostream>
#include <string>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;

int n, sum = 0;
string s;
map<string, int> m;
int main()
{
	m.insert({ "a", 1 });			m.insert({ "b", 2 });
	m.insert({ "c", 3 });			m.insert({ "d", 4 });
	m.insert({ "e", 5 });			m.insert({ "f", 6 });
	m.insert({ "g", 7 });			m.insert({ "h", 8 });
	m.insert({ "i", 9 });			m.insert({ "j", 10 });
	m.insert({ "k", 11 });			m.insert({ "l", 12 });
	m.insert({ "m", 13 });			m.insert({ "n", 14 });
	m.insert({ "o", 15 });			m.insert({ "p", 16 });
	m.insert({ "q", 17 });			m.insert({ "r", 18 });
	m.insert({ "s", 19 });			m.insert({ "t", 20 });
	m.insert({ "u", 21 });			m.insert({ "v", 22 });
	m.insert({ "w", 23 });			m.insert({ "x", 24 });
	m.insert({ "y", 25 });			m.insert({ "z", 26 });

	cin >> n;
	cin >> s;

	for (int i = 0; i < n; i++)
	{
		sum += m.at(string(1, s[i])) * pow(31, i);
	}

	cout << sum;

	return 0;
}