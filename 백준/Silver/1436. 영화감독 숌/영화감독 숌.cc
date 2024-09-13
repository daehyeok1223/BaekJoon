#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int sol(int N){
  int k = 666;
  string s;
  int cnt = 0;
  while(1){
    s = to_string(k);
    for (int i = 0; i < s.length() - 2; i++) {
      if(s[i] == '6' && s[i+1] == '6' && s[i + 2] == '6'){
        cnt++;
        if(cnt == N){
          return k;
        }
        break;
      }
    }
    k++;
  }
}

int main(){
  int N;
  cin >> N;
  cout << sol(N);
}

//그냥 부르트포스로 쭉 늘린다고..?
