#include<iostream>
using namespace std;

int dp[1001][1001];

int main(){
  int N, K;
  cin >> N >> K;
  dp[1][0] = 1;
  dp[1][1] = 1;
  for (int i = 1; i <= N; i++){
    for (int j = 0; j <= i; j++){
      if (i == j || j == 0){
        dp[i][j] = 1;
      }
      else{
        dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;
      }
    }
  }

  cout << dp[N][K];
}