#include<iostream>
#include<queue>
#include<cstring> // for memset
using namespace std;

int arr[101][101];
int visited[101][101];
int N;
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
queue<pair<int, int>> q;

void BFS(int x, int y, int h) {
    q.push(make_pair(x, y));
    visited[x][y] = 1;

    while (!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int xx = cx + dx[i];
            int yy = cy + dy[i];
            if (xx >= 0 && yy >= 0 && xx < N && yy < N) {
                if (visited[xx][yy] == 0 && arr[xx][yy] > h) {
                    visited[xx][yy] = 1;
                    q.push(make_pair(xx, yy));
                }
            }
        }
    }
}

int main() {
    cin >> N;
    int max_height = -1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
            if (max_height < arr[i][j]) {
                max_height = arr[i][j]; // 최대 높이 계산
            }
        }
    }

    int max_regions = 0;
    for (int h = 0; h <= max_height; h++) {
        memset(visited, 0, sizeof(visited));
        int regions = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (visited[i][j] == 0 && arr[i][j] > h) {
                    BFS(i, j, h);
                    regions++;
                }
            }
        }
        if (regions > max_regions) {
            max_regions = regions;
        }
    }

    cout << max_regions << endl;
    return 0;
}