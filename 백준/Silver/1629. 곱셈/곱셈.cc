#include <iostream>

using namespace std;

long long g_iA, g_iB, g_iC;

long long Pow(long long iB)
{
	if (iB == 0)
		return 1;
	else if (iB == 1)
		return g_iA % g_iC;

	long long iTemp = Pow(iB / 2) % g_iC;
	if (iB % 2 == 0)
		return (iTemp * iTemp) % g_iC;
	else
		return ( (iTemp * iTemp) % g_iC * g_iA ) % g_iC;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> g_iA >> g_iB >> g_iC;

	cout << Pow(g_iB);

	return 0;
}