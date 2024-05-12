#include<iostream>

using namespace std;

int arr[2][100001];
int dp[2][100001];

int main(){
  int N;
  cin >> N;
  for (int i = 0; i < N; i++){
    int a;
    cin >> a;
    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < a; j++){
        cin >> arr[i][j];
      }
    }
    dp[0][0] = arr[0][0];
    dp[1][0] = arr[1][0];
    dp[0][1] = max(arr[0][0], arr[0][1] + arr[1][0]);
    dp[1][1] = max(arr[1][0], arr[0][0] + arr[1][1]);

    for (int j = 2; j < a; j++) {
      for (int i = 0; i < 2; i++){
        if (i == 0){
          dp[0][j] = max(dp[1][j - 1], dp[1][j - 2]) + arr[0][j];
        }
        else if(i == 1){
          dp[1][j] = max(dp[0][j - 1], dp[0][j - 2]) + arr[1][j];
        }
      }
    }
    int c = max(dp[0][a - 1], dp[1][a - 1]);
    cout << c << '\n';
  }
}