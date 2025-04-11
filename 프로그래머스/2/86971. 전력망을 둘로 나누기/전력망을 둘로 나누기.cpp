#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;

vector<int> graph[101];
bool visited[101];

int dfs(int node) {
    visited[node] = true;
    int count = 1;

    for (int i = 0; i < graph[node].size(); i++) {
        int next = graph[node][i];
        if (!visited[next]) {
            count += dfs(next);
        }
    }
    return count;
}

int solution(int n, vector<vector<int>> wires) {
    int answer = n; // 최댓값으로 초기화

    for (int i = 0; i < wires.size(); i++) {
        // 그래프 초기화
        for (int j = 1; j <= n; j++) {
            graph[j].clear();
        }

        // 간선 하나 제외하고 연결
        for (int j = 0; j < wires.size(); j++) {
            if (i == j) continue;
            int a = wires[j][0];
            int b = wires[j][1];
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        // 방문 여부 초기화
        for (int j = 1; j <= n; j++) {
            visited[j] = false;
        }

        // 하나의 컴포넌트 크기 계산
        int part = dfs(1);
        int diff = abs((n - part) - part);
        if (diff < answer) {
            answer = diff;
        }
    }

    return answer;
}
