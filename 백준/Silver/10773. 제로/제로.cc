#include<iostream>
#include<stack>
using namespace std;

stack<int> s;

int main(){
  int N;
  int sum = 0;
  cin >> N;
  for (int i = 0; i < N; i++){
    int a;
    cin >> a;
    if (a == 0){
      if(!s.empty()){
        s.pop();
      }
    }
    else{
      s.push(a);
    }
  }
  while(!s.empty()){
    sum += s.top();
    s.pop();
  }
  cout << sum;
}