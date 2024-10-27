#include<iostream>
#include<algorithm>
using namespace std;

unsigned int ans;
unsigned int N, K;
unsigned int list[10000];

int main(){
  cin >> K >> N;
  unsigned int maximum = 0;
  for (int i = 0; i < K; i++){
    cin >> list[i];
    maximum = max(maximum, list[i]);
  }
  unsigned int left = 1;
  unsigned int mid;
  unsigned int right = maximum;

  while(left <= right){
    mid = (left + right) / 2;
    unsigned int cnt = 0;
    for (int i = 0; i < K; i++) {
      cnt += list[i] / mid;
    }
    if(cnt >= N){
      left = mid + 1;
      ans = max(ans, mid);
    }
    else{
      right = mid - 1;
    }
  }
  cout << ans << '\n';
}