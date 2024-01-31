#include <iostream>
using namespace std;

int main()
{
	double a, b;

	cout << fixed;		//소수점 아래부터 유효숫자를 세겠다라는 명령어
	cout.precision(9);		//소수점과 상관 없이 전체 자리 숫자를 고정

	cin >> a >> b;
	cout << a / b;

	return 0;
}