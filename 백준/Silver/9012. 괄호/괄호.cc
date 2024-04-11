#include<iostream>
#include<stack>
#include<string>
#include<vector>

using namespace std;

string v;

int main(){
  int T;
  cin >> T;
  for (int i = 0; i < T; i++){
    stack<char> s;

    cin >> v;

    for (int j = 0; j < v.size(); j++) {
      if (!s.empty() && s.top() == '(' && v[j] == ')') 
        {
          s.pop();
        }
      else {
        s.push(v[j]);
      }
    }  
    if(s.empty()){
      cout << "YES" << '\n';
    }
    else
      cout << "NO" << '\n';
      
  }
}