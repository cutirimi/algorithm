#include <iostream>
using namespace std;


int main() {

	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{

		for (int j = n - 1 - i; j > 0; j--)
		{
			cout << " ";
		}
		for (int a = n - i; a <= n; a++)
		{
			cout << "*";
		}
		if (i >= 1)
		{
			for (int j = 0; j < i; j++)
			{
				cout << "*";
			}
		}
		
		cout << endl;
	}
}