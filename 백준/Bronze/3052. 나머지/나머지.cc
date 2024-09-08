#include<iostream>
using namespace std;

int ans[43];
int cnt = 0;

int main(){
  int arr[10];
  for (int i = 0; i < 10; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < 10; i++){
    ans[arr[i] % 42]++;
  }
  for (int i = 0; i < 42; i++){
    if(ans[i] !=0) {
      cnt++;
    }
  }
  cout << cnt << '\n';
}