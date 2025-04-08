#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int dx[4] = {0, 0, -1, 1}; // x: 열 방향
int dy[4] = {-1, 1, 0, 0}; // y: 행 방향
int arr[101][101];

int solution(vector<vector<int>> maps) {
    int row = maps.size();
    int col = maps[0].size();

    // 거리 배열 초기화
    for (int y = 0; y < row; y++) {
        for (int x = 0; x < col; x++) {
            arr[y][x] = -1;
        }
    }

    queue<pair<int, int>> q;
    q.push({0, 0});
    arr[0][0] = 1;

    while (!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny >= 0 && ny < row && nx >= 0 && nx < col) {
                if (maps[ny][nx] == 1 && arr[ny][nx] == -1) {
                    arr[ny][nx] = arr[y][x] + 1;
                    q.push({ny, nx});
                }
            }
        }
    }

    return arr[row - 1][col - 1]; // 도달 못하면 -1
}
