#include<iostream>
#include<stack>
#include<string>
using namespace std;

stack<int> s;
string S;

int main(){
  int N,a;
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> S;
    if(S == "push"){
      cin >> a;
      s.push(a);
    } 
    else if (S == "pop") {
      if(s.empty() == 1){
        cout << "-1";
      }
      else{
        cout << s.top();
        s.pop();
      }
      cout << '\n';
    } 
    else if (S == "size") {
      cout << s.size() << '\n';
    }
    else if(S == "empty"){
      if(s.empty() == 1){
        cout << "1";
      }
      else{
        cout << "0";
      }
      cout << '\n';
    }
    else if(S == "top"){
      if(s.empty() == 1){
        cout << "-1";
      }
      else{
        cout << s.top();
      }
      cout << '\n';
    }
  }
}