#include<iostream>
#include<vector>
using namespace std;

vector<int> vec[1001];
int visited[1001];

int N, M;

void DFS(int k){
  visited[k] = 1;
  for (int i = 0; i < vec[k].size(); i++){
    int index = vec[k][i];
    if(visited[index] == 0){
      DFS(index);
    }
  }
}

int main(){
  int u, v;
  int cnt = 0;
  cin >> N >> M;
  for (int i = 0; i < M; i++){
    cin >> u >> v;
    vec[u].push_back(v);
    vec[v].push_back(u);
  }
  for (int i = 1; i <= N; i++){
    if(visited[i] == 0){
      cnt++;
      DFS(i);
    }
  }
  cout << cnt << '\n';
}