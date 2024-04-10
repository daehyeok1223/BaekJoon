#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> dp;

int main(){
  int N;
  cin >> N;

  dp.resize(N + 1);
  dp[0] = 0;
  dp[1] = 0;
  dp[2] = 1;
  for (int i = 3; i <= N; i++){
    if(i % 3 == 0 && i % 2 == 0){
      dp[i] = min(dp[i / 3] + 1, min(dp[i / 2] + 1, dp[i - 1] + 1));
    } 
    else if(i % 3 == 0){
      dp[i] = min(dp[i / 3] + 1, dp[i - 1] + 1);
    } 
    else if (i % 2 == 0) {
      dp[i] = min(dp[i / 2] + 1, dp[i - 1] + 1);
    } 
    else {
      dp[i] = dp[i - 1] + 1;
    }
  }

  cout << dp[N] << '\n';
}