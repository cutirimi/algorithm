#include <iostream>
using namespace std;


int main() {

	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int a = n - i; a < n; a++)
		{
			cout << " ";
		}
		for (int j = n; j > i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
}