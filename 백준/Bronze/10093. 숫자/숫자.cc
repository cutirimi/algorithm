#include <iostream>
#include <algorithm>
using namespace std;

unsigned long long a, b;
int main()
{
	cin >> a >> b;

	if (a > b) {
		swap(a, b);
	}
	
	if (a == b) cout << 0 << endl;
	else
	{
		cout << b - a - 1 << endl;

		for (unsigned long long i = a + 1; i < b; i++)
		{
			cout << i << " ";
		}
	}

	return 0;
}