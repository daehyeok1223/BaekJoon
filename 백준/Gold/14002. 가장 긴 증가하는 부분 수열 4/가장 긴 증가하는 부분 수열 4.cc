#include<iostream>
#include<stack>

using namespace std;

int N;
int arr[1000];
int dp[1000];
int ans[1000];
int k = 1;
stack<int> s;

int main(){
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> arr[i];
  }
  int sum = 0;
  for (int i = 0; i < N; i++){
    dp[i] = 1;
    for (int j = 0; j < i; j++){
      if(arr[i] > arr[j]){
        dp[i] = max(dp[i], dp[j] + 1);
      }
    }
    sum = max(sum, dp[i]);
  }
  cout << sum << '\n';

  for (int i = N - 1; i >= 0; i--){
    if(dp[i] == sum){
      s.push(arr[i]);
      sum--;
    }
  }

  while(!s.empty()){
    cout << s.top();
    s.pop();
    cout << " ";
  }

  return 0;
}