#include<iostream>

using namespace std;

int main(){
  int N;
  int cnt = 0;
  cin >> N;
  if(N < 5){
    if(N % 2==0){
      cout << N / 2;
    }
    else{
      cout << "-1";
    }
  } 
  else {
    while(N >= 5){
    N = N - 5;
    cnt++;
  }

  if(N % 2 == 0){
    cout << cnt + (N / 2);
  }
  else{
    cout << cnt - 1 + (N + 5) / 2;
  }
  }
}