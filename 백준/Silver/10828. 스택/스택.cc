#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int n, num;
string word;
stack<int>s;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin >> n;

	while (n--)
	{
		cin >> word;

		if (word == "push")
		{
			cin >> num;
			s.push(num);
		}
		else if (word == "pop")
		{
			if (s.empty())	cout << -1 << endl;
			else
			{
				cout << s.top() << endl;
				s.pop();
			}
		}
		else if (word == "size")
		{
			cout << s.size() << endl;
		}
		else if (word == "empty")
		{
			cout << s.empty() << endl;
		}
		else if (word == "top")
		{
			if (s.empty())	cout << -1 << endl;
			else	cout << s.top() << endl;
		}
	}

	return 0;
}