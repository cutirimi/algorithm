#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int score[10];
int sum = 0;
int total = 0;
int main()
{
	for (int i = 0; i < 10; i++)
	{
		cin >> score[i];
	}

	for (int i = 0; i < 10; i++)
	{
		sum += score[i];
		if (abs(100 - sum) < abs(100 - total)) total = sum;
		else if (abs(100 - sum) == abs(100 - total)) total = max(sum, total);
	}
	cout << total;

	return 0;
}