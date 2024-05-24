#include<iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int cnt = 1;
  for (int i = 1; i <= N; i++) {
    cnt = cnt * i;
  }
  cout << cnt;
}