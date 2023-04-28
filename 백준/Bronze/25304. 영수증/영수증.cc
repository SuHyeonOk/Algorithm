#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int iAllCoin{ 0 };
	cin >> iAllCoin;

	int iAllCount{ 0 };
	cin >> iAllCount;

	vector<pair<int, int>> vecList;
	for (int i = 0; i < iAllCount; i++)
	{
		int iCoin{ 0 };
		int iCount{ 0 };
		cin >> iCoin;
		cin >> iCount;
		pair<int, int> pair = { iCoin, iCount };
		vecList.push_back(pair);
	}
	
	int iSumCoin{ 0 };
	for (size_t i = 0; i < vecList.size(); i++)
	{
		int iCoin = vecList[i].first;
		int iCount = vecList[i].second;
		int iReault = iCoin * iCount;
		iSumCoin += iReault;
	}

	if (iSumCoin == iAllCoin)
		cout << "Yes" << '\n';
	else
		cout << "No" << '\n';

	return 0;
}