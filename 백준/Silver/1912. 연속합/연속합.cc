#include<iostream>
using namespace std;

int arr[100001];
int dp[100001];
int temp = -1001;

int main(){
  int N;
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> arr[i];
  }

  dp[0] = arr[0];
  for (int i = 1; i < N; i++){
    dp[i] = max(arr[i], dp[i - 1] + arr[i]);
  }

  for (int i = 0; i < N; i++){
    if(temp < dp[i]){
      temp = dp[i];
    }
  }
  cout << temp;
}