#include<iostream>
#include<string>
using namespace std;

int main(){
  string s;
  cin >> s;
  int answer = 0;
  bool minus = false;
  int temp = 0;  // 한번에 뺄 숫자들을 넣어줄 변수.
  for (int i = 0; i <= s.size(); i++) {
    if(i == s.size()){
        if(minus == true){
          answer -= temp;
        }
        else{
          answer += temp;
        }
    }
    //숫자일 때
    else if(s[i] != '+' && s[i] != '-'){
      temp *= 10;
      temp += (s[i] - '0');
    }
    else if (s[i] == '-' && minus == false){
      minus = true;
      answer += temp;
      temp = 0;
    }
    else if (s[i] == '+' && minus == false){
      answer += temp;
      temp = 0;
    }
    else{
      answer -= temp;
      temp = 0;
    }
  }
  cout << answer;
}