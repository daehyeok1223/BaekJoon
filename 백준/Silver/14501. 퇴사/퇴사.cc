#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int dp[100];
int T[100];
int P[100];

int N;

void Solution(){
  int m = 0;
  for (int i = 0; i <= N; i++){
    dp[i] = max(dp[i], m);
    if(N >= i + T[i]){
      dp[i + T[i]] = max(dp[i + T[i]], P[i] + dp[i]);
    }
    m = max(m, dp[i]);
  }
    cout << m;

}

int main(){
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> T[i];
    cin >> P[i];
  }

  Solution();

  return 0;
}
