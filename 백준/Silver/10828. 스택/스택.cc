#include <iostream>
#include<stack>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> NumStack;
    string str{ "" };
    int N{ 0 }, X{ 0 };
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        cin >> str;

        if (str == "push")
        {
            cin >> X;
            NumStack.push(X);
        }
        else if (str == "pop")
        {
            if (NumStack.empty())
            {
                cout << "-1" << "\n";
            }
            else
            {
                cout << NumStack.top() << "\n";
                NumStack.pop();
            }
        }
        else if (str == "size")
        {
            cout << NumStack.size() << "\n";
        }
        else if (str == "empty")
        {
            if (NumStack.empty())
            {
                cout << "1" << "\n";
            }
            else
            {
                cout << "0" << "\n";
            }
        }
        else if (str == "top")
        {
            if (NumStack.empty())
            {
                cout << "-1" << "\n";
            }
            else
            {
                cout << NumStack.top() << "\n";
            }
        }
    }

    return 0;
}