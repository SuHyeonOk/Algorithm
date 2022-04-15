#pragma once // 헤더의 중복 선언을 방지
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include <string>
#include <cstring>
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    // ◆ 11718번 그대로 출력하기

    string input;

    while (true)
    {
        getline(cin, input);
        if (input == "")
            break;
        cout << input << endl;
    }
    return 0;
}