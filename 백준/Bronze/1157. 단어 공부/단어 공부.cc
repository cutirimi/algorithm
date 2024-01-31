#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string s;
vector<int>v(26, 0);
int big = 0, index = 0;
int main()
{
	cin >> s;

	// 문자열 대문자로 변환
	for (int i = 0; i < s.size(); i++)
	{
		s[i] = toupper(s[i]);
	}

	// 단어 나온 횟수 저장
	for (int i = 0; i < s.size(); i++)
	{
		v[s[i] - 'A']++;
	}

	// 가장 많이 나온 단어의 인덱스 저장
	for (int i = 0; i < 26; i++)
	{
		if (v[i] >= big)
		{
			big = v[i];
			index = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (v[index] == v[i] && i != index)
		{
			cout << "?";
			return 0;
		}
	}
	
	cout << (char)(index + 'A');

	return 0;
}