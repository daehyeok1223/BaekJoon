#include<iostream>
using namespace std;

int main(){
  int N;
  int i = 7;
  int cnt = 2;
  cin >> N;
  if(N == 1){
    cout << "1" << '\n';
  }
  else{
    while(1){
      if(N <= i){
        cout << cnt;
        return 0;
      }
      else{
        i = i + 6 * cnt;
        cnt++;
      }
    }
  }
}
  


