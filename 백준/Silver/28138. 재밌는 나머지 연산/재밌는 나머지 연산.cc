#include <iostream>
#include <cmath>
using namespace std;

long long n, r;
long long i = 1;
long long sum = 0;
int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	cin >> n >> r;

    while (i <= sqrt(n-r))
    {
        if ((n - r) % i == 0)
        {
            if (i > r) sum += i;
            if (i * i != (n - r) && (n - r) / i > r)  sum += (n - r) / i;
        }

        i++;
    }

	cout << sum;

	return 0;
}