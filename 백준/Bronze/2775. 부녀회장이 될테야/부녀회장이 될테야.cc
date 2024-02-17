#include <iostream>
#include <algorithm>
using namespace std;

int t, k, n;
int dp[1000001][15];
int main()
{
	cin >> t;

	while (t--)
	{
		cin >> k;
		cin >> n;

		for (int i = 0; i < k + 1; i++)
		{
			for (int j = 1; j < n + 1; j++)
			{
				if (i == 0)	dp[0][j] = j;
				else if (j == 1)	dp[i][1] = 1;
				else	dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
			}
		}

		cout << dp[k][n] << endl;
	}

	return 0;
}