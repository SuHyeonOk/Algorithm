#include<iostream>
#include<deque>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n{ 0 };
    string str{ "" };
    deque<int> deq;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "push_front")
        {
            int x{ 0 };
            cin >> x;
            deq.push_front(x);
        }
        else if (str == "push_back")
        {
            int x{ 0 };
            cin >> x;
            deq.push_back(x);
        }
        else if (str == "pop_front")
        {
            if (deq.empty())
            {
                cout << -1 << '\n';
                continue;
            }

            cout << deq.front() << '\n';
            deq.pop_front();
        }
        else if (str == "pop_back")
        {
            if (deq.empty())
            {
                cout << -1 << '\n';
                continue;
            }

            cout << deq.back() << '\n';
            deq.pop_back();
        }
        else if (str == "size")
        {
            cout << deq.size() << '\n';
        }
        else if (str == "empty")
        {
            if (deq.empty())
            {
                cout << 1 << '\n';
                continue;
            }

            cout << 0 << '\n';
        }
        else if (str == "front")
        {
            if (deq.empty())
            {
                cout << -1 << '\n';
                continue;
            }

            cout << deq.front() << '\n';
        }
        else if (str == "back")
        {
            if (deq.empty())
            {
                cout << -1 << '\n';
                continue;
            }

            cout << deq.back() << '\n';
        }
    }

    return 0;
}