#include<iostream>
#include<string>

using namespace std;

int main(){
  string s;
  cin >> s;
  int cnt = 0;
  for (int i = 0; i < s.length(); i++) {
    if(s[i] == 'c' && s[i+1] == '='){
      cnt++; 
      i++;
    }
    else if(s[i] == 'c'&& s[i+1] == '-'){
      cnt++;
      i++;
    } 
    else if (s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=') {
      cnt++;
      i++;
      i++;
    }
    else if(s[i] == 'd' && s[i+1] == '-'){
      cnt++;
      i++;
    }
    else if(s[i] == 'l' && s[i+1] == 'j'){
      cnt++;
      i++;
    }
    else if(s[i] == 'n' && s[i+1] == 'j'){
      cnt++;
      i++;
    }
    else if(s[i] =='s' && s[i+1] == '='){
      cnt++;
      i++;
    }
    else if(s[i] == 'z' && s[i+1] == '='){
      cnt++;
      i++;
    }
    else{
      cnt++;
    }
  }
  cout << cnt;
}