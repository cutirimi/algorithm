#include <iostream>
using namespace std;

int x, n, k;

int factorial(int x)
{
	if (x == 1 || x == 0) return 1;
	else return factorial(x - 1) * x;
}
int main()
{
	cin >> n >> k;

	cout << factorial(n) / (factorial(k) * factorial(n - k));

	return 0;
}