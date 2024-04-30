#include<iostream>
using namespace std;

int arr[20000];
int dp[20000];
int temp = 0;


int main(){
  int N;
  cin >> N;
  
  for (int i = 0; i < N; i++){
    cin >> arr[i];
  }
  dp[0] = arr[0];
  dp[1] = arr[0] + arr[1];
  for (int i = 2; i < N; i++) {
    dp[i] = max(dp[i - 2] + arr[i], max(dp[i - 3] + arr[i - 1] + arr[i],dp[i-1]));
  }

  for (int i = 0; i < N; i++){
    if(temp < dp[i]){
      temp = dp[i];
    }
  }
  cout << temp;

  return 0;
}