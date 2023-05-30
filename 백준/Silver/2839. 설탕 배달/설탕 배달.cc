#include <iostream>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N{ 0 };
    cin >> N;

    int a, b{ 0 };
    a = N / 5;

    while (true)
    {
        if (a < 0)
        {
            cout << "-1";
            return 0;
        }
        if ((N - (5 * a)) % 3 == 0)
        {
            b = (N - (5 * a)) / 3;
            break;
        }
        a--;
    }

    cout << a + b;

    return 0;
}