#include <iostream>
#include <algorithm>
using namespace std;

int a, b, v, day;
int main()
{
	cin >> a >> b >> v;

	if ((v - a) % (a - b) == 0)		day = (v - a) / (a - b);
	else	day = (v - a) / (a - b) + 1;

	cout << day + 1;

	return 0;
}