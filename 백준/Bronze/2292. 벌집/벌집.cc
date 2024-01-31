#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

int n, i = 1, answer = 1;
int main()
{
	cin >> n;

	while (n > i)
	{
		i += (6 * answer);
		answer++;
	}

	cout << answer;

	return 0;
}