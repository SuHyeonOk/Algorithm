#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool   SortWords(const string& str1, const string& str2)
{
    int index{ 0 };
    while (str1[index] == str2[index])
    {
        ++index;
    }

    return str1[index] < str2[index];
}

bool   SortLength(const string& str1, const string& str2)
{
    return str1.length() < str2.length();
}

int main() 
{
    // 1181 : 단어 정렬

    int n{ 0 };
    cin >> n;

    vector<string> vec;
    for (int i = 0; i < n; i++)
    {
        string str{ "" };
        cin >> str;

        bool found = find(vec.begin(), vec.end(), str) != vec.end();
        if (!found)
        {
            vec.push_back(str);
        }
    }

    sort(vec.begin(), vec.end(), SortWords);
    stable_sort(vec.begin(), vec.end(), SortLength);

    size_t size = vec.size();
    for (size_t i = 0; i < size; i++)
    {
        cout << vec[i] << '\n';
    }

    return 0;
}