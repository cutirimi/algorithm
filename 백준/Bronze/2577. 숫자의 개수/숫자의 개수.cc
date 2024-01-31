#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int a, b, c;
int mult;
int arr[10] = { 0 };
int main()
{
	cin >> a;
	cin >> b;
	cin >> c;

	mult = a * b * c;
	string s = to_string(mult);

	for (int i = 0; i < s.size(); i++)
	{
		arr[s[i] - '0']++;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << '\n';
	}

	return 0;
}