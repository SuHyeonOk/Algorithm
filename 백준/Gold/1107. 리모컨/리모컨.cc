#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<bool> vec(10, false);

bool check(int now) 
{
    string s = to_string(now);
    for (int i = 0; i < s.length(); i++) 
    {
        if (vec[s[i] - 48]) 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    int N{ 0 }, M{ 0 }, input{ 0 };
    cin >> N >> M;

    for (int i = 0; i < M; i++) 
    {
        cin >> input;
        vec[input] = true;
    }

    int minimum = abs(N - 100);
    for (int i = 0; i <= 1000000; i++) 
    {
        if (check(i)) 
        {
            int tmp = abs(N - i) + to_string(i).length();
            minimum = min(minimum, tmp);
        }
    }

    cout << minimum << endl;

    return 0;
}