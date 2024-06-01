#include<iostream>
using namespace std;
int cnt = 0;

int main(){
  int arr[10000];
  int N;
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> arr[i];
  }
  int k;
  cin >> k;
  for (int i = 0; i < N; i++){
    if(arr[i] == k){
      cnt++;
    }
  }
  cout << cnt;
}
