#include<iostream>
using namespace std;

int main(){
  int ans = 0;
  int N;
  int sum = 1;
  cin >> N;
  for (int i = N; i > 0; i--) {
    int K = i;
    int cnt = 0;
    while (K > 0) {
      cnt += K % 10; 
      K = (K - K % 10) / 10;
    }
    if (i + cnt == N) {
      ans = i;
    } 
  }
  cout << ans << '\n';
}