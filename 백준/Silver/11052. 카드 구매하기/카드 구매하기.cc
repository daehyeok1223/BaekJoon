#include<iostream>
using namespace std;

int dp[1001];
int arr[1001];
int temp = -1;

int main(){
  int N;
  cin >> N;
  for (int i = 1; i <= N; i++){
    cin >> arr[i];
  }
  dp[1] = arr[1];
  dp[2] = max(arr[2], arr[1] * 2);

  for (int i = 3; i <= N; i++) {
    for (int j = 1; j <= i; j++){
      if (j <= i - j){
        dp[i] = max(dp[j] + dp[i - j], arr[i]);
        if (temp < dp[i]) {
          temp = dp[i];
        }
      }
      else
        break;
    }
    dp[i] = temp;
  }
  cout << dp[N];
}