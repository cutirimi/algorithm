#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int n, num;
string s;
deque<int>q;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n;

	while (n--)
	{
		cin >> s;

		if (s == "push_front")
		{
			cin >> num;
			q.push_front(num);
		}
		else if (s == "push_back")
		{
			cin >> num;
			q.push_back(num);
		}
		else if (s == "pop_front")
		{
			if (q.empty())	cout << -1 << endl;
			else
			{
				cout << q.front() << endl;
				q.pop_front();
			}
		}
		else if (s == "pop_back")
		{
			if (q.empty())	cout << -1 << endl;
			else
			{
				cout << q.back() << endl;
				q.pop_back();
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