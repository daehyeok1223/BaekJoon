#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int N;

int main(){
  
  cin >> N;
  vector<int> dp(N + 2);
  vector<int> T(N + 2);
  vector<int> P(N + 2);
  for (int i = 1; i <= N; i++) {
    cin >> T[i];
    cin >> P[i];
  }
  for (int i = 1; i < N + 2; i++){
    dp[i] = max(dp[i], dp[i - 1]);
    if (i + T[i] <= N + 1) {
      dp[i + T[i]] = max(dp[i + T[i]], dp[i] + P[i]);
    }
    
  }
  cout << dp[N + 1] << '\n';
}