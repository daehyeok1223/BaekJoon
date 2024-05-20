#include<iostream>
#include<algorithm>
using namespace std;

int n, ret;
int table[20][20];
int team1[10];
int team2[10];
int pick[20];

void update(){
  int t1_size = 0;
  int t2_size = 0;
  for (int i = 0; i < n; i++) {
    if(pick[i] == 0){
      team1[t1_size++] = i;
    }
    else{
      team2[t2_size++] = i;
    }
  }
  int sum1 = 0;
  int sum2 = 0;
  for (int i = 0; i < n / 2; i++){
    for (int j = i + 1; j < n / 2; j++) {
      sum1 += (table[team1[i]][team1[j]] + table[team1[j]][team1[i]]);
      sum2 += (table[team2[i]][team2[j]] + table[team2[j]][team2[i]]);
    }
  }
  if(ret > abs(sum1 - sum2)){
    ret = abs(sum1 - sum2);
  }
}

void dfs(int cur, int pick_count){ //cur은 현재 탐색중인 위치,
//pick_count는 팀 내에서 몇 명을 뽑았는지 알려주는 변수이다.
  if (pick_count == (n / 2)){//모든 팀원을 탐색하는 데 사용.
    update();
    return;  // 만약 팀원을 다 뽑으면 빠져나와라.
  }
  for (int i = cur; i < n; i++){
    pick[i] = 1; //만약 i를 뽑았다면
    dfs(i + 1, pick_count + 1);
    pick[i] = 0; //1을 포함한 모든 경우의 수를 세고 다시 안뽑은 상태로 만들어준다.
  }
}

int main(){
  cin >> n;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cin >> table[i][j];
    }
  }

  ret = 999999999;
  dfs(0, 0);
  cout << ret;

  return 0;
}