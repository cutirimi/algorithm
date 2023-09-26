#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int max;		//세 숫자 중 가장 큰 값

	cin >> a >> b >> c;

	if (a == b && b == c && a == c)		//같은 눈 3개
	{
		cout << 10000 + a * 1000;
	}
	else if ((a != b) && (b != c) && (c != a))		//모두 다 다른 눈일 때
	{
		max = a > b ? ((a > c) ? a : c) : ((b > c) ? b : ((a > c) ? a : c));
		cout << max * 100;
	}
	else		//같은 눈 2개
	{
		if (a == b && (c != a || c != b))
		{
			cout << 1000 + a * 100;
		}
		else if (b == c && (a != b || a != c))
		{
			cout << 1000 + b * 100;
		}
		else if (a == c && (b != c || b != a))
		{
			cout << 1000 + c * 100;
		}
	}
}