#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
  string str;
  stack<char> S;
  cin >> str;
  int cnt = 0; 

  for (int i = 0; i < str.length(); i++){
   if(S.empty()){
     S.push(str[i]);
   }
   else{
     if(S.top() == str[i]){
       S.push(str[i]);
     }
     else{
       S.push(str[i]);
       cnt++;
     }
   }
  }
  if(cnt % 2 == 0){
    cout << cnt / 2;
  }
  else{
    cout << (cnt + 1) / 2;
  }

  return 0;
}