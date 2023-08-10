#include <iostream>

using namespace std;
#define MAX 10001

int main() 
{
    int N{ 0 };
    int DP[MAX]{ 0 };
    int arr[MAX]{ 0 };

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }

    DP[1] = arr[1];
    DP[2] = arr[1] + arr[2];
    DP[3] = max(arr[1], arr[2]) + arr[3];
    
    for (int i = 4; i <= N; i++)
    {
        DP[i] = max(max(DP[i - 4] + arr[i - 1], DP[i - 3] + arr[i - 1]), DP[i - 2]) + arr[i];
    }

    cout << max(DP[N-1], DP[N]) << '\n';
}