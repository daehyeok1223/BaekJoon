#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int n, m;
int dist[101][101]; //
char map[101][101]; //미로를 만들 배열
int visited[101][101];

void bfs(int x, int y){
  visited[x][y] = 1; //첫 시작점, 여기서는 0,0부터 시작.
  queue<pair<int, int> > q;
  q.push(make_pair(x, y)); //큐에 x와 y를 하나로 묶어서 큐에 집어넣는다.
  while(!q.empty()){
    int a = q.front().first; //좌표의 x좌료
    int b = q.front().second; //좌표의 y좌표

    q.pop();
    for (int i = 0; i < 4; i++){
      int nx = a + dx[i];
      int ny = b + dy[i];
      if (nx >= 0 && nx < n && ny >= 0 && ny < m){//상하좌우 움직였을 때 격자를 빠져나가서는 안된다.
        if(visited[nx][ny] == 0 && map[nx][ny] == '1'){
          dist[nx][ny] = dist[a][b] + 1;
          visited[nx][ny] = 1;
          q.push(make_pair(nx, ny));
        }
      }
    }
  }
}

int main(){
  cin >> n >> m;
  for (int i = 0; i < n; i++){
    cin >> map[i];
  }
  bfs(0, 0);
  cout << dist[n - 1][m - 1] + 1 << '\n';
  return 0;
}