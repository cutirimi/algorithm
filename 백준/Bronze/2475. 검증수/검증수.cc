#include <iostream>
#include <algorithm>
using namespace std;

int sum = 0;
int n;
int main()
{
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		sum += n * n;
	}

	cout << sum % 10;

	return 0;
}