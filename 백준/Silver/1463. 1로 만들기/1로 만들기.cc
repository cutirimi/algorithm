#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int dp[10000001];

int main()
{
	int x;
	cin >> x;

	fill(dp, dp + 10000001, INT_MAX);
	dp[0] = 0;
	dp[1] = 0;

	for (int i = 1; i <= x; i++)
	{
		dp[i + 1] = min(dp[i] + 1, dp[i + 1]);
		dp[i * 2] = min(dp[i] + 1, dp[i * 2]);
		dp[i * 3] = min(dp[i] + 1, dp[i * 3]);
	}

	cout << dp[x];

	return 0;
}