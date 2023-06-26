#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

unsigned int ans;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N{ 0 }, M{ 0 };
	cin >> N;

	vector<int>vec;
	vec.resize(N);

	for (int i = 0; i < N; i++)
	{
		cin >> vec[i];
	}
	cin >> M;

	sort(vec.begin(), vec.end());

	int iLeft{ 1 }, iRight{ vec[N - 1] }, iReault{ 0 };

	while (iLeft <= iRight)
	{
		int iSum{ 0 };
		int iPivot = (iLeft + iRight) / 2;

		for (int i = 0; i < N; i++)
		{
			iSum += min(vec[i], iPivot);
		}

		if (iSum <= M)
		{
			iLeft = iPivot + 1;
			iReault = iPivot;
		}
		else
		{
			iRight = iPivot - 1;
		}
	}

	cout << iReault << '\n';

    return 0;
}