#include <iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
	string str{ "" };

	while (1)
	{
		getline(cin, str);
		if (str == ".") break;

		stack<char> sta;
		for (size_t i = 0; i < str.length() - 1; i++)
		{
			if (str[i] == '(') sta.push('(');
			if (str[i] == '[') sta.push('[');

			if(str[i] == ']')
			{
				if (!sta.empty() && sta.top() == '[')
					sta.pop();
				else
				{
					cout << "no" << "\n";	
					break;
				}
			}

			if (str[i] == ')')
			{
				if (!sta.empty() && sta.top() == '(')
					sta.pop();
				else
				{
					cout << "no" << "\n";	
					break;
				}
			}

			if (sta.empty() && i == str.length() - 2) cout << "yes" << '\n';
			else if (!sta.empty() && i == str.length() - 2) cout << "no" << '\n';
		}
	}

	return 0;
}