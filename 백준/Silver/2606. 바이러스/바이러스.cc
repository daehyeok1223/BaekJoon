#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[101];  // 컴퓨터는 최대 100대
bool visited[101];  // 방문한 컴퓨터를 표시할 배열
int c;  // 컴퓨터의 수
int k;  // 연결된 쌍의 수
int ans = 0;  // 감염된 컴퓨터 수

// DFS 함수: 현재 컴퓨터 x를 방문하고, 연결된 모든 컴퓨터를 탐색
void dfs(int x) {
    visited[x] = true;
    ans++;  // 감염된 컴퓨터 수를 증가

    for (int i = 0; i < graph[x].size(); i++) {
        int next = graph[x][i];
        if (!visited[next]) {  // 아직 방문하지 않은 컴퓨터라면
            dfs(next);  // 다음 컴퓨터를 탐색
        }
    }
}

int main() {
    cin >> c >> k;  // 컴퓨터의 수와 연결된 쌍의 수 입력

    // 연결된 쌍을 입력받고, 그래프에 저장
    for (int i = 0; i < k; i++) {
        int first, second;
        cin >> first >> second;
        graph[first].push_back(second);
        graph[second].push_back(first);  // 양방향 연결이므로 양쪽에 추가
    }

    // 1번 컴퓨터부터 DFS 탐색 시작
    dfs(1);

    // 1번 컴퓨터 자신은 감염된 컴퓨터 수에서 제외해야 하므로 -1
    cout << ans - 1 << endl;

    return 0;
}
