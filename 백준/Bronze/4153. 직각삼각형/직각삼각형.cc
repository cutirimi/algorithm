#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

int n[3];
int main()
{
	while (1)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> n[i];
		}

		sort(n, n + 3);

		if (n[2] * n[2] == n[0] * n[0] + n[1] * n[1] && n[2] != 0) cout << "right" << '\n';
		else if (n[2] == 0 && n[1] == 0 && n[0] == 0) break;
		else cout << "wrong" << '\n';
	}

	return 0;
}