#include<iostream>
#include<algorithm>
using namespace std;

int arr[10000];

int main(){
  int a, b;
  int ans = 0;
  cin >> a >> b;
  int k = min(a, b);
  for (int i = 1; i <= k; i++) {
    if(a % i == 0 && b % i == 0){
      ans = i;
    }
  }
  cout << ans << '\n' << (a / ans) * (b / ans) * ans;
}