#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() 
{
    // 1259
    // 1~99999 마지막 0 팬린드롬수면 yes 아니면 no

    string str{ "" };
    while ("0" != str)
    {
        cin >> str;

        if (str == "0") return 0;

        string  tempStr = str;
        reverse(tempStr.begin(), tempStr.end());

        if (str == tempStr) cout << "yes" << '\n';
        else cout << "no" << '\n';
    }


    return 0;
}