#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	double a = 0;
	double b = 0;
	cin >> a >> b;
	cout.precision(1);
	cout << a / b << endl;

	return 0;
}