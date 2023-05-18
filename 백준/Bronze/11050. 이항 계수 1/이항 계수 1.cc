#include <iostream>

using namespace std;

int main() 
{
    // 11050
    // 1 <= n <= 10, 0 <= k <= n

    int arr[3]{ 0 };
    cin >> arr[0] >> arr[1];
    arr[2] = arr[0] - arr[1];

    for (size_t i = 0; i < 3; i++)
    {
        int n = arr[i];
        arr[i] = 1;
        for (int j = n; j > 0; j--)
        {
            arr[i] *= j;
        }
    }

    cout << arr[0] / (arr[1] * arr[2]) << '\n';

    return 0;
}