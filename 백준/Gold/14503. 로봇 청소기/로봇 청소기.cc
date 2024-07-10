#include<iostream>
using namespace std;

int N, M;
int cnt;
int map[50][50];
int visited[50][50];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int r, c, d; // r,c는 처음 시작점

void dfs(){
  for (int i = 0; i < 4; i++){
    int next_d = (d + 3 - i) % 4;//d의 값에 상관없이 i가 하나씩 커질수록 왼방향으로 d의 방향을 바꿔줄 수 있다.
    int next_r = r + dx[next_d];
    int next_c = c + dy[next_d]; //왼쪽으로 방향전환을 해서 한 칸 움직였을 때의 다음 위치를 의미한다.

    // 왼쪽 방향에 청소할 수 있는 공간이 없는 경우
    if (next_r < 0 || next_r >= N || next_c < 0 || next_c >= M && map[next_r][next_c] == 1){
      continue;
    }
    
    //왼쪽 방향에 청소할 수 있는 공간이 있는 경우
    if(map[next_r][next_c] == 0 && visited[next_r][next_c] == 0){
      visited[next_r][next_c] = 1;
      cnt++;
      r = next_r;
      c = next_c;
      d = next_d;
      dfs();
    }
  }

  int back_d = d > 1 ? d - 2 : d + 2; //바라보는 방향을 기준으로 한 칸 후진하게 한다.
  int back_r = r + dx[back_d];
  int back_c = c + dy[back_d];

  if (back_r >= 0 && back_r <= N || back_c >= 0 || back_c <= M){
    if(map[back_r][back_c] == 0){
      r = back_r;
      c = back_c;
      dfs();
    }
    else{
      cout << cnt << endl;
      exit(0);
    }
  }
}

int main(){
  cin >> N >> M;
  cin >> r >> c >> d;
  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
      cin >> map[i][j];
    }
  }
  visited[r][c] = 1;
  cnt++;

  dfs();

  return 0;
}