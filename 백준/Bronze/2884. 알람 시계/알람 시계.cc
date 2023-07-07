#pragma once // 헤더의 중복 선언을 방지
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include <string>
#define endl '\n'

int main()
{
    int H, M;
    cin >> H >> M;

    if (M < 45) 
    {
        M += 15;
        if (--H < 0)
            H = 23;
    }
    else
        M -= 45;

    cout << H <<" " << M << endl;
}