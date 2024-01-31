#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

int n, answer;
int main()
{
	cin >> n;

	for (int i = 1; i < n; i++)
	{
		int sum = 0;
		int tmp = i;

		// 자릿수마다 더하기
		while (tmp != 0)
		{
			sum += tmp % 10;
			tmp /= 10;
		}

		if (sum + i == n)
		{
			answer = i;
			break;
		}
	}

	cout << answer;

	return 0;
}