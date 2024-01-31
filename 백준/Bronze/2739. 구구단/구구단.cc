#include <iostream>
using namespace std;

int main()
{
	int num;		//입력할 단

	cin >> num;

	for (int i = 0; i < 9; i++)
	{
		cout << num << " * " << i + 1 << " = " << num * (i + 1) << endl;
	}
}