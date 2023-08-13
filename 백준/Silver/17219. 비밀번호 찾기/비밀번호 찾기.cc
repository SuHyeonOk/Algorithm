#include <iostream>
#include<map>
using namespace std;
#define MAX 50

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N{ 0 }, M{ 0 };
    cin >> N >> M;

    string site{ "" }, pssword{ "" };
    map<string, string> note;
    for (int i = 0; i < N; i++)
    {
        cin >> site >> pssword;
        note.emplace(site, pssword);
    }
    
    for (int i = 0; i < M; i++)
    {
        cin >> site;
        cout << note.find(site)->second << '\n';
    }

    return 0;
}