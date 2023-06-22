#include<iostream>
#include<queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int iTestCase{ 0 };
    cin >> iTestCase;

    while (iTestCase--)
    {
        int N{ 0 }, M{ 0 };
        cin >> N >> M;

        queue<pair<int, int>> q;
        priority_queue<int> pq;

        for (int i = 0; i < N; i++)
        {
            int i﻿Important;
            cin >> i﻿Important;

            q.push({ i, i﻿Important });
            pq.push(i﻿Important);
        }

        int iCount{ 0 };
        while (false == q.empty())
        {
            int iIndex = q.front().first;
            int iPriority = q.front().second;
            q.pop();


            if (pq.top() == iPriority)
            {
                pq.pop();
                iCount++;

                if (M == iIndex)
                {
                    cout << iCount << '\n';
                    break;
                }
            }
            else
            {
                q.push({ iIndex, iPriority });
            }
        }
    }

    return 0;
}