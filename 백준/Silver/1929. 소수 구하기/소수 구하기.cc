#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int m, n;
bool erathos(int x)
{
    if (x < 2) return 0;

    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0) return false;
    }

    return true;
}
int main()
{
    cin >> m >> n;

    while (m != n+1)
    {
        if (erathos(m))  cout << m << '\n';
        m++;
    }

    return 0;
}