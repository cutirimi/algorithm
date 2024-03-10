#include <iostream>
#include <algorithm>
using namespace std;

int a, b, maxi = 0;
int arr[9][9];
int main()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (arr[i][j] >= maxi)
            {
                maxi = arr[i][j];
                a = i;
                b = j;
            }
        }
    }

    cout << maxi << endl;
    cout << a + 1 << " " << b + 1;

    return 0;
}