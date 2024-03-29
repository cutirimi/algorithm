//1158 : 요세푸스
#include <queue>
#include <iostream>
using namespace std;

int main() {
    int N, K;
    queue<int>q;

    cin >> N >> K;

    // 큐 초기화
    for (int i = 1; i <= N; i++)
    {
        q.push(i);
    }

    cout << "<";
    while (!q.empty())
    {
        for (int i = 0; i < K - 1; i++)
        {
            q.push(q.front());
            q.pop();        //더이상 출력할 필요가 없기때문에 pop
        }
        cout << q.front();
        q.pop();

        if (!q.empty())
        {
            cout << ", ";
        }
    }
    cout << ">";   

    return 0;
}