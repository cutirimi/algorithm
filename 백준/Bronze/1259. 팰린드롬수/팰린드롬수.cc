#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string num;
bool palindrome(string s)
{
	for (int i = 0; i < s.size() / 2; i++)
	{
		if (s[i] != s[s.size() - i - 1])	return false;
	}

	return true;
}
int main()
{
	cin >> num;

	while (num!="0")
	{
		if (palindrome(num)) cout << "yes" << endl;
		else cout << "no" << endl;

		cin >> num;
	}
	
	return 0;
}