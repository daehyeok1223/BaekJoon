#include<iostream>

using namespace std;

long long arr[1000];

int main(){
  int N;
  cin >> N;
  arr[0] = 0;
  arr[1] = 1;
  arr[2] = 2;
  for (int i = 3; i <= N; i++){
    int ans = arr[i - 2] + arr[i - 1];
    arr[i] = ans % 10007;
  }
  cout << arr[N] << '\n';

  return 0;
}