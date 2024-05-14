#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
using namespace std;

queue<int> q;
string s;

int main(){
  int N;
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> s;
    if (s == "push") {
      int x;
      cin >> x;
      q.push(x);
    } 
    else if (s == "pop") {
      if(!q.empty()){
        cout << q.front();
        q.pop();
      } 
      else {
        cout << "-1";
      }
      cout << '\n';
    } 
    else if (s == "size") {
      cout << q.size();
      cout << '\n';
    } 
    else if (s == "empty") {
      if(!q.empty()){
        cout << "0";
      }
      else{
        cout << "1";
      }
      cout << '\n';
    } 
    else if (s == "front") {
      if(!q.empty()){
        cout << q.front();
      }
      else{
        cout << "-1";
      }
      cout << '\n';
    } 
    else if (s == "back") {
      if(!q.empty()){
        cout << q.back();
      }
      else{
        cout << "-1";
      }
      cout << '\n';
    }
  }
}