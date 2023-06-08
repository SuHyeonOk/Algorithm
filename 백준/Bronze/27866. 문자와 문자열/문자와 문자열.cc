#include <iostream>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string S{ "" };
    int i{ 0 };
    cin >> S >> i;

    cout << S[i - 1] << "\n";

    return 0;
}