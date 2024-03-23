#include <iostream>

using namespace std;

int main(){
  long long cnt = 1;
  long long N;
  cin >> N;

  while(1){
    N = N - cnt;
    cnt++;
    if (N < 0) {
      cnt = cnt - 2;
      break;
    }
  }
  cout << cnt;
  return 0;
}