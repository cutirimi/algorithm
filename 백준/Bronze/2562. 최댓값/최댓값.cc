#include <iostream>
#include <algorithm>
using namespace std;

int num[9] = { 0 };
int nmax = 0;
int index = 0;
int main()
{
	for (int i = 0; i < 9; i++)
	{
		cin >> num[i];

		if (num[i] > nmax)
		{
			nmax = num[i];
			index = i;
		}
	}

	cout << nmax << endl;
	cout << index + 1;

	return 0;
}