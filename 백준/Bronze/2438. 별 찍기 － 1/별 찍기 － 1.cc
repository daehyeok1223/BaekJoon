#include<iostream>
using namespace std;

void sol(int n){
  for (int i = 1; i <= n; i++){
    cout << "*";
  }
}

int main(){
  int N;
  cin >> N;
  for (int i = 1; i <= N; i++){
    sol(i);
    cout << '\n';
  }
}