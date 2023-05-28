#include <iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
	int T{ 0 };
	string str{ "" };

	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> str;

		stack<char> sta;
		for (size_t i = 0; i < str.length(); i++)
		{
			if (str[i] == '(') 
				sta.push('(');

			if (str[i] == ')')
			{
				if (!sta.empty() && sta.top() == '(')
					sta.pop();
				else
				{
					cout << "NO" << "\n";
					break;
				}
			}

			if (sta.empty() && i == str.length() - 1) 
				cout << "YES" << '\n';
			else if (!sta.empty() && i == str.length() - 1) 
				cout << "NO" << '\n';
		}
	}

	return 0;
}