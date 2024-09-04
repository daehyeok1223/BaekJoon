#include<iostream>
#include<algorithm>
using namespace std;

//결국 인접해 있는 친구들 조사한란 의미

int field[50][50];
int m, n, k, x, y;
int t;
int ans = 0;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

void dfs(int x, int y){
  field[x][y] = 0;
  for (int i = 0; i < 4; i++){
    int xx = x + dx[i];
    int yy = y + dy[i];
    if (xx < 0 || yy < 0 || xx >= m || yy >= n) continue; //범위에 벗어나면 그냥 지나치겠다는 소리
    if(field[xx][yy] == 1){//그리고 만약 배추가 심어져 있다면
      dfs(xx, yy);//심어진 곳으로부터
    }
  }
}

int main(){
  cin >> t;
  for (int i = 0; i < t; i++){
    cin >> m >> n >> k;
    for (int i = 0; i < k; i++){
      cin >> x >> y;
      field[x][y] = 1;
    }
    for (int i = 0; i < m; i++){
      for (int j = 0; j < n; j++){
        if(field[i][j] == 1){
          dfs(i, j);
          ans++;
        }
      }
    }
    cout << ans << '\n';
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        field[i][j] = 0;
      }
    }
    ans = 0;
  }
}