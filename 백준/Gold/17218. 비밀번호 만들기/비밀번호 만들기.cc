#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 41

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string str1{ "" }, str2{ "" };
    int DP[MAX][MAX];
    pair<int, int> par[MAX][MAX];

    cin >> str1 >> str2;

    size_t length1{ str1.size() }, length2{ str2.size() };
    for (size_t i = 0; i < length1; i++)
    {
        for (size_t j = 0; j < length2; j++)
        {
            if (str1[i] == str2[j])
            {
                DP[i + 1][j + 1] = DP[i][j] + 1;
                par[i + 1][j + 1] = { i,j };
            }
            else
            {
                if (DP[i + 1][j] > DP[i][j + 1]) 
                {
                    DP[i + 1][j + 1] = DP[i + 1][j];
                    par[i + 1][j + 1] = { i + 1,j };
                }
                else 
                {
                    DP[i + 1][j + 1] = DP[i][j + 1];
                    par[i + 1][j + 1] = { i,j + 1 };
                }
            }
        }
    }

    string ans;
    while (length1 != 0 && length2 != 0)
    {
        if (str1[length1 - 1] == str2[length2 - 1])
        {
            ans += str1[length1 - 1];
        }

        pair<int, int> v = par[length1][length2];
        length1 = v.first;
        length2 = v.second;
    }

    reverse(ans.begin(), ans.end());
    cout << ans;

    return 0;
}