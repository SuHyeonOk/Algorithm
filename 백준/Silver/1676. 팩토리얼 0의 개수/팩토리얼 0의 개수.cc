#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n{ 0 }, iCount{ 0 };
    cin >> n;

    for (int i = 5; i <= n; i *= 5) 
    {
        iCount += n / i;
    }
    cout << iCount;

    return 0;
}