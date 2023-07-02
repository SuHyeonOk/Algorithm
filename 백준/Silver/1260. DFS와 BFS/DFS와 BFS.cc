#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

#define MAX 1001

int N{ 0 }, M{ 0 }, V{ 0 };
int arr[MAX][MAX]{ 0 };  // 인접한 행렬
bool visited[MAX]{ false };      // 방문 기록

// 깊이 우선 탐색
void DFS(int V)
{
    visited[V] = true;
    cout << V << " ";

    for (int i = 0; i <= N; i++)
    {
        if (arr[V][i] == 1 && visited[i] == false)
        {
            DFS(i); // 재귀함수 스택에 i를 넣는셈
        }
        if (i == N)
        {
            return; // 끝
        }
    }
}

// 너비 우선 탐색
void BFS(int V)
{
    queue<int> q;
    q.push(V);

    while (!q.empty())
    {
        // 가장 앞에 있는 데이터를 출력하고 빼낸다.
        int next = q.front();
        visited[next] = true;
        cout << next << " ";
        q.pop();

        // 방문했던 노드와 가장 가까운 노드를 큐에 넣는다.
        for (int i = 0; i <= N; i++)
        {
            if (arr[next][i] == 1 && visited[i] == false)
            {
                q.push(i);
                visited[i] = true; // i점은 미리 방문 기록 - 안 하면 중복으로 방문할 수도 있다.
            }
        }
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    cin >> N >> M >> V;

    int u{ 0 }, v{ 0 };
    for (int i = 0; i < M; i++)
    {
        cin >> u >> v;
        arr[u][v] = 1;
        arr[v][u] = 1; // 자리 바뀐 이유 : 무 방향 이기 때문에
                             // 입력 즉시 인접 행렬에 넣어준다. 다 돌면 인접 행렬 완성
    }

    DFS(V);

    cout << '\n';
    memset(visited, 0, sizeof(visited)); // 방문 기록 초기화

    BFS(V);

    return 0;
}