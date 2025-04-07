#include<iostream>
using namespace std;

int N, K;
int x[50];
int y[50];

int Cal(int i, int j, int k){
  int ans = 0;
  for (int h = 0; h < N; h++){
    ans = max(ans, min(min(abs(x[i] - x[h]) + abs(y[i] - y[h]),
                           abs(x[j] - x[h]) + abs(y[j] - y[h])),
                       abs(x[k] - x[h]) + abs(y[k] - y[h])));
  }
  return ans;
} // 최대 3개의 대피소가 존재할 수 있기에 이렇게 설정함

int main(){
  cin >> N >> K;
  int answer = 10000000;
  for (int i = 0; i < N; i++) {
    cin >> x[i] >> y[i];
  }  // x[i], y[i] 가 집이 있는 위치이다.

  if(K == 1){
    for (int i = 0; i < N; i++){
      answer= min(answer, Cal(i, i, i));
    }
  }
  if(K == 2){
    for (int i = 0; i < N; i++){
      for (int j = 0; j < N; j++){
        answer = min(answer, Cal(i, i, j));
      }
    }
  }
  if(K == 3){
    for (int i = 0; i < N; i++){
      for (int j = 0; j < N; j++){
        for (int k = 0; k < N; k++){
          answer = min(answer, Cal(i, j, k));
        }
      }
    }
  }
  cout << answer << '\n';
}
