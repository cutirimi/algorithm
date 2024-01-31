#include <iostream>
#include <algorithm>
using namespace std;

int* arr = new int[10];
int v[1001];
int cnt = 0;
int main()
{
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		v[arr[i] % 42]++;
	}

	for (int i = 0; i < 1001; i++)
	{
		if (v[i] >= 1) cnt++;
	}

	cout << cnt;

	return 0;
}