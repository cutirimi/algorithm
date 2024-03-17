#include <iostream>
#include <algorithm>
using namespace std;

int n, answer = 0;
int main()
{
    cin >> n;

    for (int i = 5; i <= n; i *= 5)
        answer += n / i;
    cout << answer;

	return 0;
}
