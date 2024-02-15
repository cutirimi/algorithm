#include <iostream>
#include <algorithm>
using namespace std;

int a, b;
int Gcd(int x, int y)		//최대 공약수
{
	while (y != 0)
	{
		int temp = x % y;
		x = y;
		y = temp;
	}

	return x;
}
int Lcm(int x, int y)		//최소 공배수
{
	return x * y / Gcd(x, y);
}
int main()
{
	cin >> a >> b;

	cout << Gcd(a, b) << endl;
	cout << Lcm(a, b);

	return 0;
}