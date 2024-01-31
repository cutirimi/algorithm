#include <iostream>
#include <queue>
using namespace std;

int N, M, weight, sum = 0;
int cnt = 1;
int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> weight;

		if (M < sum + weight)
		{
			sum = weight;
			cnt++;
		}
		else
		{
			sum += weight;
		}
	}

	if (N == 0) cnt = 0;
	
	cout << cnt;

	return 0;
}