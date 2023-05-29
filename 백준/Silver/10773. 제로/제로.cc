#include <iostream>
#include<stack>

using namespace std;

int main() {


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int K{ 0 }, temp{ 0 }; // 1 <= K <= 100,000
    stack<int> sta; // 0 : pop / 나머지 : push
    
    cin >> K;
    for (int i = 0; i < K; i++)
    {
        cin >> temp;
        if (0 == temp)
        {
            sta.pop();
        }
        else
        {
            sta.push(temp);
        }
    }

    if (sta.empty()) 
    {
        cout << "0" << "\n"; 
        return 0;
    }

    temp = 0;
    while (!sta.empty())
    {
        temp += sta.top();
        sta.pop();
    }

    cout << temp << "\n";

    return 0;
}