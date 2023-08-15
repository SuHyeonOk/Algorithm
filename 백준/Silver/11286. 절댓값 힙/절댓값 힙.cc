#include <iostream>
#include <queue>
using namespace std;

struct cmp
{
    bool operator()(int a, int b)
    {
        if (abs(a) == abs(b))
        {
            // 절대값이 같은 경우 더 작은 값을 후순위로 저장한다.
            return a > b;
        }
        else
        {
            // 절대값이 더작은 값을 후순위로 저장한다.
            return abs(a) > abs(b);
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n{ 0 }, x{ 0 };
    cin >> n;

    priority_queue<int, vector<int>, cmp> pq;

    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (x == 0)
        {
            if (pq.empty() == true)
            {
                cout << "0" << '\n';
                continue;
            }

            cout << pq.top() << '\n';
            pq.pop();
            continue;
        }

        pq.push(x);
    }

    return 0;
}