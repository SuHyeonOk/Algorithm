#include <iostream>

using namespace std;

int main() 
{
    // 2869
    // 1 ≤ B < A ≤ V ≤ 1,000,000,000

    int a{ 0 }, b{ 0 }, v{ 0 }, day{ 0 };
    cin >> a >> b >> v;

    if ((v - a) % (a - b) == 0)
        day = (v - a) / (a - b);
    else
        day = (v - a) / (a - b) + 1;

    cout << day + 1;

    return 0;
}