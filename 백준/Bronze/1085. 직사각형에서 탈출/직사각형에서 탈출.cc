#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	// 1085

	int x{ 0 }, y{ 0 }, w{ 0 }, h{ 0 };
	cin >> x >> y >> w >> h;

	cout << min({ x, w - x, y, h - y }) << "\n";
	
	return 0;
}