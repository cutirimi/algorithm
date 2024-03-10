#include <iostream>
#include <algorithm>
using namespace std;

int a, b, c;
int minute;
int main()
{
    cin >> a >> b;
    cin >> c;

    minute = (a * 60) + b + c;

    if (minute >= 1440)     minute %= 1440;

    cout << minute / 60 << " " << minute % 60;

    return 0;
}