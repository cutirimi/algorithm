#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, num, compliment;
int score[100001];
vector<int>person[100001];
void dfs(int x)
{
	for (int i = 0; i < person[x].size(); i++)
	{
		score[person[x][i]] += score[x];
		dfs(person[x][i]);
	}
}
int main()
{
	score[0] = 0;
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		int a;
		cin >> a;

		if (i == 1)	continue;		//사장은 칭찬 점수x
		person[a].push_back(i);
	}
	
	for (int i = 0; i < m; i++)
	{
		cin >> num >> compliment;
		score[num] += compliment;
	}
	dfs(1);
	
	for (int i = 1; i <= n; i++)
	{
		cout << score[i] << " ";
	}

	return 0;
}