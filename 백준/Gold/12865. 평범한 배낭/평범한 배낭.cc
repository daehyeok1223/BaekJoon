#include<iostream>
#include<algorithm>
using namespace std;

int dp[101][100001];
int W[101];
int V[101];

int main(){
  int n, k;
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {  // k는 배낭과 가치의 총 개수
    cin >> W[i] >> V[i];
  }
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= k; j++){
      if (j >= W[i]){
        dp[i][j] = max(dp[i - 1][j], V[i] + dp[i - 1][j - W[i]]);
      } 
      else {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }
  cout << dp[n][k];
}