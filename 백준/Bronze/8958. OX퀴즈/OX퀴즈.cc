#include <iostream>
#include <algorithm>
using namespace std;

int n, sum = 0;
int total = 0;
string s;
int main()
{
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == 'O')	sum++;
			else sum = 0;
			total += sum;
		}

		cout << total << endl;
		total = 0;
		sum = 0;
	}

	return 0;
}