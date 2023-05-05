#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	// 2231

	int N{ 0 }, sum{ 0 }, part{ 0 };
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		sum = i;
		part = i;

		while (part)
		{
			sum += part % 10;
			part /= 10;
		}

		if (N == sum) 
		{
			cout << i << endl;
			return 0;
		}
	}
	
	cout << "0" << endl;

	return 0;
}