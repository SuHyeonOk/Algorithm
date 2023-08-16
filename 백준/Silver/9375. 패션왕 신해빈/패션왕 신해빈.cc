#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int TestCase{ 0 }, n{ 0 };
    cin >> TestCase;

    string str1{ "" }, str2{ "" };

    while (TestCase--)
    {
        cin >> n;
        
        map<string, int>m;
        for (int i = 0; i < n; i++)
        {
            cin >> str1 >> str2;

            if (m.find(str2) != m.end())
            {
                // 기존에 있었던 key값
                m[str2]++;
            }
            else
            {
                // 처음들어오는 key값
                m.insert({ str2, 1 });
            }
        }
        
        int ans{ 1 };
        for (auto it : m)
        {
            ans *= (it.second + 1);
        }
        ans -= 1;
        cout << ans << '\n';
    }

    return 0;
}