#include<iostream>
using namespace std;

int arr[101][101];
int dp[101][101];
int sum = 0;

int main(){
  int N;
  cin >> N;
  dp[1][0] = 0;
  for (int i = 1; i < 10; i++) {
    dp[1][i] = 1;
  }
  for (int i = 2; i <= N; i++){
    for (int j = 0; j < 10; j++){
      if(j==0){
        dp[i][0] = dp[i - 1][j + 1];
      }
      else if(j==9){
        dp[i][9] = dp[i - 1][j - 1];
      }
      else{
        dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
      }
      dp[i][j] %= 1000000000;
    }
  }
  for (int i = 0; i < 10; i++){
    sum = (sum + dp[N][i]) % 1000000000;
  }

  cout << sum;
}