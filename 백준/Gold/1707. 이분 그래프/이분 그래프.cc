#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define RED 2
#define BLUE 3

vector<int> vec[20001];        //인접리스트
int visited[20001];     //방문기록
int V, E, T, u, v;
void dfs(int start)
{
    // 방문안한 점이면 RED
    if (visited[start] == 0)    visited[start] = RED;

    // 연결된 점들 방문
    for (int i = 0; i < vec[start].size(); i++)
    {
        int index = vec[start][i];

        if (visited[index] == 0)      //방문 안했으면
        {
            //색칠
            if (visited[start] == RED)  visited[index] = BLUE;
            /*else if (visited[start] == BLUE)    visited[idx] = RED;*/
            else     visited[index] = RED;

            dfs(index);
        }
    }
}
bool check()        // 이분그래프 판별
{
    // 색이 같으면 이분그래프 아님
    for (int i = 1; i <= V; i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            int index = vec[i][j];

            if (visited[i] == visited[index])   return false;
        }
    }

    return true;
}
int main()
{
    cin >> T;

    while (T--)
    {
        cin >> V >> E;

        for (int i = 0; i < E; i++)
        {
            cin >> u >> v;
            vec[u].push_back(v);
            vec[v].push_back(u);
        }

        for (int i = 1; i <= V; i++)
        {
            if (visited[i] == 0)    dfs(i);
        }

        cout << (check() ? "YES" : "NO") << endl;

        // 벡터와 배열 초기화
        for (int i = 0; i <= V; ++i)
        {
            visited[i] = 0;
            vec[i].clear();
        }
    }

    return 0;
}