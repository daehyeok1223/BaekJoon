#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
  string str;
  getline(cin, str);

  stack<char> stack; // 내가 입력받을 stack을 의미한다.
  for (int i = 0; i < str.length(); i++){
    if (str[i]=='<'){
      while(!stack.empty()){
        cout << stack.top();
        stack.pop(); // stack이 빌 때까지 pop하라는 뜻
      }//<를 만나면 일단 스택에 존재하는 전에 것들은 다 pop해야 한다.
      while(1){
        cout << str[i];
        if (str[i] == '>') {
          break;
        }
        i++;
      }
    }
    else if(str[i]==' '){
      while(!stack.empty()){
        cout << stack.top();
        stack.pop(); // stack이 빌 때까지 pop하라는 뜻
      }
      cout << " ";

    }
    else{
      stack.push(str[i]); //그냥 들어오는 녀석들은 스택에 넣어준다. 입력한 문자열을 스택에 넣어주는 역할을 한다.
    }    
  }
  while(!stack.empty()){
    cout << stack.top();
    stack.pop(); // stack이 빌 때까지 pop하라는 뜻
  }
}