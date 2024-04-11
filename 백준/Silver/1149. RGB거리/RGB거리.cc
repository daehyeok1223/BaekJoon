#include<iostream>
#include<algorithm>
using namespace std;

int arr[2000][3];
int dp[2000][3];

int main(){
  int N;
  cin >> N;
  for (int i = 0; i <= N - 1; i++) {
    for (int j = 0; j < 3; j++){
      cin >> arr[i][j];
    }
  }
  dp[0][0] = arr[0][0];
  dp[0][1] = arr[0][1];
  dp[0][2] = arr[0][2];

  for (int i = 1; i <= N - 1; i++){
    for (int j = 0; j < 3; j++){
        if(j == 0){
          dp[i][j] = min(dp[i - 1][1], dp[i - 1][2]) + arr[i][j];
        }
        else if(j == 1){
          dp[i][j] = min(dp[i - 1][0], dp[i - 1][2]) + arr[i][j];
        }
        else{
          dp[i][j] = min(dp[i - 1][0], dp[i - 1][1]) + arr[i][j];
        }
    }
  }
  int ans = min(min(dp[N - 1][0], dp[N - 1][1]), dp[N - 1][2]);

  cout << ans << '\n';
}