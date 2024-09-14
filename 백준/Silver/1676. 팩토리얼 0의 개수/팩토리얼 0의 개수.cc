#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int dp[1000];

int main(){
  int N;
  int ans = 0;
  cin >> N;
  for (int i = N; i > 4; i--){
    if(i % 5 == 0){
      int k = i;
      while (k % 5 == 0) {
        k = k / 5;
        ans++;
      }
    }
  }

  cout << ans;
}
