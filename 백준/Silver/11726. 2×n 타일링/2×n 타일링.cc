#pragma once
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n{ 0 };
    cin >> n;

    vector<int> DP(n);
    DP[0] = 1;
    DP[1] = 2;

    for (int i = 2; i < n; i++)
    {
        DP[i] = (DP[i - 1] + DP[i - 2]) % 10007;
    }

    cout << DP[n - 1];

    return 0;
}