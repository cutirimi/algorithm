#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int n;
string s;
vector<string> v;
vector<int> temp;
int main() {
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
        temp.push_back(s.length());
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    sort(temp.begin(), temp.end());
    temp.erase(unique(temp.begin(), temp.end()), temp.end());

    for (int i = 0; i < temp.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (temp[i] == v[j].length())   cout << v[j] << endl;
        }
    }

    return 0;
}