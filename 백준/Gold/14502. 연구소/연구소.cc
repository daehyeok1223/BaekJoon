// 바이러스가 상하좌우로 퍼진다 -> BFS를 사용해야 한다.
// 벽을 3개 세워야 한다 -> 백트래킹(조합), 모든 빈 칸 중에서 3개를 선택해서 벽을 세운 뒤에 모든 경우의 안전영역을 구해본다.

//조합 코드를 짜는 데에는 여러가지 방법이 존재
//1. 맵 전체를 돌면서 빈칸이 나얼 시에 벽3개를 선택하는 조합
//2. 맵 전체를 돌며 빈칸이 나올 시, 해당 빈칸은 벽으로 바꾼 뒤에 2개씩 선택하는 조합
//3. 입력 받을 시에 모든 빈칸을 1차원 배열로 받은 뒤 해당 배열을 조합하는 방법

//1번 방법은 시간 초과가 날 듯 하다..

#include<iostream>
#include<queue>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m;
int map[8][8];//연구소의 초기상태를 저장하는 배열
int temp[8][8];//연구소의 update되는 상태를 저장하는 배열
int ans;

void copyArray(int Copy_map[8][8], int Map[8][8]){
  for (int i = 0; i < 8; i++){
    for (int j = 0; j < 8; j++){
      Copy_map[i][j] = Map[i][j];
    }
  }
}

void spreadVirus(){
  int spread[8][8];
  copyArray(spread, temp);
  queue<pair<int, int> > q;//BFS를 위한 큐

  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
        if(spread[i][j] == 2){
          q.push(make_pair(i, j));
        }
    }
  }//초기 상태의 배열에서 바이러스가 있는 위치를 2차원 queue를 이용해 저장한다.

  while(!q.empty()){
    pair<int, int> cur = q.front();
    q.pop();
    for (int i = 0; i < 4; i++){
      int nx = cur.first + dx[i];
      int ny = cur.second + dy[i];
      if (nx < 0 || ny < 0 || nx >= n || ny >= m){
        continue;
      }
      if(spread[nx][ny] == 0){
        spread[nx][ny] = 2;
        q.push(make_pair(nx, ny));
      }
    }
  }

  int cnt = 0;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
        if(spread[i][j] == 0){
          cnt++;
        }
    }
  }
  ans = max(cnt, ans);
}

void wall(int cur){
  if(cur == 3){
    spreadVirus();
    return;
  }
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      if(temp[i][j] == 0){
        temp[i][j] = 1;
        wall(cur + 1);
        temp[i][j] = 0;
      }
    }
  }
}

int main(){
  cin >> n >> m;
  for(int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      cin >> map[i][j];
    }
  }
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
        if(map[i][j] == 0){
          copyArray(temp, map);
          temp[i][j] = 1;
          wall(1);
          temp[i][j] = 0;
        }
    }
  }
  cout << ans;
  return 0;
}
