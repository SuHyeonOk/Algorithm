#include <iostream>
#include<queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> que;
    string str{ "" };
    int n{ 0 };
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        if (str == "push")
        {
            int iInput{ 0 };
            cin >> iInput;
            que.push(iInput);
        }
        else if (str == "pop")
        {
            if (que.empty())
            {
                cout << -1 << '\n';
                continue;
            }

            cout << que.front() << '\n';
            que.pop();
        }
        else if (str == "size")
        {
            cout << que.size() << '\n';
        }
        else if (str == "empty")
        {
            if (que.empty())
            {
                cout << 1 << '\n';
                continue;
            }

            cout << 0 << '\n';
        }
        else if (str == "front")
        {
            if (que.empty())
            {
                cout << -1 << '\n';
                continue;
            }

            cout << que.front() << '\n';
        }
        else if (str == "back")
        {
            if (que.empty())
            {
                cout << -1 << '\n';
                continue;
            }

            cout << que.back() << '\n';
        }
    }

    return 0;
}