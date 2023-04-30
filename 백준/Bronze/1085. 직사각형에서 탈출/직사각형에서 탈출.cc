#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// 1085

	int x{ 0 }, y{ 0 }, w{ 0 }, h{ 0 }, iTemp{ 0 };
	int Min{ 1000 };
	cin >> x >> y >> w >> h;

	iTemp = x - 0;
	if (Min > iTemp) Min = iTemp;
	iTemp = y - 0;
	if (Min > iTemp) Min = iTemp;
	iTemp = w - x;
	if (Min > iTemp) Min = iTemp;
	iTemp = h - y;
	if (Min > iTemp) Min = iTemp;

	cout << Min << '\n';

	return 0;
}