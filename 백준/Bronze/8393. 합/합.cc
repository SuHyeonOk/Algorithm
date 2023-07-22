#pragma once // 헤더의 중복 선언을 방지
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include <string>
#define endl '\n'

int main()
{
    int n;
    cin >> n;
    int result = 0;

    for (int i = 0; i <= n; i++)
    {
        result += i;
    }

    cout << result << endl;
}