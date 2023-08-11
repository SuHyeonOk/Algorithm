#include <iostream>
#include <algorithm>

using namespace std;
#define MAX 12

int main()
{
    int DP[MAX]{ 0 };

    DP[1] = 1;
    DP[2] = 2;
    DP[3] = 4;

    for (int i = 4; i < MAX; i++)
    {
        DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3];
    }

    int T{ 0 }, n{ 0 };
    cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        cin >> n;
        cout << DP[n] << '\n';
    }

    return 0;
}