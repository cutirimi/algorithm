#include <iostream>
#include <algorithm>
using namespace std;

int t, h, w, n;
int answer;
int main()
{
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;

		cout << ((n % h == 0) ? h * 100 + (n / h) : (n % h) * 100 + (n / h) + 1) << endl;
	}

	return 0;
}