#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int map[102];
bool visited[102];

void BFS(int a, int b){
  queue<pair<int, int> > q;
  q.push(make_pair(a, b));
  while(!q.empty()){
    int lo = q.front().first;
    int cn = q.front().second;
    q.pop();
    for (int i = 1; i <= 6; i++){
      int nx = lo + i;
      if(nx == 100){
        cout << cn + 1;
        return;
      }
      else if(nx < 100){
        while(map[nx] != 0){
          nx = map[nx];
        }
        if(!visited[nx]){
          q.push(make_pair(nx, cn + 1));
          visited[nx] = true;
        }
      }
    }
  }
}

int main(){
  int N, M, x, y, u, v;
  cin >> N >> M;
  for (int i = 0; i < N; i++) {
    cin >> x >> y;
    map[x] = y;
  }
  for (int i = 0; i < M; i++) {
    cin >> u >> v;
    map[u] = v;
  }
  BFS(1, 0);
  return 0;
}