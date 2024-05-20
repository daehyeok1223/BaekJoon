#include<iostream>
using namespace std;

void prints(int a){
  for (int i = 0; i < a; i++){
    cout << "*";
  }
}
void printb(int a){
  for (int i = 0; i < a; i++){
    cout << " ";
  }
}

int main(){
  int N;
  cin >> N;
  for (int i = 1; i <= N; i++) {
    printb(N - i);
    prints(i);
    cout << '\n';
  }
}