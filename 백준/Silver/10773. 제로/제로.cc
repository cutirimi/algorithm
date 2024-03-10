#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int k, n, sum = 0;
stack<int>s;
int main()
{
    cin >> k;

    while (k--)
    {
        cin >> n;

        if (n == 0)     s.pop();
        else    s.push(n);
    }

    while (!s.empty())
    {
        sum += s.top();
        s.pop();
    }

    cout << sum;

    return 0;
}