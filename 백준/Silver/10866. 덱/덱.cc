#include<iostream>
#include<deque>
using namespace std;

deque<int> d;

int main(){
  int N;
  cin >> N;
  for (int i = 0; i < N; i++){
    string s;
    cin >> s;
    if(s == "push_front"){
      int a;
      cin >> a;
      d.push_front(a);
    }
    else if(s == "push_back"){
      int a;
      cin >> a;
      d.push_back(a);
    }
    else if(s == "pop_front"){
      if(!d.empty()){
        cout << d.front();
        d.pop_front();
      }
      else{
        cout << "-1";
      }
      cout << '\n';
    }
    else if(s == "pop_back"){
      if(!d.empty()){
        cout << d.back();
        d.pop_back();
      }
      else{
        cout << "-1";
      }
      cout << '\n';
    }
    else if(s == "size"){
      cout << d.size() << '\n';
    }
    else if(s == "empty"){
      if(!d.empty()){
        cout << "0";
      }
      else{
        cout << "1";
      }
      cout << '\n';
    }
    else if(s == "front"){
      if(!d.empty()){
        cout << d.front();
      }
      else{
        cout << "-1";
      }
      cout << '\n';
    }
    else if(s == "back"){
      if(!d.empty()){
        cout << d.back();
      }
      else{
        cout << "-1";
      }
      cout << '\n';
    }
  }
}
