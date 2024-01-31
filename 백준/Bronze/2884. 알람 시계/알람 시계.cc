#include <iostream>
using namespace std;

int main()
{
	int hour;		//시간
	int min;		//분

	cin >> hour >> min;

	if (min >= 45 && (hour <= 23 && hour > 0))
	{
		cout << hour << " " << min - 45;
	}
	else if ((min >= 0 && min < 45) && (hour <= 23 && hour > 0))
	{
		cout << hour - 1 << " " << 60 - (45 - min);
	}
	else if (hour == 0 && (min >= 0 && min < 45))
	{
		cout << 23 << " " << 60 - (45 - min);
	}
	else if (hour == 0 && min >= 45)
	{
		cout << 0 << " " << min - 45;
	}
}