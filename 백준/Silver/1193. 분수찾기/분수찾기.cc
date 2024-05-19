#include<iostream>
using namespace std;

int main(){
  int N;
  int cnt = 0;
  int i = 1;
  cin >> N;

  while(N>0){
    N = N - i;
    i++;
    cnt++;
  }
  if(cnt % 2 == 0){
    cout << cnt + N << "/" << -N + 1;
  } 
  else {
    cout << -N + 1 << "/" << cnt + N;
  }
}