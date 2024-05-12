#include<iostream>
#include<queue>

using namespace std;

queue<int> q;

int main(){
  int N;
  cin >> N;
  for (int i = 0; i < N; i++){
    q.push(i + 1);
  }
  while(q.size() > 1){
    if(!q.empty()){
      q.pop();
      if(q.size() == 1){
        break;
      }
      int a = q.front();
      q.pop();
      q.push(a);
    }
  }
  cout << q.front();
}