#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
vector<int> v[102]; // 친구 관계 저장

// BFS로 최단 거리 계산
int bfs(int start, int target) {
    queue<pair<int, int>> q;
    bool visit[102] = {false}; // 방문 여부
    q.push({start, 0});
    visit[start] = true;

    while (!q.empty()) {
        int x = q.front().first;
        int dist = q.front().second;
        q.pop();

        if (x == target) return dist; // 목표에 도달하면 거리 반환

        for (int i = 0; i < v[x].size(); i++) {
            if (!visit[v[x][i]]) {
                q.push({v[x][i], dist + 1});
                visit[v[x][i]] = true;
            }
        }
    }
    return 0;
}

int main() {
    cin >> n >> m;
    
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int minBacon = 98765432; // 가장 작은 케빈 베이컨 수
    int answer = 0; // 정답(번호)

    for (int i = 1; i <= n; i++) { // 각 사람을 시작점으로 탐색
        int totalDist = 0;
        for (int j = 1; j <= n; j++) {
            if (i != j) totalDist += bfs(i, j);
        }

        if (totalDist < minBacon) { // 최소값 갱신
            minBacon = totalDist;
            answer = i;
        }
    }

    cout << answer << '\n';
    return 0;
}
