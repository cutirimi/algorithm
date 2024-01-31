#include <iostream>
using namespace std;

int main()
{
	int T;		//테스트 케이스의 개수

	cin >> T;

	int* a = new int[T];
	int* b = new int[T];

	for (int i = 0; i < T; i++)
	{	
		cin >> a[i] >> b[i];
	}
	for (int i = 0; i < T; i++)
	{
		cout << a[i] + b[i] << endl;
	}
}