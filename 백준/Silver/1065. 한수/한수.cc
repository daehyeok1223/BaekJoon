#include<iostream>
using namespace std;

int main(){
  int N;
  cin >> N;
  int ans = 99;

  for (int i = 100; i <= N; i++){
    if ((i / 100) + (i % 10) == 2 * ((i / 10) % 10)) {
      ans++;
    } 
  }
  if (N < 100){
    cout << N;
  }
  else{
    cout << ans;
  }
}
