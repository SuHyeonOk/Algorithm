#pragma once
#include <iostream>
#include <array>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T{ 0 }, N{ 0 };
    cin >> T;

    while (T--)
    {
        cin >> N;

        array<long long, 101> arr;

        arr[1] = arr[2] = arr[3] = 1;
        arr[4] = arr[5] = 2;

        for (int i = 6; i <= N; i++)
        {
            arr[i] = arr[i - 1] + arr[i - 5];
        }

        cout << arr[N] << '\n';
    }

    return 0;
}