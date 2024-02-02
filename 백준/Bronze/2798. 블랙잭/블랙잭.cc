#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int n, m;
int bigger = 0;
int main()
{
	cin >> n >> m;
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int z = 0; z < n; z++)
			{
				if (i != j && j != z && i != z && (arr[i] + arr[j] + arr[z] <= m))
				{
					if (bigger < arr[i] + arr[j] + arr[z]) bigger = arr[i] + arr[j] + arr[z];
				}
			}
		}
	}

	cout << bigger;

	return 0;
}