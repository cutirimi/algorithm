#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

string s;
int cnt = 0;
int main()
{
	getline(cin, s);

	for (int i = 1; i < s.size(); i++)
	{
		if (s[i] == ' ') cnt++;
	}

	if (s[0] == ' ' && s.size() == 1) cout << 0;
	else if (s[s.size() - 1] == ' ')	cout << cnt;
	else cout << cnt + 1;

	return 0;
}