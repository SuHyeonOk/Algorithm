#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // 미리 값을 다 계산해 두기
    int t; cin >> t;
    int arr[15][15];
    for(int i = 1; i<15; i++) {
        arr[0][i] = i;
        arr[i][1] = 1;    
    }
    for(int i = 1; i<15; i++) {
        for (int j = 2; j<15; j++) {
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }
    while (t--) {
        int k, n; cin >> k >> n;
        cout << arr[k][n] << '\n';
    }
}