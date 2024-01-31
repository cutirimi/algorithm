#include <iostream>
#include <algorithm>
using namespace std;

int t, r;
string s;
int main()
{
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> r >> s;

		string str;

		for (int j = 0; j < s.length(); j++)
		{
			for (int a = 0; a < r; a++)
			{
				str += s[j];
			}
		}

		cout << str << '\n';
	}

	return 0;
}