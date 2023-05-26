#include <iostream>
#include<queue>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n{ 0 }, temp{ 0 };
    cin >> n;
    
    queue<int> que;
    for (int i = 1; i <= n; i++)
    {
        que.push(i);
    }

    bool b{ false };
    while (que.size() != 1)
    {
        if (b == false)
        {
            que.pop();
            b = true;
        }
        else
        {
            temp = que.front();
            que.pop();
            que.push(temp);
            b = false;
        }
    }

    cout << que.front() << '\n';

    return 0;
}