#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n, num = 666;
string s;
int main()
{
    cin >> n;

    while (n > 0)
    {
        s = to_string(num);
        if (s.find("666") != -1)        n--;
        num++;
    }

    cout << s;

	return 0;
}