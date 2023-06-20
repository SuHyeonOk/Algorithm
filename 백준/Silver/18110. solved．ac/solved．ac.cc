#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n{ 0 }, iTrimmedMean{ 0 };
    cin >> n;

    // 절사평균할 값 구하기
    float fTemp = n * 0.15;
    fTemp = round(fTemp);
    iTrimmedMean = static_cast<int>(fTemp);

    if (0 == n) n = 1;

    // 평균 값 받기
    vector<int> vec;
    vec.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    float fResult{ 0 };
    n -= iTrimmedMean;
    for (int i = iTrimmedMean; i < n; i++)
    {
        fResult += vec[i];
    }

    cout << round(fResult / (n - iTrimmedMean)) << '\n';

    return 0;
}