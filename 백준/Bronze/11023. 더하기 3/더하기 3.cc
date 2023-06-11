#include <iostream>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n{ 0 }, iAdd{ 0 };
    
    while (cin >> n)
    {
        iAdd += n;
    }

    cout << iAdd << "\n";

    return 0;
}