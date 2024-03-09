#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n, num;
string s;
queue<int>q;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> n;

	while (n--)
	{
		cin >> s;

		if (s == "push")
		{
			cin >> num;
			q.push(num);
		}
		else if (s == "pop")
		{
			if (q.empty())	cout << -1 << endl;
			else
			{
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (s == "size")
		{
			cout << q.size() << endl;
		}
		else if (s == "empty")
		{
			cout << q.empty() << endl;
		}
		else if (s == "front")
		{
			if (q.empty())	cout << -1 << endl;
			else	cout << q.front() << endl;
		}
		else if (s == "back")
		{
			if (q.empty())	cout << -1 << endl;
			else	cout << q.back() << endl;
		}
	}

	return 0;
}