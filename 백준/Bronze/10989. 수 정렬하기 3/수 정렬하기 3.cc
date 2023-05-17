#include <iostream>

using namespace std;

int main() 
{
    // 10989
    // 1 <= n <= 10,000,000 / m~10,000
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n{ 0 }, count[10001] = { };
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int index{ 0 };
        cin >> index;
        count[index] += 1;
    }

    for (int i = 1; i <= 10000; i++)
    {
        if (0 == count[i]) continue;

        for (int j = 1; j <= count[i]; j++)
        {
            cout << i << "\n";
        }
    }

    return 0;
}