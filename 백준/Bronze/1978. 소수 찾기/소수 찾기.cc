#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int n;
int cnt = 0;
bool isPrime(int x) {
	if (x < 2) return false;

	for (int i = 2; i * i <= x; i++)
	{
		if (x % i == 0) return false;
	}

	return true;
}
int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;

		if (isPrime(a)) cnt++;
	}

	cout << cnt;

	return 0;
}