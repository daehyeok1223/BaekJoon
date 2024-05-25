#include<iostream>
using namespace std;

int arr[2000][11];
int dp[2000][11];
int sum = 0;

int main(){
  int N;
  cin >> N;

  for (int i = 1; i <= N; i++){
    for (int j = 0; j < 10; j++){
      if (i == 1 || j == 0){
        dp[i][j] = 1;
      }
      else{
        dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 10007;
      }
    }
  }
  for (int i = 0; i < 10; i++){
    sum = (sum + dp[N][i]) % 10007;
  }

  cout << (sum % 10007);

  return 0;
}
