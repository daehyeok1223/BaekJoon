#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
  int T;
  cin >> T;
  cin.ignore(); // 입력 버퍼 비우기
  
  stack<char> stack;
  string str;
  
  for (int i = 0; i < T; i++){ // T번 반복, i는 0부터 시작
    getline(cin, str);
    for (int i = 0; i < str.length(); i++){
      if(str[i]==' '){
        while(!stack.empty()){
          cout << stack.top();
          stack.pop();
        }
        cout << " ";
      }
      else {
        stack.push(str[i]);
      }
    }
    while(!stack.empty()){
      cout << stack.top();
      stack.pop();
    }
    cout << "\n";
  }
}
