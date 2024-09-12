#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
  int N;
  cin >> N;
  double arr[1001];
  double ans = 0;
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + N);
  for (int i = 0; i < N; i++){
    ans += arr[i] * 100  / arr[N - 1];
  }
  cout << ans / N << '\n';
}