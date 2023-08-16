#include <iostream>
#include <vector>
#include <array>
using namespace std;

int N{ 0 }, M{ 0 }, cnt{ 0 };

vector<vector<char>> vec;
vector<vector<bool>> visited;

array<int, 4> dx{ 0, 0, -1, 1 }, dy{ -1, 1, 0, 0 };

void DFS(const int _x, const int _y)
{
    for (int i = 0; i < 4; i++)
    {
        int x{ _x + dx[i] }, y{ _y + dy[i] };

        if (x < 0 || x >= N || y < 0 || y >= M || vec[x][y] == 'X')
        {
            continue;
        }

        if (visited[x][y] == false && vec[x][y]  == 'P')
        {
            cnt++;
            visited[x][y]  = true;
            DFS(x, y);
        }

        if (visited[x][y]  == false && vec[x][y]  == 'O')
        {
            visited[x][y]  = true;
            DFS(x, y);
        }
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M;

    vec.resize(N, vector<char>(M));
    visited.resize(N, vector<bool>(M));

    int posX{ 0 }, posY{ 0 };
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> vec[i][j];

            if ('I' == vec[i][j])
            {
                posX = i;
                posY = j;
                visited[i][j] = true;
            }
        }
    }

    DFS(posX, posY);
    
    if (0 == cnt)
    {
        cout << "TT" << '\n';
        return 0;
    }

    cout << cnt << '\n';

    return 0;
}