#include <iostream>
using namespace std;

int main()
{
	int n;
	long long answer = 1;

	cin >> n;

	if (n != 0)
	{
		for (int i = 1; i <= n; i++)
		{
			answer *= i;
		}
		cout << answer;
	}
	else
		cout << "1";
}