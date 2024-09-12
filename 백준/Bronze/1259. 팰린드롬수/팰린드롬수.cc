#include<iostream>
#include<string>
using namespace std;

int main(){
  string s;
  int flag;
  while (1) {
    cin >> s;
    if(s[0] == '0'){
      return 0;
    }
    for (int i = 0; i < s.length(); i++){
      if (s[i] == s[s.length() - i - 1]){
        flag = 1;
      }
      else if(s[i] == 0){
        return 0;
      }
      else{
        flag = 0;
        break;
      }
    }
    if(flag == 0){
      cout << "no" << '\n';
    }
    else if(flag == 1){
      cout << "yes" << '\n';
    }
  }
}