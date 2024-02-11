#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int n, m;
double sum, avg;
int main()
{
	cin >> n;
	int* score = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> score[i];
	}

	sort(score, score + n);
	m = score[n-1];

	for (int i = 0; i < n; i++)
	{
		sum += (double)score[i] / m * 100;
	}

	avg = sum / n;

	cout << avg;

	return 0;
}