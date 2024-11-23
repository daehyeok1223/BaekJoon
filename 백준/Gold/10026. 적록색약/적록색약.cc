#include<iostream>
#include<cstring>
using namespace std;

int N;
char arr[101][101];
int visited[101][101];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(int x, int y){
  if(visited[x][y] == 1){
    return;
  }
  visited[x][y] = 1;
  for (int i = 0; i < 4; i++){
    int xx = x + dx[i];
    int yy = y + dy[i];
    if((arr[xx][yy] == arr[x][y]) && visited[xx][yy] == 0){
      dfs(xx,yy);
    }
  }
}

int main(){
  int cnt = 0;
  cin >> N;
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      if(visited[i][j] == 0){
        dfs(i, j);
        cnt++;
      }
    }
  }
  cout << cnt << " ";
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      if(arr[i][j] == 'R'){
        arr[i][j] = 'G';
      }
    }
  }
  cnt = 0;
  memset(visited, 0, sizeof(visited));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++){
      if(visited[i][j] == 0){
        dfs(i, j);
        cnt++;
      }
    }
  }
  cout << cnt << '\n';
  return 0;
}