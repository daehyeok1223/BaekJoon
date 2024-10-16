#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int arr[301][301]; // 몇번째만에 도달할 수 있는지
queue<pair<int, int> > q;
int k;
int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, 2, -2, 1, -1};

void Bfs(int x, int y){
  while (!q.empty()){
    int m = q.front().first;
    int n = q.front().second;
    q.pop();
    if(m == x && n == y){
      cout << arr[m][n] << '\n';
      return;
    }
    for (int i = 0; i < 8; i++) {
      int nx = m + dx[i];
      int ny = n + dy[i];
      if (nx >= 0 && ny >= 0 && nx < k && ny < k && arr[nx][ny] == -1) {
        arr[nx][ny] = arr[m][n] + 1;
        q.push(make_pair(nx, ny));
      }
    }
  }  
}

int main(){
  int n; //시행 횟수
  cin >> n;
  for (int e = 0; e < n; e++) {
    while (!q.empty()) q.pop();
    for (int i = 0; i < 300; i++) {
      for (int j = 0; j < 300; j++) {
        arr[i][j] = -1;
      }
    }  // 격자 크기
    cin >> k;
    int x, y, w, z;
    cin >> x >> y;
    cin >> w >> z;
    arr[x][y] = 0;
    q.push(make_pair(x, y));
    Bfs(w, z);
  }
}