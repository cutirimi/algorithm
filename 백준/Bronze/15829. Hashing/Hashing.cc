#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

long long n, sum = 0, r = 1;
string s;
int main()
{
	cin >> n;
	cin >> s;

	/*for (int i = 0; i < n; i++)
	{
		sum += (s[i] - 'a' + 1) * pow(31, i);		//pow를 사용하게되면 값이 커져버림
	}*/

	for (int i = 0; i < n; i++)
	{
		sum = (sum + (s[i] - 'a' + 1) * r) % 1234567891;
		r = (r * 31) % 1234567891;
	}

	cout << sum;

	return 0;
}