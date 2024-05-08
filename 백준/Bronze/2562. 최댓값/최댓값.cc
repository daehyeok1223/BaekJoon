#include<iostream>
using namespace std;

int main(){
  int arr[10];
  for (int i = 0; i < 9; i++){
    cin >> arr[i];
  }
  int temp = 0;
  int cnt = 0;
  for (int i = 0; i < 9; i++) {
    if(temp < arr[i]){
      temp = arr[i];
      cnt = i;
    }
  }
  cout << temp << '\n' << cnt + 1;
}