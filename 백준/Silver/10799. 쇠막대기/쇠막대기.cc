#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

int main(){
  string str;
  getline(cin, str);
  int ans = 0;
  int cnt = 0;

  for (int i = 0; i < str.length(); i++) {
    if (str[i] == '(') {
      cnt++;
    } 
    else if (str[i] == ')') {
      if(i!=0 && str[i-1] == '('){ 
        cnt--;
        ans = ans + cnt;
      }
      else {
        cnt--;
        ans++;
      }
    }
  }

  cout << ans;
  return 0;
}
