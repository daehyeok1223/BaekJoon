#include<iostream>
using namespace std;

int arr[10];

int main(){
  int N,K;
  int cnt = 0;
  cin >> N >> K;
  for (int i = 0; i < N; i++){
    cin >> arr[i];
  }
  for (int i = N - 1; i >= 0 ; i--){
    while(arr[i] <= K){
      K = K - arr[i];
      cnt++;
    }
  }
  cout << cnt;
}