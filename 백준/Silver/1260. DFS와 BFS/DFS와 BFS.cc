#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

bool d_visited[1001];
bool b_visited[1001];
vector<int> graph[10001]; // 각 노드들이 어떤 점과 인접해있는지 저장하는 컨테이너이다.

void dfs(int x){
  d_visited[x] = true;
  cout << x << " ";
  for (int i = 0; i < graph[x].size(); i++){ //노드에서 인접한 개수만큼 반복하기.
    int y = graph[x][i];
    if(!d_visited[y]){
      dfs(y);
    }
  }
} //vector를 사용하면 각 벡터에 추가로 행처럼 삽입가능하다. 그래서 어느 노드(행)의 어떤 인접노드(열)이 있는지 판별할 수 있다.

void bfs(int start){
  queue<int> q;
  q.push(start); //첫 노드를 큐에 삽입한다.
  b_visited[start] = true;
  while(!q.empty()){ //큐가 빌 때까지 반복한다.
    int x = q.front();
    q.pop();
    cout << x << " ";
    for (int i = 0; i < graph[x].size(); i++){
      int y = graph[x][i];
      if(!b_visited[y]){
        q.push(y);
        b_visited[y] = true;
      }
    }
  }
}

int main(){
  int m, n, k;
  cin >> m >> n >> k;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  // 각 노드의 인접 리스트를 정렬
  for (int i = 1; i <= m; i++) {
    sort(graph[i].begin(), graph[i].end());
  }
  dfs(k);
  cout << '\n';
  bfs(k);
}