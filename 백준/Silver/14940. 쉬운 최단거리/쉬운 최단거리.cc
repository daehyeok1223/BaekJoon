#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int map[1000][1000];
bool visited[1000][1000];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };
queue<pair<int,int> > q;

int n, m; //가로 세로의 크기

void bfs(){
  while(!q.empty()){
    int x = q.front().first;
    int y = q.front().second;//첫 시작에 이 좌표는 2(출발점) 이 있는 좌표일 것이다.
    q.pop(); // 큐를 2차원으로 만들었기 때문에 pop을 하면 좌표가 빠져나갈 것이다.

    for (int i = 0; i < 4; i++){
      int nx = x + dx[i];
      int ny = y + dy[i]; //for문을 4번 돌면서 상하좌우로 한 칸씩 이동한다는 뜻.
      if(nx >= 0 && nx < n && ny >= 0 && ny < m){
        if(visited[nx][ny] == false){ //방문하지 않았을 때
          map[nx][ny] = map[x][y] + 1; //방문하지 않았으므로 1칸 멀어지기 때문에 1을 더해준다.
          visited[nx][ny] = true; //방문했으니까 true로 바꿔준다. 
          q.push(make_pair(nx,ny)); //queue에 그 좌표값을 넣어준다.                                  
        }
      }

    }
  }
}

int main() { 
  cin >> n >> m;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      cin >> map[i][j];
      if(map[i][j] == 2){
        map[i][j] = 0;
        q.push(make_pair(i,j));
        visited[i][j] = true; // 여기서 도착지가 2인 곳을 push해준다. 그리고 visited 또한 true라고 남겨준다. 그래서 bfs의 while문에서 큐가 비어있지 않아서 바로 들어갈 수 있다.
      }
      else if(map[i][j] == 0){
        visited[i][j] = true; //접근할 수 없는 곳은 visited를 true로 설정하는 것으로 bfs에서 방문 못하도록 한다.
      }
    }
  }
  bfs();

  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      if(visited[i][j] == false){
        cout << "-1 ";
      } 
      else{
        cout << map[i][j] << " ";
      }
    }
        cout << '\n';
  }
}