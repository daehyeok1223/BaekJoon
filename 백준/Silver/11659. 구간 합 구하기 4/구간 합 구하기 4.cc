#include<iostream>
using namespace std;
int arr[100001];
int dp[100001];

void Ans(int x, int y){
  cout << dp[y] - dp[x - 1] << '\n';
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int N, M;
  cin >> N >> M;
  for (int i = 1; i <= N; i++) {
    cin >> arr[i];
  }
  dp[0] = 0;
  for (int i = 1; i <= N; i++){
    dp[i] = dp[i - 1] + arr[i];
  }
  for (int i = 0; i < M; i++){
    int a, b;
    cin >> a >> b;
    cout << dp[b] - dp[a - 1]<< '\n';
  }
}