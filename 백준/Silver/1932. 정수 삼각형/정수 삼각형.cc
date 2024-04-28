#include<iostream>
using namespace std;

int arr[600][600];
int dp[600][600];
int temp = 0;

int main(){
  int N;
  cin >> N;
  for (int i = 0; i < N; i++){
    for (int j = 0; j <= i; j++){
      cin >> arr[i][j];
    }
  }
  dp[0][0] = arr[0][0];
  dp[1][0] = arr[0][0] + arr[1][0];
  dp[1][1] = arr[0][0] + arr[1][1];

  for (int i = 2; i < N; i++) {
    for (int j = 0; j <= i; j++){
      if (j == 0){
        dp[i][0] = arr[i][0] + dp[i - 1][0];
      } 
      else if (j == i){
        dp[i][i] = arr[i][i] + dp[i - 1][i - 1];
      }
      else {
        dp[i][j] = max(dp[i - 1][j - 1] + arr[i][j], dp[i - 1][j] + arr[i][j]);
      }
    }
  }

  for (int j = 0; j < N; j++){
    if (temp < dp[N - 1][j]) {
      temp = dp[N - 1][j];
    }
  }
  cout << temp;

  return 0;
}